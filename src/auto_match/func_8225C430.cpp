#include "stdext/xmemory.h"

struct Node1C {
    Node1C *left;
    Node1C *parent;
    Node1C *right;
    int value[3];
    char color;
    char isnil;
};

struct Node50 {
    Node50 *left;
    Node50 *parent;
    Node50 *right;
    __int64 value[7];
    char color;
    char isnil;
};

struct Node18 {
    Node18 *left;
    Node18 *parent;
    Node18 *right;
    int value[2];
    char color;
    char isnil;
};

struct Obj {
    int pad0;
    Node1C *head1;
    unsigned int size1;
    int pad0c;
    int *v1first;
    int *v1last;
    int *v1end;
    int pad1c;
    int *v2first;
    int *v2last;
    int *v2end;
    int pad2c;
    int f30;
    int pad34;
    Node50 *head2;
    unsigned int size2;
    int pad40;
    int f44;
    int pad48;
    Node18 *head3;
    unsigned int size3;
    int pad54;
    int f58;
    int f5c;
    int f60;
    int f64;
    int f68;
    int f6c;
    int f70;
};

extern "C" Obj *fn_8225C430(Obj *self)
{
    self->size1 = 0;
    self->head1 = std::_Allocate(1, (Node1C *)0);
    self->head1->left = self->head1;
    self->head1->parent = self->head1;
    self->head1->right = self->head1;
    self->head1->color = 1;
    self->head1->isnil = 1;
    self->v1first = 0;
    self->v1last = 0;
    self->v1end = 0;
    self->v2first = 0;
    self->v2last = 0;
    self->v2end = 0;
    self->f30 = 0;
    self->size2 = 0;
    self->head2 = std::_Allocate(1, (Node50 *)0);
    self->head2->left = self->head2;
    self->head2->parent = self->head2;
    self->head2->right = self->head2;
    self->head2->color = 1;
    self->head2->isnil = 1;
    self->f44 = 0;
    self->size3 = 0;
    self->head3 = std::_Allocate(1, (Node18 *)0);
    self->head3->left = self->head3;
    self->head3->parent = self->head3;
    self->head3->right = self->head3;
    self->head3->color = 1;
    self->head3->isnil = 1;
    self->f58 = 0xfe;
    self->f5c = 0;
    self->f60 = 0;
    self->f64 = 0;
    self->f68 = 0;
    self->f6c = 0;
    self->f70 = 0;
    return self;
}
