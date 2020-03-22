// 输入两个整数，打印出两个整数范围内的所有整数
/*
1.输入
2.判断大小
3.输入 
*/ 

#include <iostream>

using namespace std;

int main() {
	
	int num1 = 0, num2 = 0, temp = 0, i = 0;
	cout << "please input two number:" << endl;
	cin >> num1 >> num2;
	
	if (num1>num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	
	for (i=num1+1;i<num2;i++) {
		cout << i << endl;
	}
	
	return 0;
}


