#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
 
    while(a--)
    {
        int h=0;
        string s;
        cin>>s;
        vector<int>v(5,0);
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i]=='A'||s[i]=='a')
            v[0]++;
            else if(s[i]=='E'||s[i]=='e')
            v[1]++;
            else if(s[i]=='I'||s[i]=='i')
            v[2]++;
            else if(s[i]=='O'||s[i]=='o')
            v[3]++;
            else if(s[i]=='U' ||s[i]=='u')
            v[4]++;
        }
        for(int i=0;i<5;i++)
        if(v[i]>=1)
        h+=1;
        if(h>=5)
        cout<<"lovely string"<<endl;
        else
        cout<<"ugly string"<<endl;
    }
}