#include <iostream>

struct ListNode
{
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}

    int val;
    ListNode* next;
};

bool isPalindrome(ListNode* head) 
{
    if (!head || !head->next) 
        return true;

    ListNode* L = head;
    ListNode* R = head;

    while (R && R->next)
    {
        R = R->next->next;
        L = L->next;
    }

    // L = mid
    // 2. Разворачиваем вторую половину
    ListNode* reverse_half2 = nullptr;
    while (L)
    {
        ListNode* tmp_next = L->next;

        L->next = reverse_half2;
        reverse_half2 = L;
        L = tmp_next;
    }

    ListNode* half1 = head;
    while (reverse_half2)
    {
        if (reverse_half2->val != half1->val)
            return false;

        reverse_half2 = reverse_half2->next;
        half1 = half1->next;
    }

    return true;
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
    ListNode* node4 = new ListNode(1);
    ListNode* node3 = new ListNode(2, node4);
    ListNode* node2 = new ListNode(2, node3);
    ListNode* head1 = new ListNode(1, node2);

    isPalindrome(head1);
    printList(head1);
}