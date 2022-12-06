#include <iostream>
#include <thread>

using namespace std;

/// <summary>
/// std::thread ������ �����ϱ�
/// </summary>

void Function()
{
	int a = 0;
	cout << "Function " << endl;
}

int main()
{
	cout << "Thread00002 Process Start" << endl;

	thread t0;						// ��ü�� ����
	thread t1(Function);			// ��ü�� �ϳ��� �帧�� ����
	//thread t2{ t1 };				// Copy Constructor(���������) ���Ұ�(���Ǿ���)
	thread t2{ std::move(t1) };		// RValue Copy Constructor ��밡��

	//t1.join();
	t2.join();						// RValue Copy Constructor ���� t1 thread�� ����ϴ°� �ƴ϶�
									// t2 thread�� �۾��� ��ٷ�����

	cout << "Thread00002 Process End" << endl;
	system("pause");
	return 0;
}
