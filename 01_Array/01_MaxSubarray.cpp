#include<iostream>
#include<vector>
#include<math.h>
#include <bits/stdc++.h>

using namespace  std;

// git add.
// git commit -m "message"
// git push -u origin main

int main()
{
    // vector<int> sum_store;
    int ans = INT_MIN;
    int arr[5] = {4,-1,2,-5,1};
    int n = 5;
    int sum = 0;
    for(int st=0; st < n; st++)
    {
        // int sum = 0;
        for(int end=st; end < n; end++)
        {
            for(int i=st; i<=end; i++)
                sum += arr[i];
            
            ans = max(ans,sum);
            sum = 0;
        }
    }
    cout << "answer is " << ans;

    // // ********* OPTIMIZE OF BRUTE FORCE *******
    // for(int st=0; st < n; st++)
    // {
    //     int sum = 0;
    //     for(int end=st; end < n; end++)
    //     {
    //         sum += arr[end];
    //         ans = max(ans,sum);
    //     }
    // }
    // cout << "answer is " << ans;


    return 0;
}