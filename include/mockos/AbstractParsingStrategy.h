#pragma once
#include <vector>
#include <string>

using namespace std;
class AbstractParsingStrategy {
public:
    virtual vector<string> parse(string input) = 0;
};