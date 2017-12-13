#include "MyFile.h"


CMyFile::CMyFile(void)
{
}


CMyFile::~CMyFile(void)
{
}
	void CMyFile:: input()
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
		//time_t now_time;
		//now_time=time(NULL);
		//ofile<<now_time<<endl;
		ofile.close();
	}
	void CMyFile:: input(string c)
	{
	    ofstream ofile; 
		ofile.open("..\\Myfile\\李宇洋.txt",ios::out|ios::app);	
		ofile<<c<<endl;
   	    // time_t now_time;
		//now_time=time(NULL);
		//ofile<<now_time<<endl;
		ofile.close();
	}