#include "stdext/xmemory.h"

extern "C" {
__declspec(selectany) extern const float lbl_821CA45C[2] = {1.0f, 1.0f};
}

struct Comp {
    char c;
};

struct Node {
    Node *next;
    Node *prev;
    unsigned int value[2];
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

extern "C" {
extern Hash *lbl_83281128;
extern unsigned int lbl_831C0C10[];
void fn_82587028(Hash *self, unsigned int n);
void fn_82586D90(Hash *, unsigned int, unsigned int);
void *fn_8265C9E0(unsigned int);
}

extern "C" Hash *fn_82586BD0()
{
    if (lbl_83281128 == 0) {
        Hash *o;
        Hash *h = (Hash *)fn_8265C9E0(sizeof(Hash));
        if (h != 0) {
            Comp comp;
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
            o = h;
        } else {
            o = 0;
        }
        lbl_83281128 = o;
        unsigned int *p = lbl_831C0C10;
        unsigned int i = 0;
        do {
            fn_82586D90(o, i, *p++);
            ++i;
            o = lbl_83281128;
        } while (i < 42);
    }
    return lbl_83281128;
}
