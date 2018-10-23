#pragma once
#include<string>
#include<iostream>
using namespace std;

class doc {
private:
	string en, ch;
public:
	doc();
	void setEn(char * x);
	void setCh(char *x);
	void out(int x);
	string getEn();
	string getCh();
};