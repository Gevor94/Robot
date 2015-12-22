#include <iostream>
#include <algorithm>
using namespace std; 

class cell{
};                                                                      
															
class board
{
private:
	char str[10][10];
public:
	int a,b;
	char *operator[](int i) { return str[i] ;}
	void obstacles() ; // The function fills obstacles
	int treasures(int t) ; //The function fills rand treasures 
	void walls(); //The function of border maze
	void robot_place(int x , int y);//Robot's place

};
void board::walls()
{
	for(int j = 0 ; j < 10 ; j++)
	{

		str[0][j] = '_';

	}
	
	for (int  j = 1 ; j < 9 ; j++)
	{

		str[j][9] = '|';

	}

	for (int j = 1 ; j < 9 ; j++)
	{

		str[j][0] = '|';

	}

	for (int j = 0 ; j < 10 ; j++)
	{

		str[9][j] = '_';

	}


}

int board::treasures( int t) 
{
		int count = t ;
		int count = 10; 
		while(count != 0)
	 {
		int x = rand()% 8 + 1;
		int y = rand()% 8 + 1;
		while( str[x][y] != '*' && str[x][y] != '&' && str[x][y] !='1') 
		 {
				str[x][y] = '*';
				count--;
		 }
	 }
	
}
void board::robot_place(int x ,int y)
{
	if(str[x][y] != '*')
	{
		str[x][y] = '&';
		a = x;
		b = y;
	}
	else
	{
		cout << "The place is already busy ";
		return;
	}
	
}

void board::obstacles()
{
	cout << " Enter '1' for obstacles and '0' for empty cells ";
	for ( int  i = 1 ; i < 9 ; i++)
	{
		for ( int  j = 1 ; j < 9 ; j++)
		{
			if(str[i][j] != '*')
			{
			cin >> str[i][j];
			}

			else continue;
		}
	}
	
}


class robot{
private:
	char *s;
	board q;
public:
	void ScanLevel();// The function scan board and show answer;

};

void robot::ScanLevel()
{
	s = &q[q.a][q.b];



}
	


int main()
{
	return 0;
}
