#include<iostream>
using namespace std;

/* function to determine anagram or not */
bool isAnagram(string s, string t){

    /* if the sizes are not equal we return false */
    if(s.size() != t.size())
        return false;
    
    /* array to keep the character count of first string */
    int charCounter[26] = {0};

    /* storing the character count */
    for(int i=0;i<s.size();i++){
        charCounter[s[i]-97]++;
    }

    /* reducing the character counts by using 2nd string */
    for(int i=0;i<t.size();i++){
        charCounter[t[i]-97]--;
    }

    /* checking if character counts are same i.e. checking for anagrams */
    for(int i=0;i<26;i++){
        if(charCounter[i] != 0)
            return false;
    }

    return true;
}

int main(){
    string s = "anagram";
    string t = "nagaram";
    cout<<(isAnagram(s,t)? "true" : "false") <<endl;
    /* outputs: true */

    s = "rat";
    t = "car";
    cout<<(isAnagram(s,t)? "true" : "false") <<endl;
    /* outputs: false */
    return 0;
}