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
		cout << "������ �Է��Ͻÿ�(���� -1) : ";
		cin >> num;
		if (num == -1) break;
		n.push_back(num);
	}

	//ũ�� ���
	cout << n.size() << endl;
	
	cout << endl;


	// ��� ����, ���� ū��
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
	// �ε��� ����
	int index;
	cout << "������ �ε��� �Է� : ";
	cin >> index;

	n.erase(n.begin()+index);
	for (int i : n)
	{
		cout << i << " ";
	}

	cout << endl;
	cout << endl;
	//�ε��� �߰�
	int plusind, plusvalue;
	cout << "�߰��� �ε����� ���� �Է� : ";
	cin >> plusind;
	cin >> plusvalue;

	cout << endl;
	n.insert(n.begin() + plusind, plusvalue);
	cout << plusind << " ��°" << "���� " << plusvalue << "�߰� ���" << endl;
	for (int i : n)
	{
		cout << i << " ";
	}


	return 0;
}