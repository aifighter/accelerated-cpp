//
// Created by lxc on 2019-07-05.
//

#include <vector>
#include <algorithm>
#include <stdexcept>
#include "median.hpp"

using std::vector;
using std::sort;
using std::domain_error;

double median(vector<double> vec) {
    typedef vector<double>::size_type vec_sz;
    vec_sz size = vec.size();
    if (size == 0) {
        throw domain_error("median of an empty vector");
    }
    vec_sz mid = size / 2;
    sort(vec.begin(), vec.end());
    return size % 2 == 0 ? (vec[mid - 1] + vec[mid]) / 2 : vec[mid];
}