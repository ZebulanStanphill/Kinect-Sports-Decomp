#include "stdext/xmemory.h"

struct Node {
    Node *next;
    Node *prev;
    char value[0x38];
};

struct Vec {
    void *first;
    void *last;
    void *end;
    int al;
};

struct Compare {
    unsigned char c;
};

struct List {
    Node *head;
    unsigned int size;
    int al;
};

struct Hash {
    Compare comp;
    List list;
    Vec vec;
    unsigned int mask;
    unsigned int maxidx;
    float maxload;
};

struct Obj {
    Vec a;
    Vec b;
    Hash hash;
    int x;
};

extern "C" {
__declspec(selectany) extern const float lbl_821CA45C[2] = {1.0f, 1.0f};
void fn_82587028(Hash *self, unsigned int buckets);
}

static void vec_init(Vec *v)
{
    v->first = 0;
    v->last = 0;
    v->end = 0;
}
extern "C" Obj *fn_82579B78(Obj *self)
{
    Compare c;
    vec_init(&self->a);
    vec_init(&self->b);
    Hash *h = &self->hash;
    h->comp = c;
    List *l = &h->list;
    l->size = 0;
    l->head = std::_Allocate(1, (Node *)0);
    l->head->next = l->head;
    l->head->prev = l->head;
    vec_init(&h->vec);
    h->maxload = lbl_821CA45C[1];
    fn_82587028(h, 8);
    self->x = 0;
    return self;
}
