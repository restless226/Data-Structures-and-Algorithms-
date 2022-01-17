// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;

bool pairWiseConsecutive(stack<int> s);

// Driver program
int main() {
    int t;
    cin >> t;
    while (t--) {
        stack<int> s;
        int n, tmp;
        cin >> n;
        while (n--) {
            cin >> tmp;
            s.push(tmp);
        }
        if (pairWiseConsecutive(s))cout << "Yes" << endl;
        else cout << "No" << endl;
        /*while (s.empty() == false)
        {
            cout << s.top() << " ";
            s.pop();
        }
        cout<<endl;*/
    }
    return 0;
}
// } Driver Code Ends


//User function Template for C++

// your task is to complete the function
// function should return true/false or 1/0
bool pairWiseConsecutive(stack<int> s) {
    //Code here
    stack<int> s1;
    while (!s.empty()) {
        s1.push(s.top());
        s.pop();
    }

    if (s1.size() == 1) {
        return true;
    }

    if (s1.size() % 2 != 0) {
        s1.pop();
    }

    bool flag = false;
    int arr[2];
    int i = 0, j = 1;
    while (!s1.empty()) {
        arr[i] = s1.top();
        s1.pop();
        arr[j] = s1.top();
        s1.pop();
        if (arr[i] + 1 == arr[j]) {
            flag = true;
        } else {
            flag = false;
        }
    }
    return flag;


}