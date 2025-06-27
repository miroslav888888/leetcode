public class Solution {
    public string IntToRoman(int num)
{
    string ans = "";
    while(num%5!=0)
    {
        if (num % 10 == 4)
        {
            ans += "VI";
            num -= 4;
            break;
        }
        if (num % 10 == 9)
        {
            ans += "XI";
            num-= 9;
            break;
        }
        ans += "I";
        num -= 1;
    }
    if (num % 10 == 5)
    {
        ans += "V";
        num -= 5;
    }
    while (num % 50 != 0)
    {
        if (num % 100 == 40)
        {
            ans += "LX";
            num -= 40;
            break;
        }
        if (num % 100 == 90)
        {
            ans += "CX";
            num -= 90;
            break;
        }
        ans += "X";
        num -= 10;
    }
    if (num % 100 == 50)
    {
        ans += "L";
        num -= 50;
    }
    while (num % 500 != 0)
    {
        if (num % 1000 == 400)
        {
            ans += "DC";
            num -= 400;
            break;
        }
        if (num % 1000 == 900)
        {
            ans += "MC";
            num -= 900;
            break;
        }
        ans += "C";
        num -= 100;
    }
    if (num % 1000 == 500)
    {
        ans += "D";
        num -= 500;
    }
    while (num % 5000 != 0)
    {
        ans += "M";
        num -= 1000;
    }
    ans = new string(ans.Trim().Reverse().ToArray());
    return ans;
}
}