// Learning C++ 
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño 

#include <iostream>
#include <vector>
#include "records.h"

int main(){
    float GPA = 0.0f;
    int id;
    
    std::vector<Student> students = {Student(1, "George P. Burdell"),
                                    Student(2, "Nancy Rhodes")};

    std::vector<Course> courses = {Course(1, "Algebra", 5),
                                Course(2, "Physics", 4),
                                Course(3, "English", 3),
                                Course(4, "Economics", 4)};

    std::vector<Grade> grades = {Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
                                Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B')};

    std::cout << "Enter a student ID: " << std::flush;
    std::cin >> id;

    // Calculate the GPA for the selected student.
    // Write your code here

    for (const auto& grade : grades) {
        if (grade.get_student_id() == id) {
            int course_id = grade.get_course_id();
            char letter_grade = grade.get_grade();
            int credits = 0;

            for (const auto& course : courses) {
                if (course.get_id() == course_id) {
                    credits = course.get_credits();
                    break;
                }
            }

            float grade_points = 0.0f;
            switch (letter_grade) {
                case 'A': grade_points = 4.0f; break;
                case 'B': grade_points = 3.0f; break;
                case 'C': grade_points = 2.0f; break;
                case 'D': grade_points = 1.0f; break;
                case 'F': grade_points = 0.0f; break;
            }

            GPA += grade_points * credits;
        }
    }

    std::string student_str;
    for (const auto& student : students) {
        if (student.get_id() == id) {
            student_str = student.get_name();
            break;
        }
    }

    std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
