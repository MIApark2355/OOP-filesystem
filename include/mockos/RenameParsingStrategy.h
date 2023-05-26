#pragma once

#include "../../include/mockos/AbstractParsingStrategy.h"
#include <vector>
#include <string>

using namespace std;

class RenameParsingStrategy : public AbstractParsingStrategy {
public:
    virtual vector<string> parse(string input) override;
};