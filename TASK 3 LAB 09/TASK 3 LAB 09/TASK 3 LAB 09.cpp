#include<iostream>
using namespace std;
int main() {
	int arry[3][3], sum =0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << "ENTER THE ARRY :";
			cin >> arry[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			sum = sum + arry[i][j];
		}
	}
	cout << sum;

	return 0;
}