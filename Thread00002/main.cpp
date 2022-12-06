#include <iostream>
#include <thread>

using namespace std;

/// <summary>
/// std::thread 생성자 이해하기
/// </summary>

void Function()
{
	int a = 0;
	cout << "Function " << endl;
}

int main()
{
	cout << "Thread00002 Process Start" << endl;

	thread t0;						// 객체만 생성
	thread t1(Function);			// 객체가 하나의 흐름을 관리
	//thread t2{ t1 };				// Copy Constructor(복사생성자) 사용불가(정의없음)
	thread t2{ std::move(t1) };		// RValue Copy Constructor 사용가능

	//t1.join();
	t2.join();						// RValue Copy Constructor 사용시 t1 thread를 대기하는게 아니라
									// t2 thread의 작업을 기다려야함

	cout << "Thread00002 Process End" << endl;
	system("pause");
	return 0;
}
