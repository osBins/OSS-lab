#include<bits/stdc++.h>
using namespace std;


int fun(String s){
 vector<int> mmp(256,-1);

        int l=0;
        int r=0;
        int n= s.length();
        int len=0;
        while(r<n)
        {
            if(mmp[s[r]]!=-1)
                l = max(mmp[s[r]]+1,l);

            mmp[s[r]]=r;

            len = max(len,r-l+1);
                r++;
        }

        return len;

    }

int main(){
  String s;
  cin>>s;
  fun(s);
  return 0;
}
