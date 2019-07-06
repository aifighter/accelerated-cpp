//
// Created by lxc on 2019-07-05.
//

#ifndef ACCELERATED_CPP_STUDENT_INFO_HPP
#define ACCELERATED_CPP_STUDENT_INFO_HPP

#include <vector>
#include <string>
#include <iostream>

struct Student_info {
    std::string name;
    double final, midterm;
    std::vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);
std::istream& read(std::istream&, Student_info&);
std::istream& read_hw(std::istream&, std::vector<double>&);
#endif //ACCELERATED_CPP_STUDENT_INFO_HPP
