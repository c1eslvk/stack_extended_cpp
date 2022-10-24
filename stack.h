class Stack {
  public:
	void push(int element);
	int pop();
	bool is_empty();
    Stack& operator=(Stack& other);
	Stack();
	Stack(const Stack &s);
	~Stack();
	
  private:
	int top;
	int* items;
	int size;
};
