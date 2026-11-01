#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main(){
    vector<int> nums={5,5,6,7,8,8};
    cout <<"去重前：";
    for (int n:nums){
        cout<<n<<" ";
    }
    cout<<endl;
    set<int>u_nums(nums.begin(),nums.end());
    cout<<"去重后：";
    for (int n:u_nums){
        cout<<n<<" ";
    }
    cout<<endl;
    return 0;
}
