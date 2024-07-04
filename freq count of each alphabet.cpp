#include <iostream>
#include <string>

using namespace std;

int countF(string s)
{
   
    int count[256] = {0};

    int l = str.length();
    for (int i=0; i<l; i++){
        count[str[i]]++;}

    for (int i=0; i<256; i++)
    {if (count[i] != 0)
            cout << char(i) << "  " << count[i] << endl;
    }
    return 0;
}


int main()
{
    string s = "Programming is good";
    countF(s);
    return 0;
}
