#include "Image.h"
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
	BMP *b = new BMP("BM.bmp");
	b->filters(7);
	b->write();
}