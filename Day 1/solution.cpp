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
    int numComponents(ListNode* head, vector<int>& nums) {
        ListNode* temp1 = head;
        int ans = 0;
        int temp = 0;
        while(temp1!=NULL){  
            if(count(nums.begin(),nums.end(),temp1->val) == 1){
                temp++;
                if(temp == 1){
                    ans++ ;
                }
            }
            else{
                temp = 0;
            }
            temp1 = temp1 -> next;
        }
        return ans;
    }
};
int main(){ 
     
 return 0;
}