typedef unsigned __int64 U64;
extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);
extern void fn_830514A8(void *p);
extern void fn_83051D60(void *p);

typedef struct Node {
    U64 val;
    char pad[8];
    struct Node *next;
} Node;

typedef struct Obj Obj;
typedef struct VT {
    char pad[0x30];
    void (*f30)(Obj *o, int n);
} VT;

struct Obj {
    VT *vt;
    char pad0[0x38 - 4];
    char cs[0x80 - 0x38];
    U64 time;
    char pad1[0x9c - 0x88];
    Node *head;
    char pad2[0xa4 - 0xa0];
    unsigned int count;
    unsigned char idx;
};

static Node *nth(Obj *o, unsigned char n)
{
    Node *p = o->head;
    unsigned int i;
    for (i = 0; i < n; i++)
        p = p->next;
    return p;
}

void fn_83052500(Obj *o, U64 t)
{
    RtlEnterCriticalSection(o->cs);
    o->time = t;
    if (o->idx < o->count) {
        if (nth(o, o->idx)->val == t)
            fn_830514A8(o);
        else
            fn_83051D60(o);
    } else {
        o->vt->f30(o, 0);
        fn_830514A8(o);
    }
    RtlLeaveCriticalSection(o->cs);
}
