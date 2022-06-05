#include <iostream>
using namespace std;


class node {
public:
	int data;
	int key;
	node* next = NULL;
	node* priv = NULL;

};

class circularLinkList {
private:
	node* head;
public:
	circularLinkList(node* n) {
		head = n ;
	}
	circularLinkList() {
		head = NULL ;
	}


};


int main()
{




	return 0;
}