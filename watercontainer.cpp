//
//  watercontainer.cpp
//  
//
//  Created by abhihsikt vv on 24/04/22.
//

#include <iostream>
#include<vector>
using namespace std;


    int maxArea(vector<int>& H) {
        
        int ans = 0, i = 0, j = H.size()-1, res = 0;
        while (i < j) {
            if (H[i] <= H[j]) {
                res = H[i] * (j - i);
                i++;
            } else {
                res = H[j] * (j - i);
                j--;
            }
            if (res > ans) ans = res;
        }
        return ans;
    }

int main()
{
    vector<int> heights = {1,8,6,2,5,4,8,3,7};
    cout<<" the max water stored is:" << maxArea(heights)<<endl;
    return 0;
}
