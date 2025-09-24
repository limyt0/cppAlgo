#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int M;
	cin >> N >> M;
	vector<int> A(N , 0);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	
	sort(A.begin() , A.end());
	int start = 0;
	int end = N -1;
	int count = 0;
	while (start<end) {
		int sum = A[start] + A[end];
		if (sum == M) {
			count++;
			start++;
			end--;
		}
		if (sum < M) {
			start++;
		}
		if (sum > M) {
			end--;
		}
	}

	cout << count;

}