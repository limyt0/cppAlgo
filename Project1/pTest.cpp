#include <iostream>

using namespace std;

int main(){
    int N = 0;
    string numbers;
    cin >> N ;
    cin >> numbers;
    int result = 0;
    for(int i = 0;i<N;i++){
        result += (numbers[i] -'0');
    }
    cout << result ;
    //return 0;
}