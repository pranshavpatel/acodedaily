// https://leetcode.com/problems/unique-email-addresses/description/

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> st;
        for(string &email : emails) {
            string realEmail;
            for(char c : email) {
                if(c == '+' || c == '@') break;
                if(c == '.') continue;
                realEmail += c;
            }
            realEmail += email.substr(email.find('@'));
            st.insert(realEmail);
        }
        return st.size();
    }
};
