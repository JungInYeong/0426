#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<int>n;
	int max = 0;

	while (1)
	{
		int num;
		cout << "정수를 입력하시오(종료 -1) : ";
		cin >> num;
		if (num == -1) break;
		n.push_back(num);
	}

	//크기 출력
	cout << n.size() << endl;
	
	cout << endl;


	// 모든 원소, 가장 큰값
	for (int i : n)
	{
		cout << i << " ";
		if (i > max) { max = i; }
	}
	cout << endl;
	cout << max;

	cout << endl;
	cout << endl;
	for (int i = 0; i < size(n); i++)
	{
		n[i] *= 2;
	}
	for (int i : n)
	{
		cout << i << " ";
	}

	cout << endl;
	cout << endl;
	// 인덱스 제거
	int index;
	cout << "제거할 인덱스 입력 : ";
	cin >> index;

	n.erase(n.begin()+index);
	for (int i : n)
	{
		cout << i << " ";
	}

	cout << endl;
	cout << endl;
	//인덱스 추가
	int plusind, plusvalue;
	cout << "추가할 인덱스와 원소 입력 : ";
	cin >> plusind;
	cin >> plusvalue;

	cout << endl;
	n.insert(n.begin() + plusind, plusvalue);
	cout << plusind << " 번째" << "원소 " << plusvalue << "추가 결과" << endl;
	for (int i : n)
	{
		cout << i << " ";
	}


	return 0;
}