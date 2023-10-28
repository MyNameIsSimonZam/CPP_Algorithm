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


ListNode* reverseList(ListNode* head) {
	if (head == nullptr) return nullptr;

	vector<int> buf;
	while (head != nullptr) {
		buf.push_back(head->val);
		head = head->next;
	}

	ListNode* ansverHead = new ListNode(buf[buf.size() - 1]);
	ListNode* last = ansverHead;
	for (int i = buf.size() - 2; i >= 0; i--)
	{
		ListNode* temp = new ListNode(buf[i]);
		last->next = temp;
		last = temp;
	}
	return ansverHead;
};

//int main() {
//	ListNode* head = new ListNode(1);
//	ListNode* node = head;
//	node->next = new ListNode(2);
//	node->next->next = new ListNode(3);
//	node->next->next->next = new ListNode(4);
//	node->next->next->next->next = new ListNode(5);
//	while (node != nullptr) {
//		cout << node->val << ' ';
//		node = node->next;
//	}
//	cout << '\n';
//
//	ListNode* ansverHead = reverseList(head);
//	while (ansverHead != nullptr) {
//		cout << ansverHead->val << ' ';
//		ansverHead = ansverHead->next;
//	}
//	return 0;
//}



//int main() {
//	ListNode* node = new ListNode();
//	node->val = 10;
//	ListNode* node1 = new ListNode();
//	ListNode* node2 = new ListNode();
//	node1->val = 11;
//	node2->val = 12;
//	node->next = node1;
//	node1->next = node2;
//	cout << node->next->val;
//	cout << node->next->next->val;
//	return 0;
//}