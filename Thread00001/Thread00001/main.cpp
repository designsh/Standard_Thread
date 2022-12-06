#include <iostream>
#include <thread>

using namespace std;

/// <summary>
/// std::thread 기본사용법
/// </summary>

void Function()
{
	int a = 0;
	cout << "Function " << endl;
}

int main()
{
	cout << "Thread00001 Process Start" << endl;

	thread t1(Function);
	thread t2(Function);
	thread t3([]
		{
			int a = 0;
			cout << "lambda Function" << endl;
		});

	t1.join();
	t2.join();
	t3.join();

	cout << "Thread00001 Process End" << endl;
	system("pause");
	return 0;
}
