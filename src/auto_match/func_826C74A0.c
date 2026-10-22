typedef struct Sub Sub;
typedef struct SubVtbl {
    void *f0;
    void *f4;
    int (*getState)(Sub *);
} SubVtbl;
struct Sub {
    SubVtbl *vtbl;
};
typedef struct Info {
    char pad[0x1cc];
    unsigned char bits;
} Info;
typedef struct B B;
typedef struct BVtbl {
    char pad[0x78];
    void (*f78)(B *);
} BVtbl;
struct B {
    BVtbl *vtbl;
    char pad04[0x10];
    int id;
    char pad18[0x50];
    Sub sub;
};
typedef struct C {
    char pad00[0x68];
    Sub sub;
} C;
typedef struct A A;
typedef struct AVtbl {
    char pad[0x40];
    void (*f40)(A *);
} AVtbl;
typedef struct Flags {
    char pad[0xb00];
    unsigned int flags;
} Flags;
struct A {
    AVtbl *vtbl;
    char pad04[0x9c];
    Flags *fl;
    char pad0a4[4];
    char list[4];
};
extern void fn_82698F98(void *list, int idx, C *c);
extern int fn_826994A8(void *list, int id);
extern void fn_8269D728(C *c, B *b);
extern void fn_826A17F0(C *c, B *b);
extern Info *fn_826BD928(Sub *s);
extern void fn_82703C40(void);

int fn_826C74A0(A *a, B *b, C *c)
{
    int idx;
    unsigned char flag;
    Info *info;

    if (fn_826994A8(a->list, b->id) == -1) {
        return 0;
    }
    fn_826A17F0(c, b);
    if (c->sub.vtbl->getState(&c->sub) == 2 && b->sub.vtbl->getState(&b->sub) == 2) {
        info = fn_826BD928(&b->sub);
        flag = (info->bits >> 5) & 1;
        info = fn_826BD928(&c->sub);
        info->bits = flag ? info->bits | 0x20 : info->bits & ~0x20;
    }
    b->vtbl->f78(b);
    a->vtbl->f40(a);
    fn_82703C40();
    fn_8269D728(c, b);
    idx = fn_826994A8(a->list, b->id);
    if (idx == -1) {
        return 0;
    }
    fn_82698F98(a->list, idx, c);
    a->fl->flags |= 0x400;
    return 1;
}
