class Solution {
public:
    bool isVowel(char c)
{
    c = std::tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

string reverseVowels(string s)
{
    string vowels = "aeiouAEIOU";
    string real = "";
    // Get the String
    for (int i = 0; i < s.length(); i++)
    {
        if (isVowel(s[i]))
        {
            real += s[i];
        }
    }
    // reverse the string
    reverse(real.begin(), real.end());
    int j = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(isVowel(s[i])){
            s[i] = real[j];
            j++;
        }
    }
    return s;
}

    
};