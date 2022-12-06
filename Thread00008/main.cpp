#include <iostream>
#include <thread>
#include <string>

using namespace std;

/// <summary>
/// thread�� ���۷��� ���� ������
/// </summary>

void Function(int& Num)
{
	std::this_thread::sleep_for(std::chrono::seconds(1));
	cout << Num << endl;
}

void threadCaller1(thread& t)
{
	int Num = 9999;
	t = std::thread(Function, std::ref(Num));
}

void threadCaller2(thread& t)
{
	int Num = 9999;
	t = std::thread(Function, std::ref(Num));
	t.join();											// ���� �ڵ��ϳ����� �ش� thread�� �۾��Ϸ���� ���
														// ���ϴ� �� ����
}

int main()
{
	cout << "Thread00008 Process Start" << endl;

	thread t1;
	threadCaller1(t1);
	t1.join();											// Memory Life Time�� ���� �����Ⱚ ����
	cout << "===================================" << endl;

	thread t2;
	threadCaller2(t2);

	cout << "Thread00008 Process End" << endl;
	system("pause");
	return 0;
}
