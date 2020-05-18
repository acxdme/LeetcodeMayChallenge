/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        //Boundary cases
        if(!head)
            return head;
        
        ListNode *end = head;
        int counter = 0;
        while(end->next)
        {    end = end->next;   counter +=1;    }
        
        counter = counter&1?(counter/2)+1:counter/2;
        ListNode *temp = head;
        while(counter--)
        {
            end->next = temp->next;
            temp->next = temp->next->next;
            end->next->next = NULL;
            temp = temp->next;
            end = end->next;
        }
        
        return head;
    }
};
