#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	time_t start, end;
	double result;

	start = time(NULL);;

	// �����ų �ڵ�

	end = time(NULL);
	result = (double)(end - start);

	cout << "���� �ð� : " << result << "second" << endl;

	clock_t st, en;
	double res;

	st = clock();

	en = clock();

	//���� ��ų �ڵ�

	res = (double)(en - st);
	cout << "���� �ð� : " << res << "millisecond" << endl;


	return 0;
}