#include <iostream>
#include <string>
using namespace std;

int countVowels(const string &sentence) {
    int vowelCount = 0;
    for (char c : sentence) {
        char lowercaseChar = tolower(c);
        if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u') {
            vowelCount++;
        }
    }
    return vowelCount;
}
int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int vowels = countVowels(sentence);
    cout << "Number of vowels in the sentence: " << vowels << endl;
    
    return 0;
}






















