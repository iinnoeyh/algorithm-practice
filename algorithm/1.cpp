#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int N;	// ������ ����
	int sum = 0;	// ��
	string str;

	cin >> N;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		//sum += stoi(str[i]);
		sum += stoi(string(1, str[i]));
	}

	cout << sum;
	return 0;
}