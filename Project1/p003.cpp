#include <iostream>

using namespace std;

int A[100001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M = 0;
	int N = 0;
	A[0] = 0;
	for (int i = 1; i <= N; i++) {
		int tmp;
		cin >> tmp;
		A[i] = A[i - 1] + tmp;
	}
	for (int i = 0; i < M; i++) {
		int a , b;
		cin >> a;
		cin >> b;
		int result = ( A[b] - A[a - 1] );
		cout << result << "\n";
	}




}