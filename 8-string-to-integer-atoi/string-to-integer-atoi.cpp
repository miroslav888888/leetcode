class Solution {
public:
    int myAtoi(string s) {
int ans = 0;
string temp = "";
bool sign = true;
bool readsign = true;
for (int i = 0; i < s.size(); i++) {
    if (s[i] >= '0' && s[i] <= '9') {
        readsign = false;
        temp.push_back(s[i]);
    }
    else if (s[i] == ' '&&readsign==true) continue;
    else if (s[i] == '+' && readsign == true) {
        sign = true;
        readsign = false;
    }
    else if (s[i] == '-'&&readsign==true) {
        sign = false;
        readsign = false;
    }
    else break;
}
for (int i = 0; i < temp.size(); i++) {
    if (sign == true) {
        if (ans + (temp[i] - 48) * pow(10, temp.size() - i - 1) <= INT_MAX) {
            ans += (temp[i] - 48) * pow(10, temp.size() - i - 1);
        }
        else return INT_MAX;
    }
    else {
        if ((temp[i] - 48) * pow(10, temp.size() - i - 1)*(-1)+ ans>= INT_MIN) {
            ans -= (temp[i] - 48) * pow(10, temp.size() - i - 1);
        }
        else return INT_MIN;
    }
}
return ans;
    }
};