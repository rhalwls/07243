#include<iostream>
using namespace std;

int main() {
	char op;
	int a, b;


	cin >> a >> op >> b;
	int res = 0;
	switch (op) {
	case '+':
		res = a + b;
		break;

	case '-':
		res = a - b;
		break;
	}
	cout << res << endl;
}