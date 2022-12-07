#include "String.h"

int String::length()
{
	int length = 0;
	for (int i = 0; myChar[length] != '\0'; i++)
	{
		length++;
	}
	return length;
}
String::String()
{
	myChar = nullptr;
}
String::~String()
{
	delete[]myChar;
	myChar = nullptr;
}
String::String(const String& str)
{
	int l = length();
	if (myChar != nullptr)
	{
		delete[] myChar;
		myChar = NULL;
	}
	l++;
	myChar = new char [l];
	for (int i = 0; i < l; i++)
	{
		myChar[i] = str.myChar[i];
	}
	myChar[l] = '\0';
}
String::String(const String& str, int pos, int len)
{
	int l = length();
	if (myChar != nullptr)
	{
		delete[] myChar;
		myChar = nullptr;
	}
	myChar = new char[l + 1];
	for (int i = pos; i < pos + len; i++)
	{
		int j = 0;
		myChar[j] = str.myChar[j];
		j++;
	}
	myChar[l] = '\0';
}
String::String(const char* s)
{
	int l = length();
	if (myChar != nullptr)
	{
		delete[] myChar;
		myChar = nullptr;
	}
	myChar = new char[l + 1];
	for (int i = 0; i < l; i++)
	{
		myChar[i] = s[i];
	}
	myChar[l] = '\0';
}
String::String(const char* s, int n)
{
	if (myChar != nullptr)
	{
		delete[] myChar;
		myChar = nullptr;
	}
	myChar = new char[n + 1] {'\0'};
	for (int i = 0; i < n; i++)
	{
		myChar[i] = s[i];
	}
}
String::String(int n, char c)
{
	if (myChar != nullptr)
	{
		delete[] myChar;
		myChar = nullptr;
	}
	myChar = new char[n + 1] {'\0'};
	for (int i = 0; i < n; i++)
	{
		myChar[i] = c;
	}
}
char String::at (int i)
{
	return myChar[i];
}
String String::substr(int pos, int len) const
{
	String temp;
	if (temp.myChar != nullptr)
	{
		delete[] temp.myChar;
		temp.myChar = nullptr;
	}
	temp.myChar = new char[len + 1] {'\0'};
	for (int i = pos; i < pos + len; i++)
	{
		int j = 0;
		temp.myChar[j] = myChar[i];
		j++;
	}
	return temp;
}
ostream& operator<< (ostream& os, const String& str)
{
	os << str.myChar;
	return os;
}