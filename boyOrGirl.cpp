#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cin >> name;

    int count = 0;
    int length = name.length();

    for (int i = 0; i < length; i++) {
        bool isUnique = true;
        for (int j = 0; j < i; j++) {
            if (name[i] == name[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            count++;
        }
    }

    if (count % 2 == 0 )
    {
        cout<<"CHAT WITH HER!";
    }
    else
    {
        cout<<"IGNORE HIM!";
    }
    return 0;
}