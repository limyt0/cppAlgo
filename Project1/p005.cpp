#include <iostream>
#include <vector>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N , M;
	cin >> N >> M;

	vector<long> S(N , 0);

	long sum = 0;
	int count = 0;

	for (int i = 0; i <N; i++) {
		int tmp;
		cin >> tmp;
		sum += tmp;
		S[i] = sum % M;
	}
	for (int i = 1; i < N; i++) {
		for (int j = 0; j < i; j++) {
			if (S[i] - S[j] == 0) {
				count++;
			}
		}
	}
	cout << count << endl;
	
	
	
}