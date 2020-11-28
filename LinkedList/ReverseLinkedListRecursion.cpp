//https://leetcode.com/problems/reverse-linked-list/

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
void ListNode* reverseRecursion(ListNode* curr, ListNode* prev)
{
    if(!curr)return NULL ;
    ListNode *nxt = curr->next ;

    curr->next = prev ;
    prev = curr ;
    curr = nxt ;
    reverseRecursion(curr,prev);
}
    ListNode* reverseList(ListNode* head) {
        //Reverse a LL
        ListNode tmp ;
        tmp->next = head ;
        reverseRecursion(head,NULL);
        return tmp->next ;
        
    //     A->B->C->D->E
    // N<--A
    //     curr = A 
    //     prev = NULL 
    //     next = B 

    //     curr = B 
    //     prev = A 

    //     curr->next = prev ;
    }
};