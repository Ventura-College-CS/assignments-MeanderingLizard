#include <iostream> 
class MyCompareFunction
{
public:
	int operator()(const int &lhs, const int &rhs)
	{
		int l, r;
		l = lhs % 10;
		r = rhs % 10;
		return l < r;
	}
};

int main()
{
	priority_queue<int>, vector<int>, MyCompareFunction> pq; //priority_queue are undefined

	pq.push(31); //pq are undefined
	pq.push(45);
	pq.push(29);

	while (!pq.empty())
	{
		cout << "Poped Value : " << pq.top() << endl; //cout and endl are undefined
		pq.pop();
	}
}
