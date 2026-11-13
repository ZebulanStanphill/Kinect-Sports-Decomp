typedef struct Pair_826ADCE8 {
    void *a;
    void *b;
    unsigned char flags;
} Pair_826ADCE8;

typedef struct Obj_826828D8 {
    void *vt;
    int pad4[2];
    Pair_826ADCE8 pair;
} Obj_826828D8;

extern void fn_826824B0(void *p);
extern char lbl_82005700[];
extern char lbl_8200579C[];

static __forceinline void Pair_826ADCE8_Destroy(Pair_826ADCE8 *p)
{
    if ((p->flags & 2) == 0 && p->a != 0) {
        fn_826824B0(p->a);
    }
    p->a = 0;
    if ((p->flags & 1) == 0 && p->b != 0) {
        fn_826824B0(p->b);
    }
    p->b = 0;
}

void fn_826828D8(Obj_826828D8 *o)
{
    o->vt = lbl_8200579C;
    Pair_826ADCE8_Destroy(&o->pair);
    o->vt = lbl_82005700;
}
