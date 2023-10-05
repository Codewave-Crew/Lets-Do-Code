#include <bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class RemoveNthNodeFromEndOfList {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;
        while (temp != NULL) {
            temp = temp->next;
            count++;
        }
        if (count == n) {
            temp = head;
            head = temp->next;
            return head;
        }
        temp = head;
        for (int i = 0; i < count - n - 1; i++) {
            temp = temp->next;
        }
        ListNode* temp1 = temp->next->next;
        temp->next = temp1;
        return head;
    }
};

int main()  {
    ListNode* head = new ListNode(1);
    ListNode* temp = head;
    for (int i = 2; i <= 5; i++) {
        temp->next = new ListNode(i);
        temp = temp->next;
    }
    RemoveNthNodeFromEndOfList a;
    head = a.removeNthFromEnd(head, 2);
    temp = head;
    while (temp != NULL)    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    return 0;
}