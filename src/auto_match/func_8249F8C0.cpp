#include "stdext/xmemory.h"

extern "C" {
char lbl_821BF148[];
void fn_82266D28(void *list, int arg);
void XMemSet(void *dest, int value, unsigned int size);
int *fn_824A09E8(void *tree, const int *key);
}

struct Node_8249F8C0 {
    Node_8249F8C0 *left;   /* 0x00 */
    Node_8249F8C0 *parent; /* 0x04 */
    Node_8249F8C0 *right;  /* 0x08 */
    int key;               /* 0x0c */
    int value;             /* 0x10 */
    unsigned char color;   /* 0x14 */
    unsigned char isnil;   /* 0x15 */
    char pad16[2];
};

struct Tree_8249F8C0 {
    int proxy;           /* 0x00 */
    Node_8249F8C0 *head; /* 0x04 */
    unsigned int size;   /* 0x08 */
};

struct Row_8249F8C0 {
    int first;      /* 0x00 */
    int second;     /* 0x04 */
    int third;      /* 0x08 */
    char bytes[20]; /* 0x0c */
    float weight;   /* 0x20 */
};

struct Owner_8249F8C0 {
    void *vt;              /* 0x00 */
    Row_8249F8C0 rows[2];  /* 0x04 */
    unsigned int key;      /* 0x4c */
    unsigned int listHead; /* 0x50 */
    unsigned int listTail; /* 0x54 */
    unsigned int arg;      /* 0x58 */
    unsigned int enabled;  /* 0x5c */
    Tree_8249F8C0 table;   /* 0x60 */
    int pad6c;
    int count70;          /* 0x70 */
    int count74;          /* 0x74 */
    int count78;          /* 0x78 */
    float min;            /* 0x7c */
    float max;            /* 0x80 */
    float current;        /* 0x84 */
    Tree_8249F8C0 values; /* 0x88 */
};

static __forceinline void InitTree(Tree_8249F8C0 *tree)
{
    tree->size = 0;
    Node_8249F8C0 *head = std::_Allocate(1, (Node_8249F8C0 *)0);
    tree->head = head;
    head->left = head;
    tree->head->parent = tree->head;
    tree->head->right = tree->head;
    tree->head->color = 1;
    tree->head->isnil = 1;
}

extern "C" Owner_8249F8C0 *fn_8249F8C0(Owner_8249F8C0 *self, const unsigned int *key, unsigned int arg)
{
    self->vt = lbl_821BF148;
    self->key = *key;
    self->listHead = 0;
    self->listTail = 0;
    fn_82266D28(&self->listHead, 0);
    self->arg = arg;
    self->enabled = 1;
    InitTree(&self->table);
    self->min = 5.0f;
    self->max = 10.0f;
    self->count70 = 0;
    self->current = 0.0f;
    self->count74 = 0;
    self->count78 = 0;
    InitTree(&self->values);
    for (int i = 0; i < 2; i++) {
        self->rows[i].first = 0;
        self->rows[i].second = 0;
        self->rows[i].third = 0;
        XMemSet(self->rows[i].bytes, 0, sizeof(self->rows[i].bytes));
        self->rows[i].weight = 0.0f;
    }
    int id = 1;
    int *slot1 = fn_824A09E8(&self->values, &id);
    id = 2;
    *slot1 = 0;
    int *slot2 = fn_824A09E8(&self->values, &id);
    id = 3;
    *slot2 = 0;
    int *slot3 = fn_824A09E8(&self->values, &id);
    *slot3 = 0;
    return self;
}
