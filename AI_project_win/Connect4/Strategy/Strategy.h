/********************************************************
*	Strategy.h : 策略接口文件                           *
*	张永锋                                              *
*	zhangyf07@gmail.com                                 *
*	2010.8                                              *
*********************************************************/

#ifndef STRATEGY_H_
#define	STRATEGY_H_


#include "Point.h"

#define maxn 12
#define maxm 8000000
#define P 131

extern "C" __declspec(dllexport) Point* getPoint(const int M, const int N, const int* top, const int* _board, 
	const int lastX, const int lastY, const int noX, const int noY);

extern "C" __declspec(dllexport) void clearPoint(Point* p);

void clearArray(int M, int N, int** board);

/*
	添加你自己的辅助函数
*/
//生成l~r之间的随机整数
int randint(int l, int r)
{
	return rand() % (r - l + 1) + l;
}
//定义结点Node
struct Node
{
	Node *son[maxn];
	int n, w;
}Tree[maxm];

int nTree;
Node* NewNode()
{
	Node *p = &Tree[++nTree];
	for (int i = 0; i<maxn; ++i)
		p->son[i] = 0;
	p->n = p->w = 0;
	return p;
}


#endif