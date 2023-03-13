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
    ListNode* addTwoNumbers(ListNode* l1,ListNode* l2){
        ListNode* res=new ListNode(0);
        ListNode* temp=res;
        int carry=0;
        while(l1!=NULL || l2!=NULL){
            int a=0,b=0;
            if(l1!=NULL){
               a=l1->val;
               l1=l1->next;
            }
            if(l2!=NULL){
                b=l2->val;
                l2=l2->next;
            }
            int sum=a+b+carry;
            if(sum>9){
                carry=sum/10;
                sum=sum%10;
            }else{
                carry=0;
            }
            temp->next=new ListNode(sum);
            temp=temp->next;
            
        }
        if(carry){
            temp->next=new ListNode(carry);
        }
        return res->next;
    }
    // ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    //     ListNode* res=new ListNode(0);
    //     ListNode* temp=res;
    //     int carry=0;
    //     while(l1!=NULL or l2!=NULL){
    //         int x=0,y=0;
    //         if(l1!=NULL){
    //            x=l1->val;
    //             l1=l1->next;
    //         }
    //         if(l2!=NULL){
    //             y=l2->val;
    //             l2=l2->next;
    //         }
    //         int sum=x+y+carry;
    //         carry=sum/10;
    //         sum=sum%10;
    //         temp->next=new ListNode(sum);
    //         temp=temp->next;
    //     }
    //     if(carry){
    //         temp->next=new ListNode(carry);
    //     }
    //     return res->next;
    // }
};