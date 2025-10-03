#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;

	cin >> N;

	vector<int> arr;
	vector<char> val;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	
	}

	stack<int> stack1;
	int num = 0;
	for (int i = 0; i < N; i++) {
		if (num < arr[i]) {
			while (num < arr[i]) {
				num++;
				stack1.push(num);
			}
		}
		else {
			while (num < arr[i]) {
				stack1.pop();
			}
		}
		
	}
}