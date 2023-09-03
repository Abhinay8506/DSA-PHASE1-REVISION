#include <bits/stdc++.h>

using namespace std;
int binaryflip(string str,int k){
    int s=0;
    int zcount=0;
    int maxi=0;
    int e=0;
    for(;e<str.length();e++){
       if(str[e]=='0')
       {
           zcount++;
       }
       while(zcount>k)
       {
           if(str[s]=='0') {
               zcount--;
           }
           s++;
       }
       int len=(e-s)+1;
       if(maxi<len){
           maxi=len;
       }
       
    }
    return maxi;
}

int main()
{
    string str;
    cin>>str;
    int k;
    cin>>k;
    cout<<binaryflip(str,k);

    return 0;
}
