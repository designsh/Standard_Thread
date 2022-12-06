#include <iostream>
#include <thread>

using namespace std;

/// <summary>
/// thread id �� ���� PC�� Thread ���� Ȯ���ϱ�
/// </summary>

void Function()
{
	cout << std::this_thread::get_id() << endl;
}

int main()
{
	cout << "Thread00005 Process Start" << endl;

	cout << "#PC thread Count: " << std::thread::hardware_concurrency() << endl;
	thread t1(Function);


	t1.join();

	cout << "Thread00005 Process End" << endl;
	system("pause");
	return 0;
}
