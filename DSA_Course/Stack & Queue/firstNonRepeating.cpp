#include<iostream>
#include<queue>
#include<vector>

using namespace std;

vector<char> FindFirstNonRepeatingCharacter(string s)
{
    queue<char> q;
    vector<char> res;
    int freq[27] = {0};
    int i = 0;

    while (s[i] != '\0')
    {
        q.push(s[i]);
        freq[s[i] - 'a']++;

        while (!q.empty())
        {

            int idx = q.front() - 'a';

            if (freq[idx] > 1)
            {
                q.pop();
            }
            else
            {
                res.push_back(q.front());
                break;
            }
        }

        if (q.empty())
        {
            res.push_back('0');
        }

        i++;
    }
    return res;
}

int main(){

    // char ch;
    // cin>>ch;

    // queue<char> q;
    // int freq[27] = {0};

    // while(ch!='.'){

    //    q.push(ch); 
    //    freq[ch-'a']++;

    //    while(!q.empty()){
    //        int idx = q.front() - 'a';

    //        if(freq[idx]>1){
    //            q.pop();
    //        }else{
    //          cout<<q.front()<<endl;
    //          break;
    //        }
    //    }

    //    if(q.empty()){
    //        cout << "-1" << endl;
    //    }

    //    cin>>ch;
    // }

    string s = "aabdacbdjalda";
    vector<char> res =  FindFirstNonRepeatingCharacter(s);
    
    for(auto ch:res){
        cout<<ch<<" ";
    }
}