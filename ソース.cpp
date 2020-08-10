#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Score {
	int number, grip, throwing;

	bool operator<(const Score& other) const {
		if (grip != other.grip)
			return grip > other.grip;
		if (throwing != other.throwing)
			return throwing > other.throwing;
		return number < other.number;
	}
};

void sortscore(int x);

int main() {
	int n;
	cout << "The number of people is," << endl;
	cin >> n;
	cout << "Number," <<"Score of gripstrength," <<  "score of throwing are," << endl;

	sortscore(n);
};

void sortscore(int x) {
	vector<Score> vec(x);
	for (signed i = 0; i < x; i++)
		cin >> vec[i].number >> vec[i].grip >> vec[i].throwing;

	sort(vec.begin(), vec.end());

    cout << " The result are," << endl;

	for (int i = 0; i < vec.size(); i++)
		cout << vec[i].number << " ";
	cout << endl;
	

};