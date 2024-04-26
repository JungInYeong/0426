#include <iostream>
using namespace std;

int main()
{
	int x, y;
	while (1)
	{
		int sum = 0;

		cout << "x를 입력하세요 : ";
		cin >> x;
		cout << "y를 입력하세요 : ";
		cin >> y;

		if (x == 0 || y == 0)
		{
			cout << "x와 y 모두 양수를 입력해주세요" << endl;
		}
		else if (x < 0 || y < 0)
		{
			cout << "x와 y 모두 양수를 입력해주세요" << endl;
		}
		else if (x > 0 && y > 0)
		{
			// x와 y가 0이상이면 동작
			// 순서대로 1부터 x*y 저장
			int** arr = new int* [x];
			for (int i = 0; i < x; i++) //col
			{
				arr[i] = new int[y];

				for (int j = 0; j < y; j++) //raw
				{
					arr[i][j] = sum;
					sum++;
					cout << sum << " ";
				}

				cout << endl;
			}
			for (int i = 0; i < x; i++)
			{
				delete[] arr[i];
			}
			
			delete[] arr;

			break;
		}

	}




	return 0;
}

// 1글자만 판단
//string name = "jo2hn*897";
//for (int i = 0; i < name.length(); i++)
//{
//	cout << name[i] << " : " << isdigit(name[i]) << endl;
//	if (isdigit(name[i]) != 0) // 숫자 O
//	{
//	}
//	if (isdigit(name[i]) == 0) // 숫자 X
//	{
//	}
//}
//isdigit();
//isalpha();