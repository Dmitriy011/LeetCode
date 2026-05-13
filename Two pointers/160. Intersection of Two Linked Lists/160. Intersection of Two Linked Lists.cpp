// 876. Найти пересечение двух однсовязных списков

#include <iostream>

struct ListNode
{
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}

    int val;
    ListNode* next;
};

ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) 
{
    int sizeA = 0, sizeB = 0;

    ListNode* it1 = headA, *it2 = headB;
    while (it1)
    {
        it1 = it1->next;
        ++sizeA;
    }

    while (it2)
    {
        it2 = it2->next;
        ++sizeB;
    }

    it1 = headA, it2 = headB;
    if (sizeA > sizeB)
    {
        for (int i = 0; i < sizeA - sizeB; ++i)
        {
            it1 = it1->next;
        }
    }
    else if (sizeA < sizeB)
    {
        for (int i = 0; i < sizeB - sizeA; ++i)
        {
            it2 = it2->next;
        } 
    }
    
    while (it1 != it2 && it1 && it2)
    {
        it1 = it1->next;
        it2 = it2->next;
    }

    return (it1 == it2) ? it1 : nullptr;
}

int main()
{
    // Создаем общие узлы (пересечение)
    ListNode* common1 = new ListNode(8);
    ListNode* common2 = new ListNode(4);
    ListNode* common3 = new ListNode(5);

    common1->next = common2;
    common2->next = common3;

    // Создаем listA: [4,1,8,4,5]
    ListNode* headA = new ListNode(4);
    headA->next = new ListNode(1);
    headA->next->next = common1;  // пересекается здесь

    // Создаем listB: [5,6,1,8,4,5]
    ListNode* headB = new ListNode(5);
    headB->next = new ListNode(6);
    headB->next->next = new ListNode(1);
    headB->next->next->next = common1;  // пересекается здесь

    ListNode* intersection =getIntersectionNode(headA, headB);

    if (intersection) 
    {
        std::cout << "Yes: " << intersection->val << std::endl;
    }
    else 
    {
        std::cout << "No" << std::endl;
    }
}
