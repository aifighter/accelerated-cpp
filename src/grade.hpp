//
// Created by lxc on 2019-07-05.
//

#ifndef ACCELERATED_CPP_GRADE_HPP
#define ACCELERATED_CPP_GRADE_HPP

#include <vector>
#include "Student_info.hpp"

double grade(double, double, double);
double grade(double, double, const std::vector<double>&);
double grade(const Student_info&);

#endif //ACCELERATED_CPP_GRADE_HPP
