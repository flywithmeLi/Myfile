#include "MyFile.h"


CMyFile::CMyFile(void)
{
}


CMyFile::~CMyFile(void)
{
}
	void CMyFile:: input()
	{
				ofstream ofile;         //����·��
		//ofstream out|trunc Ĭ�ϵĴ򿪷�ʽ
		//ifstream in
		//fstream  in|out
		ofile.open("..\\Myfile\\������.txt",ios::out|ios::app);	//����·��,���������������.txt�ʹ����ٴ�,�������ֱ�Ӵ�
	    //out Ϊд�ļ�(���)��
		//ate ��ʼλ�� ,�ļ�β
		//app ��������������ļ�β
		//binary  ������
		// trunc ����ļ����ھ���ɾ�����ļ�
		ofile<<"������"<<endl;
		//time_t now_time;
		//now_time=time(NULL);
		//ofile<<now_time<<endl;
		ofile.close();
	}
	void CMyFile:: input(string c)
	{
	    ofstream ofile; 
		ofile.open("..\\Myfile\\������.txt",ios::out|ios::app);	
		ofile<<c<<endl;
   	    // time_t now_time;
		//now_time=time(NULL);
		//ofile<<now_time<<endl;
		ofile.close();
	}