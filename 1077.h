#ifndef 1077_H
#define 1077_H

struct Pokemon {
    char Name[100];
    int Lv;
    int Hp;
};

void InputData(struct Pokemon *);
void ShowInfo(struct Pokemon);

#endif