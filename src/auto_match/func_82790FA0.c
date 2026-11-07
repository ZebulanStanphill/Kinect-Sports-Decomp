typedef struct Obj_82790FA0 {
    int unk0;
    int refcount;
} Obj_82790FA0;

typedef struct Ref_82790FA0 {
    Obj_82790FA0 *ptr;
} Ref_82790FA0;

typedef struct Owner_82790FA0 {
    char pad0[0xc];
    Ref_82790FA0 ref;
    char pad10[0x14];
    unsigned short count;
} Owner_82790FA0;

typedef struct Temp_82790FA0 {
    void *vtbl;
    int data[5];
} Temp_82790FA0;

extern void fn_8267C488(Temp_82790FA0 *t);
extern void fn_8267C498(Obj_82790FA0 *o);
extern void fn_8278B290(Temp_82790FA0 *t);
extern void *fn_8278C528(Temp_82790FA0 *t, Obj_82790FA0 *o);
extern Obj_82790FA0 *fn_8278E8D0(int a, void *b);
extern char lbl_82010C6C[];

static __forceinline void Ref_Assign_82790FA0(Ref_82790FA0 *ref, Obj_82790FA0 *r)
{
    if (r != 0) {
        r->refcount++;
    }
    if (ref->ptr != 0) {
        fn_8267C498(ref->ptr);
    }
    ref->ptr = r;
}

void fn_82790FA0(Owner_82790FA0 *p, int a, void *b)
{
    Obj_82790FA0 *r;
    Temp_82790FA0 tmp;

    if ((int)p->ref.ptr != 0) {
        r = fn_8278E8D0(a, fn_8278C528(&tmp, p->ref.ptr));
        tmp.vtbl = lbl_82010C6C;
        fn_8278B290(&tmp);
        fn_8267C488(&tmp);
    } else {
        r = fn_8278E8D0(a, b);
    }
    Ref_Assign_82790FA0(&p->ref, r);
    p->count++;
    if (r != 0) {
        fn_8267C498(r);
    }
}
