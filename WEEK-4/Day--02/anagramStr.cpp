#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

//                               Function to clean the string (remove spaces and convert to lowercase)
std::string cleanString(std::string str) {
    std::string cleaned = "";
    for (char c : str) {
        if (!std::isspace(c)) {
            cleaned += std::tolower(c);
        }
    }
    return cleaned;
}

//               Function to check if two strings are anagrams
bool isAnagram(std::string str1, std::string str2) {
    // Clean both strings first
    str1 = cleanString(str1);
    str2 = cleanString(str2);

    //                If lengths are different, they cannot be anagrams
    if (str1.length() != str2.length()) {
        return false;
    }

    // Sort both strings
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());

    return str1 == str2;
}

int main() {
    std::string str1 = "Listen";
    std::string str2 = "Silent";

    if (isAnagram(str1, str2)) {
        std::cout << "'" << str1 << "' and '" << str2 << "' are anagrams." << std::endl;
    } else {
        std::cout << "'" << str1 << "' and '" << str2 << "' are NOT anagrams." << std::endl;
    }

    return 0;
}