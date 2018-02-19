// 2ms, 98.01%
class Solution
{
public:
    bool isValid(string s)
    {
        string par = "";
        for(auto x : s)
            switch(x)
            {
                case '(': par += '('; break;
                case '[': par += '['; break;
                case '{': par += '{'; break;
                case ')':
                    if(par[par.length() - 1] == '(')
                        par.erase(par.end() - 1);
                    else return false; break;
                case ']':
                    if(par[par.length() - 1] == '[')
                        par.erase(par.end() - 1);
                    else return false; break;
                case '}':
                    if(par[par.length() - 1] == '{')
                        par.erase(par.end() - 1);
                    else return false; break;
            }
        if(par == "") return true;
        return false;
    }
};