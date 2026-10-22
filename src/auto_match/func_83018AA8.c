typedef struct NodeA {
    struct NodeA *next;
    int data;
} NodeA;

typedef struct NodeB {
    struct NodeB *next;
    int f4;
    int f8;
    void *fc;
    int f10;
    int f14;
    int data;
} NodeB;

typedef struct ListA {
    NodeA *head;
    int f4;
    int f8;
    int fc;
    unsigned int count;
    int pad[3];
} ListA;

typedef struct ListB {
    NodeB *head;
    int f4;
    int f8;
    int fc;
    unsigned int count;
    int pad[3];
} ListB;

typedef struct S {
    int f0;
    int f4;
    char pad8[0x310 - 8];
    int f310;
    char pad314[0x61c - 0x314];
    int f61c;
    char pad620[0x6a0 - 0x620];
    ListA la;
    ListA lc;
    ListB lb;
    ListA ld;
} S;

extern void fn_82FA5190(int a, void *p);
extern void fn_82FF38E8(int *p);
extern void fn_83016D40(int *p);
extern void fn_83019FD0(int *p);
extern void fn_8301A058(int *p);
extern void fn_8301A1D0(ListA *l);
extern void fn_8301A2A8(ListA *l);
extern void fn_8301A378(ListB *l);
extern int lbl_831BC768;

int fn_83018AA8(S *s)
{
    NodeA *a;
    NodeB *b;

    if (s->la.count > 0) {
        for (a = s->la.head; a != 0; a = a->next) {
            fn_83019FD0(&a->data);
        }
    }
    if (s->lb.count > 0) {
        for (b = s->lb.head; b != 0; b = b->next) {
            fn_8301A058(&b->data);
            if (b->fc != 0) {
                fn_82FA5190(lbl_831BC768, b->fc);
                b->fc = 0;
            }
            b->f10 = 0;
            b->f14 = 0;
        }
    }
    if (s->f310 != -1) {
        fn_83016D40(&s->f310);
        s->f310 = -1;
    }
    if (s->f4 != -1) {
        fn_83016D40(&s->f4);
        s->f4 = -1;
    }
    if (s->f61c != -1) {
        fn_82FF38E8(&s->f61c);
        s->f61c = -1;
    }
    fn_8301A2A8(&s->la);
    fn_8301A1D0(&s->lc);
    fn_8301A378(&s->lb);
    fn_8301A1D0(&s->ld);
    return 1;
}
