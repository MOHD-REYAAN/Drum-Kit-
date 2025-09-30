#include <bits/stdc++.h>
using namespace std;

string encrypt(string text, int key){
    string result = "";
    for(char c : text){
        if(isupper(c)){
            result += (c - 'A'+ key)% 26 + 'A';
        }
        else if(islower(c)){
            result += (c - 'a' + key)% 26 +'a';
        }
        else{
            result +=c;
        }
    }
    return result;
}

string decrypt(string text,int key){
    string result="";
    for(char c : text){
    if(isupper(c)){
        result+=(c - 'A'+26 -key)%26 +'A';
    }
    else if(islower(c)){
        result += (c-'a'+26 - key)%26 +'a';
    } 
    else{
        result+=c;
    }
} return result;
}

int main(){
    string text;
    int key;

    cout<<"enter the text you want to encrypt \n";
    getline(cin,text);

    cout<<"enter the key for encrypt \n";
    cin>>key;

 string enc = encrypt(text, key);
    string dec = decrypt(enc, key);

    cout<<enc<<" \n";
    cout<< dec<< " \n";

    return 0;
    
}
