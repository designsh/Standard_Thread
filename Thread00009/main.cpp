#include <iostream>
#include <thread>
#include <string>

using namespace std;

/// <summary>
/// thread lambda(람다식) 활용
/// </summary>

int Function()
{
	return 3;
}

int main()
{
	cout << "Thread00009 Process Start" << endl;

	int Num = 0;
	thread t1([&Num]
		{
			Num = Function();
		});
	t1.join();

	cout << "retValue: " << Num << endl;

	cout << "Thread00009 Process End" << endl;
	system("pause");
	return 0;
}
