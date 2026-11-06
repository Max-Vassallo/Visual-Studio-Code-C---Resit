#ifndef STUDENTRECORD_H
#define STUDENTRECORD_H

#include <string>

class StudentRecord {
private:
    std::string name;
    double mark1;
    double mark2;

public:
    StudentRecord(std::string name, double mark1, double mark2);

    double getAverage() const;
    std::string getName() const;
    bool setMarks(double newMark1, double newMark2);
};

#endif

// Short note -
// - What works: The class stores the name and marks, calculates the average, and accepts valid mark updates.
// - What failed: The update containing 101 was rejected, leaving both previous marks unchanged.
// - What changed: I added validation before storing either new mark.
// The name is private so code outside the class cannot access or change it directly. 
// The public getName() function allows other code to read the name.