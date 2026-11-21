extern void fn_8265CA20(void *p);
extern void fn_828B55B0(void *p);
extern void fn_828BDE70(void *p);
extern __declspec(noreturn) void fn_82F622E0(const char *message);
extern unsigned int lbl_82026234;
extern unsigned int lbl_82026238;

typedef struct VObj_828C7850 {
    void (**vt)(struct VObj_828C7850 *, int);
} VObj_828C7850;

typedef struct Vector_828C7850 {
    VObj_828C7850 **first; /* 0x00 */
    VObj_828C7850 **last;  /* 0x04 */
    VObj_828C7850 **end;   /* 0x08 */
} Vector_828C7850;

typedef struct Mgr_828C7850 {
    unsigned int *vt; /* 0x00 */
    char pad04[0x4c];
    unsigned int *vt50; /* 0x50 */
    char pad54[0x2c];
    char sub80[0x10];      /* 0x80 */
    Vector_828C7850 items; /* 0x90 */
} Mgr_828C7850;

static __forceinline VObj_828C7850 **At(Vector_828C7850 *v, unsigned int index)
{
    if ((unsigned int)(v->last - v->first) <= index) {
        fn_82F622E0("invalid vector<T> subscript");
    }
    return &v->first[index];
}

void fn_828C7850(Mgr_828C7850 *m)
{
    Vector_828C7850 *items;
    unsigned int count;
    unsigned int i;

    m->vt = &lbl_82026238;
    m->vt50 = &lbl_82026234;
    items = &m->items;
    count = items->last - items->first;
    for (i = 0; i < count; i++) {
        VObj_828C7850 **slot = At(items, i);
        VObj_828C7850 *o = *slot;

        *slot = 0;
        if (o != 0) {
            (*(void (*)(VObj_828C7850 *, int)) * (unsigned int *)o->vt)(o, 1);
        }
    }
    if (items->first != 0) {
        fn_8265CA20(items->first);
    }
    items->first = 0;
    items->last = 0;
    items->end = 0;
    fn_828B55B0(m->sub80);
    fn_828BDE70(m);
}
