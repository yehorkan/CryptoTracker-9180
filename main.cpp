Я вам надам основний код для обробки даних в C++, де створюється простий клас "Student" з деякими полями, демонструються основні операції обробки даних.

```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

class Student {
public:
    std::string name;
    int age;
    double grade;

    Student(const std::string &name, int age, double grade) {
        this->name = name;
        this->age = age;
        this->grade = grade;
    }
};

bool compare_grades(const Student &s1, const Student &s2) {
    return s1.grade < s2.grade;
}

bool compare_age(const Student &s1, const Student &s2) {
    return s1.age < s2.age;
}

int main() {
    std::vector<Student> students;
    students.push_back(Student("John", 20, 90.5));
    students.push_back(Student("Alice", 22, 85.1));
    students.push_back(Student("Bob", 21, 92.3));
    students.push_back(Student("Charlie", 19, 88.9));

    std::cout << "Original list:" << std::endl;
    for (Student &student : students) {
        std::cout << student.name << " is " << student.age << " years old with a grade of " << student.grade << std::endl;
    }

    std::sort(students.begin(), students.end(), compare_grades);

    std::cout << "\nList sorted by grade:" << std::endl;
    for (Student &student : students) {
        std::cout << student.name << " is " << student.age << " years old with a grade of " << student.grade << std::endl;
    }

    std::sort(students.begin(), students.end(), compare_age);

    std::cout << "\nList sorted by age:" << std::endl;
    for (Student &student : students) {
        std::cout << student.name << " is " << student.age << " years old with a grade of " << student.grade << std::endl;
    }

    return 0;
}
```

Цей код створює простий клас `Student`, додавати студентів до вектора, сортує вектор за оцінками та віком, а потім виводить відсортований список.