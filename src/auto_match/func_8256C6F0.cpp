#include "stdext/xmemory.h"

extern "C" {
__declspec(selectany) extern const float lbl_821CA45C[2] = {1.0f, 1.0f};
void RtlInitializeCriticalSection(void *cs);
}

struct Comp {
    char c;
};

struct Node {
    Node *next;
    Node *prev;
    char value[0x38];
};

struct List {
    Node *head;
    unsigned int size;
    int al;
};

struct Vec {
    void *first;
    void *last;
    void *end;
    int al;
};

struct Hash {
    Comp comp;
    List list;
    Vec vec;
    unsigned int mask;
    unsigned int maxidx;
    float maxbucket;
};

struct CritSec {
    int v[7];
};

struct Obj {
    Hash hash;
    CritSec cs;
    Vec v1;
    Vec v2;
    int x68;
    Vec v3;
    Vec v4;
    Vec v5;
    Vec v6;
};

extern "C" void fn_82587028(Hash *self, unsigned int n);

extern "C" Obj *fn_8256C6F0(Obj *self)
{
    Comp comp;
    Hash *h = &self->hash;
    h->comp = comp;
    List *l = &h->list;
    l->size = 0;
    l->head = std::_Allocate(1, (Node *)0);
    l->head->next = l->head;
    l->head->prev = l->head;
    Vec *v = &h->vec;
    v->first = 0;
    v->last = 0;
    v->end = 0;
    h->maxbucket = lbl_821CA45C[1];
    fn_82587028(h, 8);
    self->v1.first = 0;
    self->v1.last = 0;
    self->v1.end = 0;
    self->v2.first = 0;
    self->v2.last = 0;
    self->v2.end = 0;
    self->v3.first = 0;
    self->v3.last = 0;
    self->v3.end = 0;
    self->v4.first = 0;
    self->v4.last = 0;
    self->v4.end = 0;
    self->v5.first = 0;
    self->v5.last = 0;
    self->v5.end = 0;
    self->v6.first = 0;
    self->v6.last = 0;
    self->v6.end = 0;
    RtlInitializeCriticalSection(&self->cs);
    self->x68 = 0;
    return self;
}
