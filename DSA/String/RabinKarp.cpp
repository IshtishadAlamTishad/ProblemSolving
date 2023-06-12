#include <bits/stdc++.h>
using namespace std;

const int prime = 101; // A prime number used for hashing

vector<int> rabinKarp(const string& text, const string& pattern) {
    vector<int> indices; // Stores the indices where the pattern is found

    int textLength = text.length();
    int patternLength = pattern.length();
    int textHash = 0; // Hash value for the current window of text
    int patternHash = 0; // Hash value for the pattern

    int h = 1;
    for (int i = 0; i < patternLength - 1; i++) {
        h = (h * prime) % prime;
    }
  
    // Calculate the hash value for the pattern and the first window of text
    for (int i = 0; i < patternLength; i++) {
        patternHash = (patternHash * prime + pattern[i]) % prime;
        textHash = (textHash * prime + text[i]) % prime;
    }

    // Slide the pattern over the text
    for (int i = 0; i <= textLength - patternLength; i++) {
        // If the hash values of the current window match, compare the characters
        if (patternHash == textHash) {
            bool isMatch = true;
            for (int j = 0; j < patternLength; j++) {
                if (text[i + j] != pattern[j]) {
                    isMatch = false;
                    break;
                }
            }
            if (isMatch) {
                indices.push_back(i); // Pattern found at index i
            }
        }

        // Calculate the hash value for the next window of text
        if (i < textLength - patternLength) {
            textHash = (prime * (textHash - text[i] * h) + text[i + patternLength]) % prime;

            // In case of negative hash value, make it positive
            if (textHash < 0) {
                textHash += prime;
            }
        }
    }

    return indices;
}

int32_t main() 
{
    string text = "ABABCABABABA";
    string pattern = "ABA";

    vector<int> indices = rabinKarp(text, pattern);

    if (indices.empty()) {
        cout << "Pattern not found." << '\n';
    } else {
        cout << "Pattern found at indices: ";
        for (int index : indices) {
            cout << index << " ";
        }
        cout << '\n';
    }
}
