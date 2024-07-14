class Solution {
public:
    string mergeAlternately(string word1, string word2) {
    string mergedString;
    
    int len1 = word1.length();
    int len2 = word2.length();
    
    int maxLength = (len1 > len2) ? len1 : len2;
    
    for (int i = 0; i < maxLength; ++i) {
        if (i < len1) {
            mergedString += word1[i];
        }
        if (i < len2) {
            mergedString += word2[i];
        }
    }
    
    return mergedString;
    }
};