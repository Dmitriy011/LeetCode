// Имея заданный head узел связанного списка, удалите из конца списка n-ый эл         

#include <iostream>

struct ListNode 
{
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}

    int val;
    ListNode* next;
};

ListNode* removeNthFromEnd(ListNode* head, int n) 
{
    if (!head) 
        return nullptr;

    ListNode* slow = head;
    ListNode* fast = head;

    for (int i = 0; i < n; ++i) 
        fast = fast->next;

    // Удаяляем 1ый элемент списка
    if (!fast) 
    {
        ListNode* newHead = head->next;
        delete head;

        return newHead;
    }

    while (fast && fast->next)
    {
        fast = fast->next;
        slow = slow->next;
    }

    ListNode* toDelete = slow->next;
    slow->next = slow->next->next;
    delete toDelete;

    return head;
}

void printList(ListNode* head)
{
    ListNode* current = head;
    while (current)
    {
        std::cout << current->val;
        if (current->next) std::cout << " -> ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main()
{
    ListNode* node5 = new ListNode(5);
    ListNode* node4 = new ListNode(4, node5);
    ListNode* node3 = new ListNode(3, node4);
    ListNode* node2 = new ListNode(2, node3);
    ListNode* head1 = new ListNode(1, node2);

    ListNode* result1 = removeNthFromEnd(head1, 2);
    std::cout << "del 2th from end: ";
    printList(head1);
    
}
