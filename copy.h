//
// Created by 曾祥瑞 on 2024/3/25.
//

#ifndef STUDENTSYSTEM_COPY_H
#define STUDENTSYSTEM_COPY_H

void copy(Student *oldArray, int size, Student *targetArray) {
    for (int index = 0; index < size; index++) {
        targetArray[index] = oldArray[index];
    }
}

#endif //STUDENTSYSTEM_COPY_H
