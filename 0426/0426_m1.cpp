#include <iostream>
using namespace std;

int main()
{
	int x, y;
	while (1)
	{
		int sum = 0;

		cout << "x�� �Է��ϼ��� : ";
		cin >> x;
		cout << "y�� �Է��ϼ��� : ";
		cin >> y;

		if (x == 0 || y == 0)
		{
			cout << "x�� y ��� ����� �Է����ּ���" << endl;
		}
		else if (x < 0 || y < 0)
		{
			cout << "x�� y ��� ����� �Է����ּ���" << endl;
		}
		else if (x > 0 && y > 0)
		{
			// x�� y�� 0�̻��̸� ����
			// ������� 1���� x*y ����
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

// 1���ڸ� �Ǵ�
//string name = "jo2hn*897";
//for (int i = 0; i < name.length(); i++)
//{
//	cout << name[i] << " : " << isdigit(name[i]) << endl;
//	if (isdigit(name[i]) != 0) // ���� O
//	{
//	}
//	if (isdigit(name[i]) == 0) // ���� X
//	{
//	}
//}
//isdigit();
//isalpha();