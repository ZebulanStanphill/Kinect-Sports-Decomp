#include "stdext/xmemory.h"

struct Node {
    Node *left;
    Node *parent;
    Node *right;
    int value[14];
    char color;
    char isnil;
};

struct Src {
    int pad0;
    int pad4;
    int a;
    int b;
};

struct Obj {
    void **vtbl;
    int sub04[7];
    int a;
    int b;
    int sub28[2];
    int f30;
    int f34;
    int f38;
    int pad3c;
    int pad40;
    Node *head;
    unsigned int size;
    int pad4c;
    int f50;
};

extern "C" {
extern void *lbl_821ACFB8[];
void fn_8223B688(int *);
void fn_824060E8(int *, Src *);
}

extern "C" Obj *fn_822C70F0(Obj *self, int unused, Src *src)
{
    self->vtbl = lbl_821ACFB8;
    fn_8223B688(self->sub04);
    self->a = src->a;
    self->b = src->b;
    fn_824060E8(self->sub28, src);
    self->f30 = 0;
    self->f34 = 0;
    self->f38 = 0;
    self->size = 0;
    self->head = std::_Allocate(1, (Node *)0);
    self->head->left = self->head;
    self->head->parent = self->head;
    self->head->right = self->head;
    self->head->color = 1;
    self->head->isnil = 1;
    self->f50 = 0;
    return self;
}
