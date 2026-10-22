typedef struct Hdr {
    unsigned int flags;
    int f4;
    int *idx;
} Hdr;

typedef struct Info {
    int f0;
    unsigned int flags;
} Info;

typedef struct Node {
    int f0;
    int info;
    int f8;
    char padc[0x14];
    double value;
    char pad28[0x10];
    int f38;
    unsigned int f3c;
} Node;

typedef struct Obj {
    char pad0[0x10];
    Info **infos;
    Node **nodes;
    char pad18[0xec];
    Hdr *hdr;
} Obj;

extern int fn_82963FA8(Node *a, Node *b);
extern int fn_829640A0(Node *a, Node *b);
extern int fn_82964628(Obj *o, int a, int b, int c, double d);
extern double lbl_82005710;

int fn_8294DE58(Obj *o)
{
    Node *n;
    Node *a;
    Node *b;
    int i;
    int hr;

    if ((o->hdr->flags & 0xfffff) != 1 ||
        (n = o->nodes[o->hdr->idx[1]], (o->infos[n->info]->flags & 0x100) == 0) ||
        n->f8 != -1 || n->value != lbl_82005710)
        return 1;
    i = fn_82964628(o, 0, 0, 0, lbl_82005710);
    if (i == -1)
        return 0x8007000e;
    a = o->nodes[i];
    b = o->nodes[o->hdr->idx[0]];
    hr = fn_82963FA8(a, b);
    if (hr < 0)
        return hr;
    hr = fn_829640A0(a, b);
    if (hr < 0)
        return hr;
    a->f3c ^= 0x80000;
    if (a->f38 == -1)
        a->f38 = o->hdr->idx[0];
    o->hdr->idx[1] = i;
    return 0;
}
