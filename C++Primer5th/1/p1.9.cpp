/* 1.9 使用while循环将50-100的整数相加 */

#include <iostream> 
using namespace std;

int main() {
	int a = 50;
	int sum = 0;
	while(a<=100) {
		sum += a++;
	}
	cout << "The sum of 50-100 is: " << sum << endl;
	return 0;
}

