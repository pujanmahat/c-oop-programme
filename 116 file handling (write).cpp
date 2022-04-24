// wap to write "hello world" in file name demo.txt

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream ofs;
	ofs.open("demo.txt");
	ofs.write("hello world",11);
	ofs.close();
}

