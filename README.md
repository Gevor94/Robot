# Robot

Robot is a university OOP course project which should be completed until the end of semester by the group of students consists of two. More detailed information can be found in ProjectDescription.txt.
#include <iostream>
using namespace std;
class board{
  char str[10][10];
public:
	void obstacles() ; //Функция заполняющая препятствиями
	int treasures(int t) ; //Фун-ия заполняющая сокровищами
	void walls(); //Фун-ия границ лабиринта
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
		while( str[x][y] != '*' && str[x][y] != '&' && str[x][y] !=' ') // <= здесь есть недоработка в последнем str[x][y] 											//вместо пустых кавычек
		 {                                                              //будет значение obstacle
				str[x][y] = '*';
				count--;
		 }
	 }
	
}
