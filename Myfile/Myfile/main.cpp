#include "MyFile.h"

void input();
void input(string a);
void input()
{
	ofstream ofile;         //绝对路径
	//ofstream out|trunc 默认的打开方式
	//ifstream in
	//fstream  in|out
	ofile.open("..\\Myfile\\李宇洋.txt",ios::out|ios::app);	//绝对路径,如果不存在李宇洋.txt就创建再打开,如果存在直接打开
	//out 为写文件(输出)打开
	//ate 初始位置 ,文件尾
	//app 所有输出附加在文件尾
	//binary  二进制
	// trunc 如果文件存在就先删除该文件
	ofile<<"李宇洋"<<endl;
	ofile.close();
}
void input(string a)
{   
	ofstream ofile; 
	ofile.open("..\\Myfile\\李宇洋.txt",ios::out|ios::app);	
	ofile<<a<<endl;
	ofile.close();
}
int main()
{
	for(int i=0;i<5;i++)
	{
		input();
	}
	input("哈哈哈哈哈哈哈哈啊哈");
	//=========================//
	CMyFile file;
	file.input("类对象掉用");
	file.input();
	system("pause");
	return 0;
}
