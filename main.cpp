#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "static_veriable.h"
#include "struct_veriable.h"
#include "util_functions.h"
#include "operation_data.h"
#include "static_user_action.h"
#include "copy.h"
#include "wacher.h"

Student *initState();

void appaned(Student payload);

void showAllStudents();

int arraySize = INCREMENT_ARRAY_SIZE_COEFFICIENT;
int elementSize = 0;
Student *studentList = NULL;

void watchEffect() {
    int userAction = -1;
    printf("****欢迎使用学生管理系统****");
    printf("\n");
    while (true) {
        printf("****请输入您的操作****\n");
        printf("输入1新增学生信息\t输入0表示退出程序\t输入2查看所有学生信息: ");
        scanf("%d", &userAction);
        if (userAction == 0) {
            return;
        }
        switch (userAction) {
            case ALLOW_CREATE_STUDENT: {
                char *userId = nullptr, *className = nullptr, *uid = nullptr, *address = nullptr, *email = nullptr;
                userId = (char *) malloc(sizeof(char) * DEFAULT_SPACE);
                className = (char *) malloc(sizeof(char) * DEFAULT_SPACE);
                uid = (char *) malloc(sizeof(char) * DEFAULT_SPACE);
                address = (char *) malloc(sizeof(char) * DEFAULT_SPACE);
                email = (char *) malloc(sizeof(char) * DEFAULT_SPACE);
                int age, userChoice;
                printf("请输入学生的学号: ");
                scanf("%s", userId);
                printf("请输入学生的班级: ");
                scanf("%s", className);
                printf("请输入学生的身份证号: ");
                scanf("%s", uid);
                printf("请问您需要输入学生的全部信息吗？1表示需要，0表示不需要: ");
                scanf("%d", &userChoice);
                if (userChoice) {
                    printf("请输入学生的地址: ");
                    scanf("%s", address);
                    printf("请输入学生的邮箱: ");
                    scanf("%s", email);
                    printf("请输入学生的年龄: ");
                    scanf("%d", &age);
                }
                Student *student = (Student *) malloc(sizeof(Student));
                student->id = userId;
                student->className = className;
                student->uId = uid;
                student->address = (address ? address : DEFAULT_ADDRESS);
                student->age = (age ? age : DEFAULT_AGE);
                student->email = (email ? email : DEFAULT_EMAIL);
                student->score = NULL;
                appaned(*student);
                break;
            }
            case ALLOW_SHOW_ALL_STUDENTS: {
                showAllStudents();
                break;
            }
        }
    }
}

int main() {
    studentList = initState();
    watchEffect();
    return 0;
}

Student *initState() {
    return (Student *) malloc(sizeof(Student) * INCREMENT_ARRAY_SIZE_COEFFICIENT);
}

void appaned(Student payload) {
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

void showAllStudents() {
    printf("学号\t班级\t身份证号\t地址\t邮箱\t年龄\t语文\t数学\t英语\t体育\n");
    printf("%d", elementSize);
    for (int i = 0; i < elementSize; ++i) {
        Student student = studentList[i];
        if (student.score == NULL) {
            printf("%s\t%s\t%s\t%s\t%s\t%d\t0\t0\t0\t0\n", student.id, student.className, student.uId,
                   (student.address ? student.address : "null"),
                   (student.email ? student.email : "null"),
                   student.age);
            continue;
        }
        printf("%s\t%s\t%s\t%s\t%s\t%d\t%.2f\t%.2f\t%.2f\t%.2f\n", student.id, student.className, student.uId,
               (student.address ? student.address : "null"),
               (student.email ? student.email : "null"), student.age, student.score->chinese, student.score->math,
               student.score->english,
               student.score->sport);
    }
}
