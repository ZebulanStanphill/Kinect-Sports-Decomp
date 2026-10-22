extern void fn_82437DA8(void *p);
extern void fn_8243E0D8(void *p);
extern void fn_8265CA20(void *p);
extern char lbl_821B932C[];

typedef struct Elem {
    char data[0x18];
} Elem;

typedef struct VObj {
    void (**vt)(struct VObj *, int);
} VObj;

typedef struct Impl {
    char pad0[0x120];
    char m120[0x18];
    Elem *first;
    Elem *last;
    Elem *end;
    char pad1[0x200 - 0x144];
    VObj *obj;
} Impl;

typedef struct Obj {
    void *vt;
    char pad0[0x40 - 4];
    Impl *impl;
} Obj;

void fn_82433418(Obj *o)
{
    Impl *p = o->impl;
    Elem *it;

    o->vt = lbl_821B932C;
    if (p != 0) {
        if (p->obj != 0) {
            p->obj->vt[0](p->obj, 1);
        }
        if (p->first != 0) {
            Elem *last = p->last;
            for (it = p->first; it != last; it++) {
                fn_8243E0D8(it);
            }
            fn_8265CA20(p->first);
        }
        p->first = 0;
        p->last = 0;
        p->end = 0;
        fn_8243E0D8(p->m120);
        fn_8265CA20(p);
    }
    fn_82437DA8(o);
}
