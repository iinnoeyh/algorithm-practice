#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;	// ������ ����
	int maxNum = 0;	// ���� ū ���� ����
	int tmp;
	double sum = 0.0;	// ��� ������ �հ�
	vector<int> score;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> tmp;
		score.push_back(tmp);
		maxNum = max(maxNum, tmp);
		sum += tmp;
	}

	double result = sum * 100.0 / maxNum / N;
	cout << result;
	return 0;
}