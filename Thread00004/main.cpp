#include <iostream>
#include <thread>

using namespace std;

/// <summary>
/// std::thread::detach 이해하기
/// </summary>

void Function()
{
	int a = 0;
	cout << "Function " << endl;
}

void threadCaller()
{
	std::thread t1(Function);
	t1.detach();					// 메인스레드와 연결을 끊어내는 함수
									// 정상적으로 종료는 가능하나, 이미 연결을 끊어낸 스레드는 다시 연결이 불가
}

int main()
{
	cout << "Thread00004 Process Start" << endl;

	threadCaller();

	cout << "Thread00004 Process End" << endl;
	system("pause");
	return 0;
}
