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
    void reorderList(ListNode* head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        //rev
        ListNode* prev = NULL;
        ListNode* curr = slow->next;
        slow->next = NULL;
        while(curr){
            ListNode* nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }

        ListNode* h2 = prev;
        ListNode* h1 = head;

        bool flg = false;
        while(h2){
            ListNode* tmp1 = h1->next;
            ListNode* tmp2 = h2->next;
            h1->next = h2;
            h2->next = tmp1;
            h1 = tmp1;
            h2 = tmp2;
        }

    }
};
