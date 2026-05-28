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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* h = head;
        int cnt = n;
        ListNode* t = head;

        while(cnt && h){
            h = h->next;
            cnt--;

        }
        if(!h) return head->next;
        while(h->next){
            t = t->next;
            h = h->next;
        }
        if(t->next) t->next = t->next->next;
        return head;
    }
};
