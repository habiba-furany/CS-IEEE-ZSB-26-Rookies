#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    stack<int> st;
    vector<int> ans(n);

    for (int i = 0; i < n; i++) {
        while (!st.empty() && v[st.top()] >= v[i]) {
            st.pop();
        }

        if (st.empty()) ans[i] = 0;
        else ans[i] = st.top() + 1;
        st.push(i);
    }

    for (int i = 0; i < n; i++) cout << ans[i] << " ";

    return 0;
}
