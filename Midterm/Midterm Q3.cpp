int numbers[] = {17, 32, 54, 76, 93};
	deque<int> dq(numbers, numbers + 3); //A Double Ended Queue (deque) allows values to be inserted at both ends
	cout << " Dequeued : " << dq.front() << endl;
	dq.pop_front();
	cout << " Dequeued : " << dq.front() << endl;
	dq.pop_front();
	cout << " Dequeued from rear: " << dq.back() << endl;
	dq.pop_back();
	cout << " Dequeued from rear: " << dq.back() << endl;
	dq.pop_back();
	//deque is not considered a template for my VS