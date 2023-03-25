//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int getAngle(int H , int M) {
         float hour_angle = 0.5 * (60 * (H % 12) + M);

    float minute_angle = 6 * M;

    float angle = abs(hour_angle - minute_angle);

    if (angle > 180) {
        angle = 360 - angle;
    }

    return floor(angle);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int H,M;
        
        cin>>H>>M;

        Solution ob;
        cout << ob.getAngle(H,M) << endl;
    }
    return 0;
}
// } Driver Code Ends