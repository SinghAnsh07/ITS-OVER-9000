class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        for(int i=k; i<=n; i++){
            string res ="";
            for(int j=0;j<= n-i;j++){
                string temp = s.substr(j,i);
                int ones =0;
                for(char &ch : temp){
                    ones += (ch == '1') ? 1 : 0;
                }
                if(ones == k){
                    if(res.empty() || temp <= res){
                        res = temp;
                    }
                }
            }
            if(!res.empty()){
                return res;
            }
        }
        return "";
    }
};