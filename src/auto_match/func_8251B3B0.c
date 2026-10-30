typedef struct { unsigned first; unsigned second; } Pair_8251B3B0;
typedef struct { Pair_8251B3B0 a; Pair_8251B3B0 b; } Both_8251B3B0;
typedef struct { char *begin; char *end; } Vec_8251B3B0;
typedef struct Node_8251B3B0 Node_8251B3B0;
struct Node_8251B3B0 {
    Node_8251B3B0 *next;
    int pad4[2];
    char key[0x10];
    char pad1[0x28 - 0x1c];
    Pair_8251B3B0 val1;
    unsigned char flag1;
};
typedef struct Node2_8251B3B0 Node2_8251B3B0;
struct Node2_8251B3B0 {
    Node2_8251B3B0 *next;
    int pad4[2];
    char key[0x10];
    char pad1[0x28 - 0x1c];
    int val2[2];
    char pad2[0x44 - 0x30];
    unsigned char flag2;
};
typedef struct Ctx_8251B3B0 Ctx_8251B3B0;
typedef struct {
    void *s[3];
    void (*f0c)(Ctx_8251B3B0 *);
} VT_8251B3B0;
struct Ctx_8251B3B0 {
    VT_8251B3B0 *vt;
    int pad4[3];
    int f10;
    char pad14[0x68 - 0x14];
    Vec_8251B3B0 v68;
    char pad70[0x78 - 0x70];
    Vec_8251B3B0 v78;
};
typedef struct {
    int pad0;
    struct { int pad[2]; int f8; } *f4;
    char pad8[0x18 - 8];
    Node_8251B3B0 *list1;
    char pad1c[0x28 - 0x1c];
    Node2_8251B3B0 *list2;
} Owner_8251B3B0;

extern void fn_822315A0(unsigned);
extern void fn_82250928(void *it);
extern void fn_822509A0(void *it);
extern void fn_825166A0(Ctx_8251B3B0 *);
extern void fn_82516FD8(Vec_8251B3B0 *, Both_8251B3B0 *);
extern Both_8251B3B0 *fn_825174B8(Both_8251B3B0 *, Pair_8251B3B0 *, Pair_8251B3B0 *);
extern void fn_82517978(Pair_8251B3B0 *, int, int, int);
extern unsigned char fn_8288B760(Ctx_8251B3B0 *);
extern Ctx_8251B3B0 *fn_828A8BA0(int);
extern void fn_828BB690(Pair_8251B3B0 *, int, void *);
extern void fn_828C24F0(Pair_8251B3B0 *, int, void *);
extern void fn_828C2670(Pair_8251B3B0 *, int, void *);

void fn_8251B3B0(Owner_8251B3B0 *o)
{
    Ctx_8251B3B0 *c;
    Node_8251B3B0 *it;
    Node_8251B3B0 *n;
    Node2_8251B3B0 *n2;
    Node2_8251B3B0 *head2;
    Pair_8251B3B0 pa, pb, pc, pd;
    Both_8251B3B0 tmp1, tmp2;
    Vec_8251B3B0 *v;

    c = fn_828A8BA0(o->f4->f8);
    n = *(Node_8251B3B0 **)o->list1;
    it = n;
    if (n != o->list1) {
        do {
            if (n->flag1 == 1) {
                pa.first = 0;
                pa.second = 0;
                fn_82517978(&pa, n->val1.first, n->val1.second, 0);
                if (fn_8288B760(c) != 0) {
                    fn_828BB690(&pb, c->f10, n->key);
                    if (pb.first != 0) {
                        v = &c->v78;
                        if ((unsigned)((v->end - v->begin) >> 4) < 7) {
                            fn_82516FD8(v, fn_825174B8(&tmp1, &pb, &pa));
                            if (tmp1.b.second != 0)
                                fn_822315A0(tmp1.b.second);
                            if (tmp1.a.second != 0)
                                fn_822315A0(tmp1.a.second);
                            fn_825166A0(c);
                        }
                    }
                    if (pb.second != 0)
                        fn_822315A0(pb.second);
                }
                if (pa.second != 0)
                    fn_822315A0(pa.second);
            }
            fn_82250928(&it);
            n = it;
        } while (n != o->list1);
    }
    head2 = o->list2;
    n2 = *(Node2_8251B3B0 **)head2;
    it = (Node_8251B3B0 *)n2;
    while (n2 != head2) {
        if (n2->flag2 == 1 && fn_8288B760(c) != 0) {
            fn_828C24F0(&pd, c->f10, n2->key);
            if (pd.first != 0) {
                fn_828C2670(&pc, pd.first, &n2->val2);
                if (pc.first != 0) {
                    v = &c->v68;
                    if ((unsigned)((v->end - v->begin) >> 4) < 7) {
                        fn_82516FD8(v, fn_825174B8(&tmp2, &pd, &pc));
                        if (tmp2.b.second != 0)
                            fn_822315A0(tmp2.b.second);
                        if (tmp2.a.second != 0)
                            fn_822315A0(tmp2.a.second);
                        fn_825166A0(c);
                    }
                }
                if (pc.second != 0)
                    fn_822315A0(pc.second);
            }
            if (pd.second != 0)
                fn_822315A0(pd.second);
        }
        fn_822509A0(&it);
        n2 = (Node2_8251B3B0 *)it;
        head2 = o->list2;
    }
    c->vt->f0c(c);
}
