// MyLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Node.h"

class MyLinkedList {
private:
	Node* m_First;
	Node* m_Last;
	int m_count;

private:
	Node* getNode(int index) {
		Node* curr = m_First;

		if (index >= m_count) {
			return NULL; // or Throw Exception
		}
		else {
			for (int i = 0; i < index; i++) {
				if (curr != NULL) {
					curr = curr->next;
				}
			}
			return curr;
		}
	}
public:
	void addLast(int val) {
		Node* newNode = new Node(val);
		if (m_First == NULL && m_Last == NULL) {
			m_First = m_Last = newNode;
			m_count = 1;
		}
		else {
			m_Last->next = newNode;
			m_Last = newNode;
			m_count++;
		}
	}

	int getItem(int index) {
		Node* curr = getNode(index);
		if (curr == NULL) {
			return -1;
		}
		else {
			return curr->data;
		}
	}

	void setItem(int index, int val) {
		Node* curr = getNode(index);
		if (curr != NULL) {
			curr->data = val;
		}
	}

	void insertItem(int index, int val) {
		Node* newNode = new Node(val);
		Node* prev = getNode(index - 1);
		Node* next = prev->next;
		prev->next = newNode;
		newNode->next = next;

	}


	void removeItem(int index) {
		Node* prev = getNode(index - 1);
		Node* curr = prev->next;
		Node* next = curr->next;
		prev->next = next;
		curr->next = NULL;
		delete curr;
	}

	void displayAll() {
		Node* curr = m_First;
		while(curr->next != NULL) {
			std::cout << curr->data;
		}
	}
};

int main()
{
	MyLinkedList* myLL = new MyLinkedList();
	myLL->addLast(10);
	myLL->addLast(20);
	myLL->addLast(30);
	myLL->addLast(40);
	std::cout << myLL->getItem(2);
	myLL->setItem(2, 35);
	myLL->insertItem(2, 45);
	myLL->removeItem(2);
	myLL->displayAll();
	std::cout << "First Item" << myLL->getItem(1);
    std::cout << "Hello World!\n";
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
