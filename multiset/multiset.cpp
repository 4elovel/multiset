#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
	srand(time(NULL));
    vector <int> vec;
	cout << "Mass:\n";
	for (size_t i = 0; i < 25; i++)
	{
		vec.push_back(rand() % 10);
		cout << vec[i] << " ";
	}
	multiset <int, greater<int>> first(vec.begin(), vec.end());
	multiset <int> second(vec.begin(), vec.end());
	cout << "\nFirst multiset:\n";
	for (auto i : first)
	{
		cout << i << " ";
	}
	cout << "\nSecond multiset:\n";
	for (auto i : second)
	{
		cout << i << " ";
	}
}
