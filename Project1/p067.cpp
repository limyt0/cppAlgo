#include <iostream>
#include <vector>
using namespace std;
//p11725 트리의 부모 찾기
static int N;
static vector<int> answer;
static vector<bool> visited;
static vector<vector<int>> tree;
void DFS(int number);

int main67() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	visited.resize(N + 1);
	tree.resize(N + 1);
	answer.resize(N + 1);

	for (int i = 1; i < N; i++) {
		int n1 , n2;
		cin >> n1 >> n2;
		tree[n1].push_back(n2);
		tree[n2].push_back(n1);
	}

	DFS(1);

	for (int i = 2; i <= N; i++) {
		cout << answer[i] << "\n";
	}
}

void DFS(int number) {
	visited[number] = true;

	for (int i : tree[number]) {
		if (!visited[i]) {
			answer[i] = number;
			DFS(i);
		}
	}
}