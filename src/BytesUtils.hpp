//
// @Author: MorningXu 
// @Description:
// @Date: 2023-07-04
//

#pragma once


#include <vector>
#include <iostream>

using namespace std;

class BytesUtils {
public:
    static void getBytesByLen(const vector<unsigned char>& source, vector<unsigned char>& target, int startIndex, int len) {
        for (int i = 0; i < len; i++) {
            target.push_back(source[startIndex + i]);
        }
    }

    template<typename T>
    static std::vector<T> RangeCopy(const vector<T>& v, int startIndex, int count) {
        return vector<T>(v.begin() + startIndex, v.begin() + count);
    }
};


