#include<bits/stdc++.h>
using namespace std; 
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* reverseLL(ListNode* &head){
        if(head == NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }
        ListNode* chotaHead = reverseLL(head->next);
        head -> next -> next = head;
        head -> next = NULL;

        return chotaHead;
    }
    ListNode* mid(ListNode* head){
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast -> next->next;
            slow=slow->next;
        }
        return slow;
    }
    void reorderList(ListNode* head) {
        ListNode* temp = head;
        ListNode* temp2 = mid(head);
        temp2 = reverseLL(temp2);
        while(temp2 != NULL){
            ListNode* next = temp2->next;
            ListNode* next2 = temp->next;
            temp2->next = temp->next;
            temp->next = temp2;
            if(next==NULL){
                temp2->next = NULL;
            }
            temp = next2;
            temp2 = next;
        }
    }
};
int main(){ 
     
 return 0;
}