#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
    string yourString, word;
    vector <string> palindroms;
    cout << "enter words: " << endl;
    getline(cin, yourString);
    stringstream streamForString(yourString);
    while(streamForString >> word) {
        string invertWord(word);
        reverse(invertWord.begin(), invertWord.end());
        if ((!word.compare(invertWord)) && (word.size() > 1)) {
            palindroms.push_back(word);
        }
    }
    if (palindroms.empty())
        cout << "no palindroms";
    else {
        cout << "counts palindroms: " << palindroms.size() << endl;
        for (unsigned int i = 0; i < palindroms.size(); i++)
            cout << " - " << palindroms[i] << endl;
    }
    return cin.get();
}