#include "stack.hpp"

int main() {
	ArrayStack stack;
	for (int i = 1; i < 9; i++) {
		stack.push(i);
	}
	stack.display();
	stack.pop();
	stack.pop();
	stack.display();
}