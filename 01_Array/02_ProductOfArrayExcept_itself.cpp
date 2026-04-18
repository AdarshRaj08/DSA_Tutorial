#include<iostream>
#include <bits/stdc++.h>

using namespace std;


int main()
{
    int arr[] = {-1,1,0,-3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;

    // this is the brute force solution 
    for(int i=0; i<n; i++)
    {
        int mul = 1;
        for(int j=0; j<n; j++)
        {
            if(i != j)
            {
                mul *= arr[j];
            }
        }
        v.push_back(mul);
    }

    for(int value : v)
    {
        cout << value << " ";
    }
    return 0;
}