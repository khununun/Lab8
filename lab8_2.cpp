#include <iostream>
using namespace std;

int main()
{
    string name ;
    string id;
    string ans1;
    string ans2;
    string ans3;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin , name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    getline(cin , id);
    cout << "Fahsai: I think you may be GEAR " << (((int(id[0])-'0')*10) + (int(id[1])-'0'))-12 << ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    getline(cin , ans1);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin , ans2);
    cout << "Fahsai: " << ans2 << "....that is OK!!! I'm looking forward to watching " << ans1 << " with you.\n";
    cout << name << ": ";
    getline(cin , ans3);
    cout << "Fahsai: 555+ see you " << ans2 << ". Bye Bye \\(^ ^)/";
}