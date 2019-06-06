#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
      int n,m;
      cin>>n>>m;
      std::vector<vector<char>> v(n);
      vector <pair<int,int>> whites;
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
          char s;
          cin>>s;
           v[i].push_back(s);
          if(s=='1')
          whites.push_back(make_pair(i,j));
         
      }
    }
    
    for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
              if(v[i][j]=='1')
              cout<<0<<" ";
              else
              {
            int minDis=1000000;
            for(int k=0;k<whites.size();k++)
            {
                int dis=abs(whites[k].first -i)+abs(whites[k].second -j);
                if(dis<minDis)
                minDis=dis;
            }
            std::cout << minDis <<" ";
              }
          }
          cout<<endl;
    
       
    }
    }
	return 0;
}

