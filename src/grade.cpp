//
// Created by lxc on 2019-07-05.
//

#include "grade.hpp"
#include "median.hpp"
#include <stdexcept>

using std::vector;
using std::domain_error;

double grade(double midterm, double final, double homework) {
    return midterm * 0.2 + final * 0.4 + homework * 0.4;
}

double grade(double midterm, double final, const vector<double>& hw) {
    if (hw.size() == 0) {
        throw domain_error("student has done no homework");
    }
    return grade(midterm, final, median(hw));
}

double grade(const Student_info& s) {
    return grade(s.midterm, s.final, s.homework);
}