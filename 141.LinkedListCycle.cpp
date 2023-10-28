#include<iostream>
#include<vector>

using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(nullptr) {}
};


bool hasCycle(ListNode* head) {
	if (head == nullptr) return false;
	ListNode* l = head;
	ListNode* r = head->next;
	while (l != r) {
		if (r == nullptr) return false;
		r = r->next;
		if (r == nullptr) return false;
		r = r->next;
		l = l->next;
	}
	return true;
}

//int main() {
//	ListNode* head = new ListNode(3);
//	ListNode* node = head;
//	node->next = new ListNode(2);
//	node->next->next = new ListNode(0);
//	node->next->next->next = new ListNode(-4);
//	//node->next->next->next->next = node->next;
//	cout << hasCycle(head);
//	return 0;
//}
