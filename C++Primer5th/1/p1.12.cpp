// 1.12 for循环的功能？sum的终值？
#include <iostream>

using namespace std;

int main() {
	int sum = 0;
	
	for (int i = -100; i <= 100; ++i) {
		sum += i;
	}
	
	cout << sum << endl;
	
	return 0;
}
 

