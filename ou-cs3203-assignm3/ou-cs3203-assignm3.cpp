// ou-cs3203-assignm3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;
class Math
{
public:
	int Add(vector<int> list);
	int Multiply(vector<int> list);
	//vector<int> toReverse(vector<int> list);
private:
	int sum = 0;
	int product = 1;
};


int Math::Add(vector<int> list) {

	for (int i = 0; i < list.size(); i++) {

		sum = sum + list[i];
	}
	return sum;
}

int Math::Multiply(vector<int> list) {

	for (int i = 0; i < list.size(); i++) {
		product = product * list[i];
	}
	return product;
}
/*
vector<int> Math::toReverse(vector<int> list) {
	vector<int> result;
	result = list;
	reverse(result.begin(), result.end());
	return result;
}

int main()
{
	Math m;
	int size = 0;
	int input = 0;
	vector<int> result;

	cout << "Enter size of list" << endl;
	cin >> size;

	cout << "Enter numbers in list" << endl;

	vector<int> OGList(size);

	for (int i = 0; i < size; i++) {
		cin >> input;
		OGList.push_back(input);
	}

	int addRes = m.Add(OGList);
	int productRes = m.Multiply(OGList);
	result = m.toReverse(OGList);


	cout << addRes << endl;
	cout << productRes << endl;

	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << endl;
	}

	return 0;
}*/