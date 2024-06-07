class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        string word="",ans="";
        bool ok=false;
        map<string, int>mp;
        for(auto &it: dictionary){
            mp[it] = 1;
        }
        for(int i=0; i<sentence.size(); i++){
            if(sentence[i]==' '){
                if(ok==false){
                    ans += word;
                    ans +=" ";
                }
                word = "";
                ok = false;
            }
            else{
                word += sentence[i];
                if(mp[word] == 1 && ok == false ){
                    ans+=word;
                    ans+=" ";
                    ok = true;
                }
            }
        }
        if(ok==false) ans += word;
        else ans.pop_back();
        return ans;
    }
};