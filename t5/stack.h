class Stack {
	int* data;
	int maxSize;
	int nextIndex;
public:
	Stack(int maxSize);
	~Stack();
	int getSize() const;
	void push(int n);
	void pop();
	int& top();
	bool isFull() const;
	bool isEmpty() const;
};
