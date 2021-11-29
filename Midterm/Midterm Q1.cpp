#include <iostream>
// Elaborate the following:
queue<int> q; //Queue is not an acceptable template

	for (int i = 0; i < 5; i++) //there is no declaraiton
		q.push(i);
	cout << "The size of q " << q.size() << endl;

	cout << " Dequeued : " << q.front() << endl;
	q.pop();
	cout << " Dequeued : " << q.front() << endl;
	q.pop();
//this program appears to set up a set of values, then remove the one that is first in the queue twice