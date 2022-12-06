#include <iostream>
#include <thread>
#include <string>

using namespace std;

/// <summary>
/// thread에 레퍼런스 인자 주의점
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
	t.join();											// 같은 코드블록내에서 해당 thread의 작업완료까지 대기
														// 원하는 값 도출
}

int main()
{
	cout << "Thread00008 Process Start" << endl;

	thread t1;
	threadCaller1(t1);
	t1.join();											// Memory Life Time에 의해 쓰레기값 도출
	cout << "===================================" << endl;

	thread t2;
	threadCaller2(t2);

	cout << "Thread00008 Process End" << endl;
	system("pause");
	return 0;
}
