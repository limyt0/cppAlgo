#include <iostream>
#include <vector>

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	vector<long> S(N, 0);
	vector<long> C(M, 0);

	long sum = 0;
	int count = 0;
	
	for (int i = 0; i < N; i++) {
		int tmp;
		cin >> tmp;
		sum += tmp;
		S[i] = sum % M;
		//C[S[i]]++;
	}
	
	
	


	cout << count << endl;



}