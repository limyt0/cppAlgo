#include <iostream>
using namespace std;
//11720 숫자의 합
int main01() {
	int N = 0;
	string numbers;
	cin >> N;
	cin >> numbers;

	int sum = 0;;
	for (int i = 0; i < numbers.length(); i++) {
		sum += numbers[i] - '0';
	}
	cout << sum << "\n";
}