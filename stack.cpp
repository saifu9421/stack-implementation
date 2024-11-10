#include <bits/stdc++.h>
using namespace std;
class MyStack
{
public:
    vector<int> st;
    void push(int val)
    {
        st.push_back(val);
    };

    void pop()
    {
        st.pop_back();
    };

    int top()
    {
        return st.back();
    };

    int size()
    {
        return st.size();
    };

    bool empty()
    {
        if (st.size() == 0)
            return true;
        else
            return false;
    };
};

int main()
{
    MyStack stack;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        stack.push(val);
    };

    while (!stack.empty())
    {
        cout << stack.top() << endl;
        stack.pop();
    }

    //   while (true)
    //   {
    //      int val;  cin>>val;
    //       if(val == -1)  break;
    //       stack.push(val);
    //   };

    //     cout<<stack.top()<<endl;
    //     stack.pop();
    //      cout<<stack.top()<<endl;

    return 0;
}