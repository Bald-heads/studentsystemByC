//
// Created by 曾祥瑞 on 2024/3/25.
//

#ifndef STUDENTSYSTEM_OPERATION_DATA_H
#define STUDENTSYSTEM_OPERATION_DATA_H

void appendData(Student *array, int size, Student payload) {
    array[++size] = payload;
}

#endif //STUDENTSYSTEM_OPERATION_DATA_H
