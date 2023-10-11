#include<bits/stdc++.h>
using namespace std; 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
class Solution{
public:
    Node* divide(int N, Node *head){
        // code here
        Node* head1=NULL;
        Node* tail1=NULL;
        Node* head2=NULL;
        Node* tail2=NULL;
        Node* temp = head;
        while(temp!=NULL){
            if(temp->data %2==0){
                if(!head1){
                    head1=temp;
                    tail1=temp;
                }
                else{
                    tail1->next = temp;
                    tail1 = tail1->next;
                }
            }
            else{
                if(!head2){
                    head2=temp;
                    tail2=temp;
                }
                else{
                    tail2->next = temp;
                    tail2 = tail2->next;
                }
            }
            temp = temp->next;
        }
        if(!head2){
            return head1;
        }
        tail2->next = NULL;
        if(!head1){
            return head2;
        }
        else{
        tail1->next = head2;
        return head1;
        }
    }
};
int main(){ 
     
 return 0;
}