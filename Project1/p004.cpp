#include <iostream>

using namespace std;

int A[1025][1025];
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N , M;
	cin >> N >> M;
	for (int i = 0; i <= N; i++) {
		for (int j = 0; j <= N; j++) {
			A[i][j] = 0;
			if (i != 0  && j != 0) {
				int temp;
				cin >> temp;
				A[i][j] = A[i-1][j] + A[i][j-1] - A[i-1][j-1] + temp;
			}
		}
	}

	for (int i = 0; i < M; i++) {
		int x1 , x2 , y1 , y2;
		cin >> x1 >> y1 >> x2 >> y2;

		int result = A[x2][y2] - A[x1 - 1][y2] - A[x2][y1 - 1] + A[x1 - 1][y1 - 1];
		cout << result << "\n";
	}
}