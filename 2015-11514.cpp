#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void main() {

	int num;
	vector<int> ivec;
	while (cin >> num) {
		ivec.push_back(num);
	}
	cout << endl;

	sort(ivec.begin(), ivec.end(), greater<int>());

	cout << "ordered array"<<endl;

	for (auto it : ivec) {
		cout << it << "  ";
	}
	cout << endl;

	system("pause");
}