#include <iostream>
#include <vector>
#include <queue>

using namespace std;

typedef pair<int , int> Node;
static int N , M , K;
static int W[1001][1001];
static priority_queue<int> distQueue[1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M >> K;

	for (int i = 0; i < M; i++) {
		int a , b , c;
		cin >> a >> b >> c;
		W[a][b] = c;
	}


}