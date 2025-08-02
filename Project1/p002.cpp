#include <iostream>

using namespace std;

int main() {
	int N = 0;
	int A[1000];
	cin >> N;
	int max = 0;
	int sum = 0;
	for (int i = 0; i < N;i++) {
		cin >> A[i];
		if (max < A[i]) {
			max = A[i];
		}
		sum += A[i];
	}

	float result = ( (float)sum / max ) * ( 100 / (float)N );
	cout << result;
}