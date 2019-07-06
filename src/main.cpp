#include <string>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <ios>
#include <iostream>
#include <iomanip>

#include "Student_info.hpp"
#include "grade.hpp"

using namespace std;

int main() {
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;

    while (read(cin, record)) {
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }

    sort(students.begin(), students.end(), compare);

    for (int i = 0; i != students.size(); i++) {
        record = students[i];
        cout << record.name << string(maxlen + 1 - record.name.size(), ' ');

        try {
            double final_grade = grade(record);
            streamsize size = cout.precision();
            cout << setprecision(3) << final_grade << setprecision(size);
        } catch (domain_error e) {
            cout << e.what();
        }

        cout << endl;
    }
}