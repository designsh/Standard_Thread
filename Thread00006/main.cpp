#include <iostream>
#include <thread>
#include <vector>

using namespace std;

/// <summary>
/// heap 영역 thread 사용
/// </summary>

void Function()
{
	cout << std::this_thread::get_id() << endl;
}

int main()
{
	cout << "Thread00006 Process Start" << endl;

	vector<thread> threads;
	for (int Index = 0; Index < 10; ++Index)
	{
		threads.emplace_back(std::thread(Function));
	}

	for (auto& Thread : threads)
	{
		Thread.join();
	}

	cout << "Thread00006 Process End" << endl;
	system("pause");
	return 0;
}
