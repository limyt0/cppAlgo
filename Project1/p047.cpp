#include <iostream>
#include <vector>
#include <queue>

using namespace std;

static vector<vector<int>> A;
static vector<bool> visited;
static vector<int> answer;

void BFS(int);
//p1325
int main47() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	cin >> N >> M;

	A.resize(N + 1);
	answer.resize(N + 1);
	for (int i = 0; i < M; i++) {
		int s, e;
		cin >> s >> e;
		A[s].push_back(e);
	}
	
	visited.resize(N + 1);

	for (int i = 0; i <= N; i++) {
		fill(visited.begin(), visited.end(), false);
		BFS(i);
	}

	int maxVal = 0;

	for (int i = 1; i <= N; i++) {
		maxVal = max(maxVal, answer[i]);
	}
	for (int i = 1; i <= N; i++) {
		if (answer[i] == maxVal) {
			cout << i << " ";
		}
	}

}

void BFS(int index) {
	queue<int> queue;
	queue.push(index);
	visited[index] = true;
	while(!queue.empty()) {
		int now_node = queue.front();
		queue.pop();
		for (int i : A[now_node]) {
			if (!visited[i]) {
				visited[i] = true;
				answer[i]++;
				queue.push(i);
			}
		}
	}
}