#include <iostream>
#include "tower.h"
#include "monster.h"
#include "map.h"
using namespace std;
int main()
{

	/*
	  0 1 2 3 4 5
	0 * * * + + +
	1 + + * + + +
	2 + * * + + +
	3 + * + * o +
	4 + * * * + +
	5 + + + + + +
	*/
	int road[12][2] = { 0,0 , 1,0 , 2,0 , 2,1 , 2,2 , 1,2 , 1,3 , 1,4 , 2,4 , 3,4 , 3,3 , 4,3 };


	//����Map��Ĺ��캯�� 
	Map newmap(road, 12, 6, 6);
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (newmap.MapState[i][j] == -1)
				cout << "*";
			else if (newmap.MapState[i][j] == -2)
				cout << "o";
			else if (newmap.MapState[i][j] == 0)
				cout << "+";
			else if (newmap.MapState[i][j] == 1)
				cout << "��";
			cout << " ";
		}
		cout << endl;
	}
	cout << endl;


	newmap.ProduceMonster(0);
	newmap.ProduceTower(0, 3, 2);
	cout << "����Monster�ĸ����У�" << newmap.intMonsterNumbers << endl;
	cout << "����Tower�ĸ����У�" << newmap.intTowerNumbers << endl;
	cout << endl;

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (newmap.MapState[i][j] == -1)
				cout << "*";
			else if (newmap.MapState[i][j] == -2)
				cout << "o";
			else if (newmap.MapState[i][j] == 0)
				cout << "+";
			else if (newmap.MapState[i][j] == 1)
				cout << "!";
			cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	newmap.ProduceTower(0, 3, 1);
	cout << "����Monster�ĸ����У�" << newmap.intMonsterNumbers << endl;
	cout << "����Tower�ĸ����У�" << newmap.intTowerNumbers << endl;
	cout << endl;

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (newmap.MapState[i][j] == -1)
				cout << "*";
			else if (newmap.MapState[i][j] == -2)
				cout << "o";
			else if (newmap.MapState[i][j] == 0)
				cout << "+";
			else if (newmap.MapState[i][j] == 1)
				cout << "!";
			cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	newmap.ProduceTower(0, 4, 0);
	cout << "����Monster�ĸ����У�" << newmap.intMonsterNumbers << endl;
	cout << "����Tower�ĸ����У�" << newmap.intTowerNumbers << endl;
	cout << endl;

	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (newmap.MapState[i][j] == -1)
				cout << "*";
			else if (newmap.MapState[i][j] == -2)
				cout << "o";
			else if (newmap.MapState[i][j] == 0)
				cout << "+";
			else if (newmap.MapState[i][j] == 1)
				cout << "!";
			cout << " ";
		}
		cout << endl;
	}
	cout << endl;

	while (true) {
		if (newmap.monsterExisted[0])cout << newmap.monsterExisted[0]->intHitPoint << ' ' << newmap.monsterExisted[0]->locationOrder << endl;
		else break;
		newmap.Update(20);
	}
	return 0;
}