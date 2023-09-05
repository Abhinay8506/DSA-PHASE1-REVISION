class Solution
{
    public:
    //Function to find list of all ewords possible by pressing given numbers.
    void solve(vector<string>&ans,string out,int index,int n,int a[],string map[]){
        if(index>=n){
            ans.push_back(out);
            return;
        }
        int num=a[index];
        string val=map[num];
        for(int i=0;i<val.length();i++){
            out.push_back(val[i]);
            solve(ans,out,index+1,n,a,map);
            out.pop_back();
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
       string map[10]{
           " "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
       } ;
       string out;
       int i=0;
       vector<string>ans;
       solve(ans,out,i,N,a,map);
       return ans;
    }
};
