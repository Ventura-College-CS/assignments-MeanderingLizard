int numbers[] = {10, 20, 30, 40, 50};
	deque<int> dq(numbers, numbers + 3);
	cout << " Dequeued : " << dq.front() << endl;
	dq.pop_front();
	cout << " Dequeued : " << dq.front() << endl;
	dq.pop_front();
	cout << " Dequeued from rear: " << dq.back() << endl;
	dq.pop_back();
	cout << " Dequeued from rear: " << dq.back() << endl;
	dq.pop_back();