class queue {
public:
	int* num;
	int head;
	int tail;
	int size;
public:
	queue(int);
	void enqueue(int);
	void dequeue();
	void display();
	void removeDup();
};