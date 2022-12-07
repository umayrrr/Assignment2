#pragma once
#include<iostream>
using namespace std;

class String
{
private:
	char* myChar;
public:
	int length(); //
	String();
	~String();
	String(const String&);
	String(const String&, int, int);
	String(const char*);
	String(const char*, int);
	String(int, char);
	char at(int);
	String substr(int, int) const;
	friend ostream& operator<< (ostream&, const String&);
};
