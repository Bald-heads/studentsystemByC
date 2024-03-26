//
// Created by 曾祥瑞 on 2024/3/25.
//

#ifndef STUDENTSYSTEM_STRUCT_VERIABLE_H
#define STUDENTSYSTEM_STRUCT_VERIABLE_H

#define DEFAULT_AGE 0
#define DEFAULT_ADDRESS NULL
#define DEFAULT_EMAIL NULL
#define DEFAULT_SPACE 100

typedef struct studentScore {
    float chinese;
    float math;
    float english;
    float sport;
} studentScore;

typedef struct Student {
    char *id;
    char *className;
    int age;
    char *uId;
    char *address;
    char *email;
    studentScore *score;
} Student;

#endif //STUDENTSYSTEM_STRUCT_VERIABLE_H
