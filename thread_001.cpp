#include <iostream>
#include <thread>

using namespace std;

void Fn()
{
	cout << "������ ����" << endl;
}

int main()
{
	thread t1(Fn);

	
	t1.join();




	// �ý��� ���� ����
	system("pause");
}