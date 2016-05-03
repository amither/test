#include <iostream>
using namespace std;
 struct ListNode {
  int val;
   ListNode *next;
   ListNode(int x) {
    val = x;
    next = NULL;
   }
 };
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode *p1 = l1;
    ListNode *p2 = l2;
    ListNode *ret = NULL;
    ListNode **tail = &ret;
    int add = 0;
    while (p1 != NULL || p2 != NULL || add != 0)
    {
        int v = add;
        if (p1 != NULL)
        {
            v += p1->val;
            p1 = p1->next;
        }

        if (p2 != NULL)
        {
            v += p2->val;
            p2 = p2->next;
        }

        *tail = new ListNode(v%10);
        tail = &((*tail)->next);

        add = v/10;

    }

    return ret;
}

int main()
{
    ListNode a(8);
    ListNode b(3);
    ListNode *c = addTwoNumbers(&a, &b);
    
    cout << c->val << endl;
    cout << c->next->val <<endl;
    return 0;
    
}
