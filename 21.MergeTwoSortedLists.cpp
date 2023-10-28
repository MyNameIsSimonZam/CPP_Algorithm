#include<iostream>
#include<vector>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode() : val(0), next(nullptr) {}
	ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode* next) : val(x), next(next) {}
};

struct List {
	ListNode* head;
	ListNode* last;
	List() : head(nullptr), last(nullptr) {}
	void append(int value) {
		ListNode* newNode = new ListNode(value);
		if (last == nullptr) {
			head = newNode;
			last = newNode;
		}
		else {
			last->next = newNode;
			last = newNode;
		}
	}
	void print(ListNode* currentNode) {
		while (currentNode != nullptr) {
			cout << currentNode->val << ' ';
			currentNode = currentNode->next;
		}
		cout << '\n';
	}
};



//ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//	if (list1 == nullptr && list2 == nullptr) return nullptr;
//	ListNode* node1 = list1;
//	ListNode* node2 = list2;
//	ListNode* ansverNode;
//	if (node1 > node2) {
//		ListNode* ansverNode = node2;
//	}
//	else {
//		ListNode* ansverNode = node1;
//	}
//	while (node1 != nullptr && node2 != nullptr) {
//		if (node1 > node2) {
//			ansverNode->next = node2;
//		}
//		else if (node1 < node2) {
//			ansverNode->next = node1;
//		}
//	}
//}

int main() {
	List myList1;
	List myList2;
	myList1.append(1);
	myList1.append(2);
	myList1.append(4);
	myList2.append(1);
	myList2.append(3);
	myList2.append(4);
	myList2.append(5);

	myList1.print(myList1.head);
	myList2.print(myList2.head);

	return 0;
}