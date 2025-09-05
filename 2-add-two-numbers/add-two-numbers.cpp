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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head= new ListNode(0);
        ListNode* head2=head;
        int curr_sum=0;
        int carry=0;
        while(l1!= NULL || l2!= NULL){
            if(l1!=NULL && l2!=NULL){
                curr_sum=(l1->val+l2->val+carry)%10;
                carry=(l1->val+l2->val+carry)/10;
                head->next=new ListNode(curr_sum);
            }
            else if(l2!=NULL){
                curr_sum=(l2->val+carry)%10;
                carry=(l2->val+carry)/10;
                head->next=new ListNode(curr_sum);
            }
            else if(l1!=NULL){
                curr_sum=(l1->val+carry)%10;
                carry=(l1->val+carry)/10;
                head->next=new ListNode(curr_sum);
            }
            if(l1!=NULL) l1=l1->next;
            if(l2!=NULL) l2=l2->next;
            head=head->next;
        }
        if(carry==1) head->next=new ListNode(carry);
        return head2->next;
    }
};