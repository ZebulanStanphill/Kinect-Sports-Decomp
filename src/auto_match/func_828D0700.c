typedef struct Elem_828D0700 Elem_828D0700;

typedef struct VecObj_828D0700 {
    Elem_828D0700 *first;
    Elem_828D0700 *last;
    Elem_828D0700 *end;
    char alloc[4];
} VecObj_828D0700;

typedef struct VecPod_828D0700 {
    void *first;
    void *last;
    void *end;
} VecPod_828D0700;

typedef struct Obj_828D0700 {
    void *vt;
    VecPod_828D0700 base;
    int pad10;
    VecObj_828D0700 items;
} Obj_828D0700;

extern void fn_82231540(Elem_828D0700 *first, Elem_828D0700 *last, void *al, char tag);
extern void fn_8265CA20(void *p);
extern char lbl_8202679C[];
extern char lbl_82026780[];
static __forceinline void VecObj_Tidy(VecObj_828D0700 *v)
{
    char tag;
    if (v->first != 0) {
        fn_82231540(v->first, v->last, v->alloc, tag);
        fn_8265CA20(v->first);
    }
    v->end = 0;
    v->last = 0;
    v->first = 0;
}

static __forceinline void VecPod_Tidy(VecPod_828D0700 *v)
{
    if (v->first != 0) {
        fn_8265CA20(v->first);
    }
    v->first = 0;
    v->last = 0;
    v->end = 0;
}

void fn_828D0700(Obj_828D0700 *o)
{
    o->vt = lbl_8202679C;
    VecObj_Tidy(&o->items);
    VecPod_Tidy(&o->base);
    o->vt = lbl_82026780;
}
