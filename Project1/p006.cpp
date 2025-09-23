#include<iostream>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	int start = 1;
	int end = 1;
	int count = 0;
	while (end <= N) {
		int sum = 0;
		for (int i = start; i <= end; i++) {
			sum += i;
		}
		if (sum == N) {
			count++;
			start++;
		}
		if (sum > N) {
			start++;
		}
		if (sum < N) {
			end++;
		}

	}

	cout << count;
}