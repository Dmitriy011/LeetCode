#include <iostream>

struct ListNode
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

void printList(ListNode* head)
{
    ListNode* current = head;
    while (current)
    {
        std::cout << current->val;
        if (current->next) 
            std::cout << " -> ";
        current = current->next;
    }
    std::cout << std::endl;
}

void addTwoNumbers(ListNode* l1, ListNode* l2)
{
    ListNode* res = new ListNode(0);
    ListNode* lastNode = res;
    int count = 0;

    while (l1 || l2 || count != 0)
    {
        int val1 = (l1 != nullptr) ? l1->val : 0;
        int val2 = (l2 != nullptr) ? l2->val : 0;

        int sum = val1 + val2 + count;
        count = sum / 10;

        lastNode->next = new ListNode(sum % 10);
        lastNode = lastNode->next;

        if (l1 != nullptr) 
            l1 = l1->next;
        if (l2 != nullptr) 
            l2 = l2->next;
    }

    printList(res->next);
}

int main()
{
    ListNode* l1 = new ListNode(9);
    ListNode* l2 = new ListNode(9);

    ListNode* v1_1 = new ListNode(9);
    ListNode* v1_2 = new ListNode(9);

    ListNode* v2_1 = new ListNode(9);
    ListNode* v2_2 = new ListNode(9);

    l1->next = v1_1;
    v1_1->next = v1_2;

    l2->next = v2_1;
    v2_1->next = v2_2;

    printList(l1);
    printList(l2);

    addTwoNumbers(l1, l2);

    return 0;
}