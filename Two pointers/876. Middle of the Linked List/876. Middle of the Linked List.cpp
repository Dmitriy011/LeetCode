// 876. Найти центр однсовязного списка

#include <iostream>

struct ListNode
{
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}

    int val;
    ListNode* next;
};

ListNode* middleNode(ListNode* head) 
{
    ListNode* slow = head;
    ListNode* fast = head;

    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
    }

    return slow;
}

int main()
{
    std::cout << "Hello World!\n";
}
