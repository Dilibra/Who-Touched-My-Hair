//#pragma once
#ifndef TOWER_H
#define TOWER_H
#include <iostream>
using namespace std;

class Map;
class Monster;

const double typedata[][7] = {
//	AttackInterval	Cost			Sizey			HitPoint
//			Attack			Sizex			AttackRadius
	500,	10,		10,		1,		1,		8.0,	100,
	300,	30,		40,		1,		1,		2.0,	100,
	800,	20,		30,		1,		1,		4.0,	200,
};

class Tower
{
public:
	Tower();

	int arrayLocation[2];//λ�����꣬[0]Ϊx��[1]Ϊy

	int intAttackInterval;//�����������λ����

	int intAttack;//������

	int intCost;//�۸�

	int arraySize[2];//���Ĵ�С�����˿�[0]Ϊˮƽ���ȣ�[1]Ϊ��ֱ����

	double doubleAttackRadius;//������Χ��Ĭ��ΪԲ�Σ��ñ�������Բ�İ뾶

	int intHitPoint;//����ʣ��Ѫ��

	bool boolMonsterDetected;//

	int intTimeSum;//δ����ʱ����ۼ�

	Tower(int Locationx, int Locationy, int AttackInterval,	int Attack, int Cost,
		int Sizex, int Sizey,double AttackRadius, int HitPoint);//���캯������ʼ��������

	Tower(int type, int Locationx, int Locationy);

	bool update(int time, Map* map);//time��ʾ��ǰ��ʱ�䣬��λ���룬�ú�����timer���ã����Ը������Ĺ���CD��Ѫ��

	bool isInAttackingRange(Monster* monster, Map* map);//�жϹ��Ƿ������Ĺ�����Χ��

	Monster* searchMap(Map* map);//��map����ȡ�ֵ���Ϣ���ж�Ҫ���ĸ���
};

#endif // TOWER_H