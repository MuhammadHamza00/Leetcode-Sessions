class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
    if(str1+str2 == str2+str1){
    int a, b;
    if (str1.length() > str2.length()) {
        a = str1.length();
        b = str2.length();
    } else {
        a = str2.length();
        b = str1.length();
    }

    int R = 0;
    int Q = 0;
    int gcd;
    do {
        Q = a / b;
        R = a % b;
        a = b;
        b = R;
        if (b == 0) {
            gcd = a;
        }
    } while (b != 0);
    bool check = false;
    for(int i = 0 ; i < gcd ; i++  )
    {
        if(str1[i] == str2[i]){
            check = true;
        }
    }
    string gcd_str;
    if (check == true)
    {
        gcd_str = str1.substr(0, gcd);
    }
    else{
        gcd_str = "";
    }
    return gcd_str;
    }else{
        return "";
    }
}
};