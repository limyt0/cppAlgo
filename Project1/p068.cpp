#include <iostream>
#include <vector>

using namespace std;

static vector<vector<int>> tree;
static vector<bool> visited;
static int deleteNode = 0;
static int answer = 0;
void DFS(int);
//p1068
int main() {
	int N;
	cin >> N;
	tree.resize(N + 1);
	visited.resize(N + 1);

	int root = 0;
	for (int i = 0; i < N; i++) {
		int p;
		cin >> p;
		if (p != -1) {
			tree[i].push_back(p);
			tree[p].push_back(i);
		}
		else {
			root = i;
		}
	}

	cin >> deleteNode;

	if (deleteNode == root) {
		cout << 0 << "\n";
	}	
}

void DFS(int number) { 
	visited[number] = true;
	int cNode = 0;

	for (int i : tree[number]) {
		if (!visited[i] && i != deleteNode) {
			cNode++;
			DFS(i);
		}
	}

	if (cNode == 0) {
		answer++;
	}
}