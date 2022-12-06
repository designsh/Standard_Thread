#include <iostream>
#include <thread>

using namespace std;

void Fn()
{
	cout << "쓰레드 실행" << endl;
}

int main()
{
	thread t1(Fn);

	
	t1.join();




	// 시스템 종료 방지
	system("pause");
}