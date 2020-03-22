// 1.16 从cin读取一组数，输出其和
#include <iostream>
using namespace std;

int main() {
	
	int sum, value;
	
	while (cin >> value) {
		sum += value;
	}
	
	cout << sum << endl;
	
	return 0;
}

 
