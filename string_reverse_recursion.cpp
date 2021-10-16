#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        if (s.size()==0)
            return;
        char let = s[0];
        s.erase(s.begin());
        reverseString(s);
        s.push_back(let);
    }
};

int main(){
Solution s;
vector<char> v;
int N;
char in;
for(int i = 0;i<N;i++){
 v.push_back(cin>>in);
}
s.reverseString(v);
  
 return 0;

}
