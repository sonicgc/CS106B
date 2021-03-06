#include <iostream>
#include <string>

using namespace std;

string CensorString1(string text, string remove);

void CensorString2(string &text, string remove);

int main()
{
    string text = "Stanford University";
    string remove = "nt";
//    string new_text = CensorString1(text, remove);
//    cout << new_text << endl;

    CensorString2(text,remove);
    cout << text << endl;

    return 0;
}

string CensorString1(string text, string remove){
    string new_text;
    for(int i=0; i<text.length(); i++){
        bool found = false; // set a sentinel 设置flag表示是否找到相同字符
        for(int j=0; j<remove.length(); j++){
            if(text[i]==remove[j]){
                found = true;
            }
        }
        if(found == 0){
            new_text += text[i];
        }
        cout << new_text << endl;
    }
    return new_text;
}

void CensorString2(string &text, string remove){

    for(int i = 0; i<remove.length(); i++){
        int found = 0;

        while((found=text.find(remove[i],found))!= string::npos){
                text.erase(found,1);
        }
    }
}
