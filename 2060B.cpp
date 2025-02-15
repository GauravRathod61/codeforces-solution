#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int t ;
    cin>>t ;
    while(t--)
    {
        int n,m ;
        cin>>n>>m ;
        int prr[n] ;
        vector<vector<int>>vec(n) ;
        for(int i=0;i<n;i++)
        {
            vector<int>tvec ;
            for(int j=0;j<m;j++)
            {
                int te ;
                cin>>te ;
                tvec.emplace_back(te) ;
            }
            sort(tvec.begin(),tvec.end()) ;
            int ord = tvec[0] ;
            prr[ord] = i ;
            vec[i] = tvec ;
        }
        if(m==1)
        {
            for(int i=0;i<n;i++)
            {
                cout<<prr[i]+1<<" " ;
            }
            cout<<endl ;
            continue ;
        }
        int req = n*(m-1) ;
        int che = 0 ;
        for(int i=0;i<n;i++)
        {
            int ma = -1 ;
            int mi = INT_MAX ;
            for(int j=1;j<m;j++)
            {
                if(vec[i][j]-vec[i][j-1]!=n)
                {
                    che = 1 ;
                    break ;
                }

            }
            if(che==1)
            {
                break ;
            }
        }
        if(che==1) cout<<-1<<endl ;
        else
        {
            for(int i=0;i<n;i++) cout<<prr[i]+1<<" " ;
            cout<<endl ;
        }

        
    }
    return 0 ;
}