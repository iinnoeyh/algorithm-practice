#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, tmp;
	cin >> N;
	
	vector<int> A;

	for (int i = 0; i < N; i++) {
		cin >> tmp;
		A.push_back(tmp);
	}

	// ��������
	sort(A.begin(), A.end());
	
	// ��������
	//sort(A.rbegin(), A.rend());

	for (int i = 0; i < N; i++)
		cout << A[i] << '\n';
}