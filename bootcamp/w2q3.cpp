#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, in;
        cin >> n;
        priority_queue<int> tpq;
        priority_queue<int> bpq;

        for(int i = 0; i < n; i++)
        {
            cin >> in;
            tpq.push(in);
            bpq.push(-in);
        }

        int inSz = tpq.size();
        long long ansN = 1LL*tpq.top() * (-bpq.top());

        priority_queue<int> ans;

        for(int64_t i = 2; i*i <= ansN; ++i) 
        {
            if(ansN % i == 0)
            {
                int other = ansN / i;
                ans.push(i);
                if(other!=i)
                {
                    ans.push(other);
                }
            }

        }

        bool isEqual = true;

        if(ans.size() != inSz)
        {
            isEqual = false;
        }
        else
        {
            while(!ans.empty() && !tpq.empty())
            {
                if(ans.top() != tpq.top())
                {
                    isEqual = false;
                    break;
                }
                ans.pop();
                tpq.pop();
            }
        }

        if(isEqual)
        {
            cout << ansN << "\n";
        }
        else
        {
            cout << -1 << "\n";
        }

    }
    return 0;
}