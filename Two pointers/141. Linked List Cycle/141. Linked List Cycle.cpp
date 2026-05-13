// Если ли цикл в односвзяном списке

#include <iostream>

struct ListNode 
{
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

bool hasCycle(ListNode* head) 
{
    if (head == nullptr || head->next == nullptr)
        return false;

    ListNode* slow = head;
    ListNode* fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;

        if (fast == slow)
            return true;   
    }

    return false;
}

int main()
{
    
}
