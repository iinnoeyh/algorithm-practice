#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;	// 과목의 개수
	int maxNum = 0;	// 가장 큰 점수 저장
	int tmp;
	double sum = 0.0;	// 모든 점수의 합계
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