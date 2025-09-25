#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin >> N;
	vector<long> A(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	sort(A.begin(), A.end());

	int count = 0;

	if (N >= 3) {
		for (int t = 2; t < N; t++) {
			int s = 0;
			int e = t;
			bool notCount = true;
			while (notCount && s < e) {
				long sum = A[s] + A[e];
				if (sum == A[t]) {
					count++;
					//cout << A[s] << "+" << A[e] << "=" << A[t]<<endl;
					notCount = false;
				}
				if (sum > A[t]) {
					//cout << A[s] << "+" << A[e] << ">" << A[t] << endl;
					e--;
				}
				if (sum < A[t]) {
					//cout << A[s] << "+" << A[e] << "<" << A[t] << endl;
					s++;
				}
			}
		}
	}

	cout << count;

}
