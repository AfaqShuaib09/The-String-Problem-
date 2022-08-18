#include<iostream>
using namespace std;
#include<string>

bool isUpperAlpha(char c)
{
    if (c>='A' && c<='Z')
        return true;
    else 
        return false;
}
bool isUpperVowel(char c)
{
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        return true;
    else
        return false;
}
bool isLowerAlpha(char c)
{
    if (c>='a' && c<='z')
        return true;
    else 
        return false;
}
bool isLowerVowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return true;
    else
        return false;
}
int main()
{
    bool u_flag, l_flag;
    string str;
    int n;
    cin >> n;
    while(n)
    {
        cin >> str;
        int size = str.length();
        u_flag = true;
        l_flag = true;
        for(int i=0;i<size && (u_flag || l_flag);i++)
        {
            if(u_flag)
            {
                if (isUpperAlpha(str[i]))
                {
                   if(!isUpperVowel(str[i]))
                       u_flag = false;
                }
            }
            if(l_flag)
            {
                if (isLowerAlpha(str[i]))
                {
                   if(!isLowerVowel(str[i]))
                       l_flag = false;
                }
            }
        }
        if(u_flag || l_flag){
            cout<<"lovely string\n";
        }
        else{
            cout<<"ugly string\n";
        }
        n--;
    }
    return 0;
}
