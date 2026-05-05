#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
std::string to_upper(const std::string &s) {
    std::string result = s;
    std::transform(result.begin(), result.end(), result.begin(), ::toupper);
    return result;
}
std::string to_lower(const std::string &s) {
    std::string result = s;
    std::transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}
std::vector<std::string> split(const std::string &s, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(s);
    while (std::getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}
std::string join(const std::vector<std::string> &v, const std::string &delimiter) {
    std::ostringstream oss;
    for (size_t i = 0; i < v.size(); ++i) {
        oss << v[i];
        if (i != v.size() - 1) oss << delimiter;
    }
    return oss.str();
}
int main() {
    std::string str = "Hello, World!";
    std::cout << to_upper(str) << std::endl;
    std::cout << to_lower(str) << std::endl;
    std::vector<std::string> words = split(str, ' ');
    std::cout << join(words, "-") << std::endl;
    return 0;
}
