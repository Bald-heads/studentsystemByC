//
// Created by 曾祥瑞 on 2024/3/25.
//

#ifndef STUDENTSYSTEM_UTIL_FUNCTIONS_H
#define STUDENTSYSTEM_UTIL_FUNCTIONS_H

Student *reverseIncrementArraySize(Student *dirtArray, int size) {
    return (Student *) malloc(sizeof(Student) * (size + INCREMENT_ARRAY_SIZE_COEFFICIENT));
}



#endif //STUDENTSYSTEM_UTIL_FUNCTIONS_H
