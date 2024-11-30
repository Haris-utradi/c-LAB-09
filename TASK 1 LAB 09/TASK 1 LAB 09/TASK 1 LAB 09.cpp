#include<iostream>
using namespace std;
int main() {

	int arry[4][4] = { {2,4,6,8} , {7,8,8,9 }, {6,7,8,9 }, { 7,5,4,3 } };
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arry[i][j] << " ";
		}
		cout << "\n";
	}


	return 0;
}