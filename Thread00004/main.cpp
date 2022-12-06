#include <iostream>
#include <thread>

using namespace std;

/// <summary>
/// std::thread::detach �����ϱ�
/// </summary>

void Function()
{
	int a = 0;
	cout << "Function " << endl;
}

void threadCaller()
{
	std::thread t1(Function);
	t1.detach();					// ���ν������ ������ ����� �Լ�
									// ���������� ����� �����ϳ�, �̹� ������ ��� ������� �ٽ� ������ �Ұ�
}

int main()
{
	cout << "Thread00004 Process Start" << endl;

	threadCaller();

	cout << "Thread00004 Process End" << endl;
	system("pause");
	return 0;
}
