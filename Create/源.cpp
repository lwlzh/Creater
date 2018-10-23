#pragma warning(disable:4996)
#include<cstdio>
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include"Doc.h"

#define INF 1000
using namespace std;

int n = 0;
bool use[INF];
doc head[INF];
int main()
{
	srand(time(NULL));
	freopen("in.txt","r",stdin);
	freopen("out.txt", "w", stdout);
	char a[50], b[50];
	while (scanf(" %s %s", a, b) != EOF)
	{
		head[++n].setEn(a);
		head[n].setCh(b);
		
	}
	int num = n;
	while (num--)
	{
		int x = rand() % n + 1;
		while (use[x]) {
			x = rand() % n + 1;
		}
		use[x] = true;
		printf("%d.  ", n - num);
		head[x].out(rand() & 1);
	}
	//system("pause");
	

	return 0;
}
