#include <iostream>
#include <thread>

using namespace std;

/// <summary>
/// std::thread::join �����ϱ�
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


	t1.join();										// ���� thread�� block�ϰ� target thread�� �۾��Ϸ���� ���
	//t1.join();										// ���� thread�� join()�� ������ ȣ��� �̹� ���������� ���ŵ� thread��
														// �۾��ϷḦ ����ؾ��ϹǷ� �����߻�

	cout << "Thread00003 Process End" << endl;
	system("pause");
	return 0;
}
