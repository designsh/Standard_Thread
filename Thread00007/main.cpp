#include <iostream>
#include <thread>
#include <string>

using namespace std;

/// <summary>
/// thread�� ���� �ѱ�� ���
/// </summary>

void Function1(int Num)					// ���ڰ� �����̱⶧���� ����
{
	cout << "Function1 " << endl;
	cout << Num << endl;
}

void Function2(int Num, string s)		// ���ڰ� �����̱⶧���� ����
{
	cout << "Function2 " << endl;
	cout << Num << endl;
	cout << s << endl;
}

void Function3(int Num, string& s)
{
	cout << "Function3 " << endl;
	cout << Num << endl;

	s += "111111111";
	cout << s << endl;
}

int main()
{
	cout << "Thread00007 Process Start" << endl;

	int Num1 = 9999;
	thread t1(Function1, Num1);
	t1.join();
	cout << "========================" << endl;

	int Num2 = 9999;
	string s2 = "Value";
	thread t2(Function2, Num2, s2);
	t2.join();
	cout << "========================" << endl;

	int Num3 = 9999;
	string s3 = "Reference";
	thread t3(Function3, Num3, std::ref(s3));			// std::ref()�� ���۷������� �˷���
	t3.join();
	cout << "========================" << endl;

	cout << "Thread00007 Process End" << endl;
	system("pause");
	return 0;
}
