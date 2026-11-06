#include "StudentRecord.h"

StudentRecord::StudentRecord(std::string name, double mark1, double mark2)
    : name(name), mark1(mark1), mark2(mark2) {
}

double StudentRecord::getAverage() const {
    return (mark1 + mark2) / 2;
}

std::string StudentRecord::getName() const {
    return name;
}

bool StudentRecord::setMarks(double newMark1, double newMark2) {
    if (newMark1 < 0 || newMark1 > 100 ||
        newMark2 < 0 || newMark2 > 100) {
        return false;
    } else {
        mark1 = newMark1;
        mark2 = newMark2;
        return true;
    }
}