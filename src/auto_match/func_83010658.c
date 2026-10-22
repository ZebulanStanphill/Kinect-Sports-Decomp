typedef struct Node Node;
typedef struct NodeVtbl {
    void *f0;
    void *f4;
    void (*release)(Node *n);
} NodeVtbl;

struct Node {
    NodeVtbl *vtbl;
    int f4;
    int f8;
    unsigned int id;
    Node *next;
    Node *alt;
};

typedef struct Vec {
    unsigned int *begin;
    unsigned int *end;
} Vec;

typedef struct X {
    char pad[0x10];
    void *f10;
} X;

extern unsigned int lbl_832642E0;
extern Node *fn_82FAB9C0(unsigned int a, void *b);

int fn_83010658(int unused, X *x, Vec *v)
{
    unsigned char found;
    Node *alt;
    Node *head;
    Node *n;
    unsigned int *begin;
    unsigned int *end;
    unsigned int *p;

    if (v == 0) {
        return 0;
    }
    found = 0;
    alt = 0;
    if (x->f10 == 0) {
        return 0;
    }
    n = fn_82FAB9C0(lbl_832642E0 + 4, x->f10);
    head = n;
    if (n == 0) {
        return 0;
    }
    end = v->end;
    begin = v->begin;
    for (; n != 0; n = n->next) {
        for (p = begin; p != end; p++) {
            if (*p == n->id) {
                goto hit;
            }
        }
        if (!found && (alt = n->alt) != 0) {
            found = 1;
        }
    }
    for (; alt != 0; alt = alt->alt) {
        for (p = begin; p != end; p++) {
            if (*p == alt->id) {
                goto hit;
            }
        }
    }
    head->vtbl->release(head);
    return 0;
hit:
    head->vtbl->release(head);
    return 1;
}
