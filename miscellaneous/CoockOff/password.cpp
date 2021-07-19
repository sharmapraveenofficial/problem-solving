#include <iostream>
#include <stack>
#include <regex>

using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {

        bool upper_case = false; 
        bool lower_case = false; 
        bool number_case = false; 
        bool special_char = false;

        string s;
        cin >> s;

        int first = (int)s[0];
        int last = (int)s[s.length()-1];
         cout<<first<<last;
        if((first >=65 && first <=90 || first>=49 && first <=57)||(last >=65 && last <=90 ||last>=49 && last <=57 ) || s.length()<8){
            cout<<"NO"<<endl;
            continue;
        }

        for(int i=0;i<s.length();i++){
            int val= (int)s[i];

            if(val >=65 && val <=90)
                upper_case=true;
            else if(val >=48 && val <=57)
                number_case=true;
            else if(val >=97 && val <=122) 
                lower_case=true;
            else if(val==64 || val==63)  
                special_char=true;
            else if(val==35 || val==37 ) 
                special_char=true;    
            else if(val==38)    
             special_char=true;         
        }

        cout<<upper_case<<lower_case<<special_char<<number_case;
        if(upper_case&&lower_case&&special_char&&number_case)
            cout<<"YES"<<endl;
        else
        {
             cout<<"NO"<<endl;
        }
            

    }

    return 0;
}
