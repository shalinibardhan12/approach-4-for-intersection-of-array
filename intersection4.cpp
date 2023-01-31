 #include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
void findArrayIntersection(vector<int> arr1,vector<int> arr2)
{
    int i =0,j=0;
    int ans;
    while(i<arr1.size()&&j<arr2.size())
    {
if(arr1[i]==arr2[j])
{
    ans = arr1[i];
    cout<<ans<<" ";
    i++,j++;
}
else if(arr1[i]<arr2[j])
{
    i++;
}
else
{
j++;
    }
    }
    
}
int main()
{
      vector<int> arr1= {1,2,2,2,3,4};
      vector<int> arr2 = {2,2,3,3};
      findArrayIntersection( arr1, arr2 );

    return 0;

}