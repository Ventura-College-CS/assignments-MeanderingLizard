        list<int> list1(47, 203); //list and queue aren't considered templates
	queue<int, list<int> > lq(list1);
	cout << " Dequeued : " << lq.front() << endl;
	lq.pop();
	cout << " Dequeued : " << lq.front() << endl;
	lq.pop();