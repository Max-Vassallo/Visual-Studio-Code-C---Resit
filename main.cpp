//StudentRecord.cpp//
#include <iostream>
#include "StudentRecord.h"

int main() {
    StudentRecord student("Max", 70, 80);

    std::cout << "Name: " << student.getName() << '\n';
    std::cout << "Average: " << student.getAverage() << '\n';

    bool accepted = student.setMarks(85, 95);

    if (accepted) {
        std::cout << "Valid marks accepted\n";
    } else {
        std::cout << "Valid marks rejected\n";
    }

    std::cout << "Average afterwards: "
              << student.getAverage() << '\n';

    accepted = student.setMarks(60, 110);

    if (accepted) {
        std::cout << "Invalid marks accepted\n";
    } else {
        std::cout << "Invalid marks rejected\n";
    }

    std::cout << "Average afterwards: "
              << student.getAverage() << '\n';

    return 0;
}

// //Book.cpp//
// #include <iostream>
// #include <vector>
// #include "Book.h"

// int main() {
//     Book first("Doubliner", "James Joyce", 1914);
//     if (first.borrowBook())
//         std::cout << "Borrowed" << std::endl;
//     if (!first.borrowBook())
//         std::cout << "On loan" << std::endl;
//     return 0;

//     std::vector<Book> shelf;
//     Book Second("Persuasion", "Jane Austen", 1817);
//     shelf.push_back(Second);

//     shelf.push_back(first);
//     shelf.push_back(Second);
//     int count = 0;
//     for (const Book& book : shelf) 
//     {
//         if (book.isAvailable())
//             count++;
//     }
//     std::cout << count << std::endl;
// };

// //Product.cpp//
// #include <iostream>
// #include "Product.h"

// int main() {
//     Product product("Kettle", 40.0);

//     std::cout << product.priceAfterDiscount(25.0) << '\n';

//     return 0;
// }
