#include <iostream>
#include <thread>

using namespace std;

/// <summary>
/// std::thread::join 이해하기
/// </summary>

void Function()
{
	int a = 0;
	cout << "Function " << endl;
}

int main()
{
	cout << "Thread00003 Process Start" << endl;

	thread t1(Function);


	t1.join();										// 현재 thread를 block하고 target thread의 작업완료까지 대기
	//t1.join();										// 같은 thread를 join()을 여러번 호출시 이미 정상적으로 제거된 thread의
														// 작업완료를 대기해야하므로 에러발생

	cout << "Thread00003 Process End" << endl;
	system("pause");
	return 0;
}
