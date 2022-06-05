#include <iostream>
using namespace std ;

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*
STACK

--> OPERATIONS
1) push() -
    Place an item onto the stack. If there is no place for new item, stack is in overflow state.

2) pop() -
    Return the item at the top of the stack and then remove it. If pop is called when stack is empty, it is in an underflow state.

3) isEmpty() -
    Tells if the stack is empty or not

4) isfull() -
    Tells if the stack is full or not.

5) peek() -
    Access the item at the i position

6) count() -
    Get the number of items in the stack.

7) change() -
    Change the item at the i position

8) display() -
    Display all items in the stack

*/
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


class stack {
private :
	int top = -1 ;
	int size = (int)1e5 ;
	int arr[(int)1e5] ;
public :

	stack() {
		for (int i = 0; i < size; ++i)
		{
			arr[i] = 0 ;
		}
	}
	// stack() {
	// 	cout << "Enter size of stack :  ";
	// 	cin >> size;
	// 	int arr[size] ;
	// 	for (int i = 0; i < size; ++i)
	// 	{
	// 		arr[i] = 0 ;
	// 	}
	// }

	void push(int num) {
		top++;
		if (top < size) {
			arr[top] = num ;
		}
		else {
			top-- ;
			cout << "stack is full" << endl;
		}
	}

	void pop() {
		if (top != -1) {
			arr[top] = 0 ;
			top--;
		}
		else {
			cout << "stack is empty" << endl;
		}
	}

	bool isEmpty() {
		if (top == -1) return true ;
		else return false ;
	}

	bool isFull() {
		if (top == (size - 1)) return true ;
		return false ;
	}

	int peek(int i) {
		if (i > -1 && i < top + 1) return arr[i];
		cout << "Out of range" << endl;
	}

	int count() {
		return top + 1 ;
	}

	void change(int i , int newVel) {
		arr[i] = newVel ;
	}

	void display() {
		for (int i = 0; i < top + 1; ++i)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}


};



int main()
{

	stack s;

	s.push(10);
	s.push(100);
	s.push(23791);
	s.display();
	// cout << s.isEmpty();
	cout << s.isFull() << endl;
	s.pop();
	s.display();
	return 0;
}