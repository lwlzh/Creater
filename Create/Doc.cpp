
#include"Doc.h"

doc::doc()
{
	//	zh = a;
	//	ch = b;
	//	next = NULL;
}
void doc::setEn(char * x)
{
	en = x;
}
void doc::setCh(char *x)
{
	ch = x;
}
void doc::out(int x)
{
	if (x)cout << en << "   " << "____" << endl;
	else cout << "____" << "   " << ch << endl;
}
string doc::getEn()
{
	return en;
}
string doc::getCh()
{
	return ch;
}
	//static void 
