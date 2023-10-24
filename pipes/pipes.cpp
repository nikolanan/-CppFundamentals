#include <iostream>
#include <vector>
using namespace std;

void filling(vector <int> &array,int pipes) {
	for (int i = 0; i < pipes; i++) {
		int number;
		cin >> number;
		array.push_back(number);
	}
}

int main()
{
	int pipes;
	cin >> pipes;
	cin.ignore();

	vector <int> newest, latest;
	newest.reserve(pipes);
	latest.reserve(pipes);

	filling(newest, pipes);
	filling(latest, pipes);

	for (int i = 0; i < pipes; i++) {
		int decay =  latest[i] - newest[i];

		cout << latest[i] / decay << " ";
	}




}

