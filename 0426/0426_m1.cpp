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
			
			break;
		}

	}




	return 0;
}