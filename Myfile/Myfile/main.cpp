#include "MyFile.h"

void input();
void input(string a);
void input()
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
	ofile.close();
}
void input(string a)
{   
	ofstream ofile; 
	ofile.open("..\\Myfile\\������.txt",ios::out|ios::app);	
	ofile<<a<<endl;
	ofile.close();
}
int main()
{
	for(int i=0;i<5;i++)
	{
		input();
	}
	input("��������������������");
	//=========================//
	CMyFile file;
	file.input("��������");
	file.input();
	system("pause");
	return 0;
}
