//example2_02_method2.cpp�����ַ��ų�����������𣬷���2����const������ų���

#include <iostream>
#include<Windows.h>
using namespace std;

int main()
{
	int x = 5;

	const int T1 = x + x;      	//��5����const������ų���T1

	const int T2 = T1 - T1;   	//��6����const������ų���T2
								//const �ȶ����˱��ʽ��ֵ
	cout << "T1=" << T1 << "  T2=" << T2 << endl;
	system("pause");
	return 0;
}
