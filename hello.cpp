#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="";
    string f = "HelloWorld";
    char c = char(33);
      int i = 0;
    while (1)
    {
      
        s += c;
       
        if (s[i] != f[i])
        {
            s.pop_back();
              c++;
            
        }
       else
        {
            i++;
            c = char(33);
        }
        if(s==f) break;
      
    }
        
    
    cout<<s;
  
   
}