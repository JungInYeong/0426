#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	time_t start, end;
	double result;

	start = time(NULL);;

	// 수행시킬 코드

	end = time(NULL);
	result = (double)(end - start);

	cout << "수행 시간 : " << result << "second" << endl;

	clock_t st, en;
	double res;

	st = clock();

	en = clock();

	//수행 시킬 코드

	res = (double)(en - st);
	cout << "수행 시간 : " << res << "millisecond" << endl;


	return 0;
}