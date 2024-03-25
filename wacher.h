//
// Created by 曾祥瑞 on 2024/3/25.
//

#ifndef STUDENTSYSTEM_WACHER_H
#define STUDENTSYSTEM_WACHER_H

bool watcher(int arraySize, int elementSize, char action) {
    switch (action) {
        case ACTION_INCREMENT: {
            if (arraySize >= elementSize + 1) {
                return false;
            } else {
                return true;
            }
        }
    }
}

#endif //STUDENTSYSTEM_WACHER_H
