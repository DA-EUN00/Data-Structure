//#ifndef stack_hpp
//#define stack_hpp
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//inline void error(string message) {
//	cout << message << endl;
//	exit(1);
//}
//
//const int MAX_SIZE = 10;
//
//class ArrayStack {
//	int top;
//	int data[MAX_SIZE];
//
//public:
//	ArrayStack() { top = -1; }
//	~ArrayStack() {}
//
//	bool isEmpty(){return top == -1;}
//	bool isFull() { return top == MAX_SIZE - 1; }
//
//	void push(int e) {
//		if (isFull()) error("Stack is full");
//		data[++top] = e;
//	}
//
//	int pop() {
//		if (isEmpty()) error("Stack is empty");
//		return data[top--];
//	}
//
//	int peek() {
//		if (isEmpty()) error("Stack is empty");
//		return data[top];
//	}
//
//	void display() {
//		printf("Stack item count = %2d \n", top + 1);
//		for (int i = 0; i < top; i++) {
//			cout << "<" << data[i] << ">";
//		}
//		cout << endl;
//	}
//};
//
//#endif 