#include<bits/stdc++.h>
using namespace std; 
class Solution {
  public:
    int minInsAndDel(int a[], int b[], int n, int m) {
        // code here
         vector <int> lis;
        for(int i=0; i<n; i++){
        if(binary_search(b, b+m, a[i])){
        	auto it = lower_bound(lis.begin(), lis.end(), a[i]);
        // 	cout << it - lis.begin() << endl;
            if(it == lis.end()){
              lis.push_back(a[i]);  
            } 
            else{
                *it = a[i];
            }   
        }
    }
    return n+m-2*lis.size();
    }
};
int main(){ 
     
 return 0;
}