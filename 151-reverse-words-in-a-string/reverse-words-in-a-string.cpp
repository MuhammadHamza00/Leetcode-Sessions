class Solution {
public:
    string reverseWords(string s) {
        int start = 0, end = s.length() - 1;
        while (start <= end && s[start] == ' ') start++;
        while (end >= start && s[end] == ' ') end--;

        if (start > end) return "";

        string out = "";
        stack<string> st;
        string word = "";

        // Traverse the string and push words to the stack
        for (int i = start; i <= end; i++) {
            if (s[i] == ' ') {
                if (!word.empty()) {
                    st.push(word);
                    word = "";
                }
            } else {
                word += s[i];
            }
        }
        // Push the last word if there is any
        if (!word.empty()) {
            st.push(word);
        }

        // Build the output from the stack
        while (!st.empty()) {
            out += st.top();
            st.pop();
            if (!st.empty()) {
                out += ' ';
            }
        }

        return out;
    }
};
