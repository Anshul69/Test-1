#include<bits/stdc++.h>
using namespace std;
int main(){
int max = -99999,arr[] = {1,2,3,4,5};
for(int i=0;i<5;i++){
    if(max<arr[i]){
        max = arr[i];
    }
}
cout<<"Max element is :   "<<max;
    return 0;
}
