class Solution {
public:
int strStr(string haystack, string needle) {
    int l1 = needle.length();
    int l2 = haystack.length();
    for (int i = 0; i <= l2 - l1; i++) {
        string temp = haystack.substr(i, l1);
        if (temp == needle) return i;
    }
    return -1;
}
};