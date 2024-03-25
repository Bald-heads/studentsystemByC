#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "static_veriable.h"
#include "struct_veriable.h"
#include "util_functions.h"
#include "operation_data.h"
#include "copy.h"
#include "wacher.h"

Student *initState();

int arraySize = INCREMENT_ARRAY_SIZE_COEFFICIENT;
int elementSize = 0;

int main() {
    Student *studentList = initState();
}

Student *initState() {
    Student *studentList = (Student *) malloc(sizeof(Student) * INCREMENT_ARRAY_SIZE_COEFFICIENT);
    return studentList;
}

void appaned(Student *studentList, Student payload) {
    if (watcher(arraySize, elementSize, ACTION_INCREMENT)) {
        Student *newStudentList = reverseIncrementArraySize(studentList, arraySize);
        copy(studentList, elementSize, newStudentList);
        appendData(newStudentList, elementSize, payload);
        studentList = newStudentList;
        arraySize += INCREMENT_ARRAY_SIZE_COEFFICIENT;
    } else {
        appendData(studentList, elementSize, payload);
    }
    elementSize++;
}
