/*
 **===================================**
 **        AE Roni Ahamed             **
 **         City University                **
 **                                   **
 **===================================**
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string st, a, b;
        cin>>st;
        a = st[0];
        int ind = 0;
        int n = st.size();
        for(int i=1; i<n-1; i++)
            {
                    a += st[i];
                    ind = i;
                if(st[i+1]!='0')break;

            }
        for(int i=ind+1; i<n; i++)
            b += st[i];

        int c = stoi(a);
        int d = stoi(b);

        if(c>=d)
            cout<<-1<<endl;
        else
            cout<<c<<" "<<d<<endl;
    }

    return 0;
}


