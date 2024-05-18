struct ListNode 
{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution 
{
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode* res = new ListNode(0);
        ListNode* tail = res; // последний узел в списке результатов 

        int carry = 0; //перенос во время сложения

        while (l1 != nullptr || l2 != nullptr || carry != 0)
        {
            int val1;
            int val2;
            if (l1 != nullptr)
            {
                val1 = l1->val;
            }
            else
            {
                val1 = 0;
            }

            if (l2 != nullptr)
            {
                val2 = l2->val;
            }
            else
            {
                val2 = 0;
            }

            int sum = val1 + val2 + carry;
            carry = sum / 10;

            ListNode* newNode = new ListNode(sum % 10);

            tail->next = newNode;
            tail = tail->next;

            if (l1 != nullptr)
            {
                l1 = l1->next;
            }
            else
            {
                l1 = nullptr;
            }

            if (l2 != nullptr)
            {
                l2 = l2->next;
            }
            else
            {
                l2 = nullptr;
            }
        }

        return res->next;
    }
};