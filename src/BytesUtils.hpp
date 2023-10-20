//
// @Author: MorningXu 
// @Description:
// @Date: 2023-07-04
//

#pragma once


#include <vector>
#include <iostream>

using namespace std;

namespace bitconverter {

    void getBytesByLen(const vector<unsigned char>& source, vector<unsigned char>& target, int startIndex, int len) {
        for (int i = 0; i < len; i++) {
            target.push_back(source[startIndex + i]);
        }
    }

    template<typename T>
    std::vector<T> RangeCopy(const vector<T>& v, int startIndex, int count) {
        return vector<T>(v.begin() + startIndex, v.begin() + count);
    }
};


