#ifndef LIST_H_
#define LISH_H_
#include <stdbool.h>

struct Grade 
{
    unsigned int C_lang;
    unsigned int Math;
    unsigned int Eng;
    unsigned int Total;
    float Ave;
};

typedef struct Student
{
    char StuID[10];
    char Name[15];
    struct Grade grade;
    int Rating;
} Item;

typedef struct node
{
    struct node * pre;
    Item item;
    struct node * next;
} Node;

typedef Node * List;

void InitializeList(List *plist);
bool ListIsEmpty(const List *plist);
bool ListIsFull(const List *plist);
unsigned int ListItemCount(const List *plist);
bool ListAddItem(Item item, List *plist);
void ListTraverse(const List *plist, void (*pfun)(Item item), bool order);
void EmptyTheList(List *plist);

bool ListDeleteItem(const Item *pi, List *plist);
*Node ListSeekItem(const Item *pi, const List *plist);
bool ListInsertItem(Node *pnode, Item item, List *plist);
bool ListSort(List *plist, bool (*pfun)(Item a, Item b));
#endif