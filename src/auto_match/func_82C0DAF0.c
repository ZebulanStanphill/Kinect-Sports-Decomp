extern long _InterlockedDecrement(long *);

typedef struct Inner_82C0DAF0 { void **vt; } Inner_82C0DAF0;
typedef struct Obj_82C0DAF0 {
    void **vt;
    char pad4[0x28];
    Inner_82C0DAF0 *inner;
    char pad30[0xc8];
    long count;
} Obj_82C0DAF0;

void fn_82C0DAF0(Obj_82C0DAF0 *o)
{
    _InterlockedDecrement(&o->count);
    ((void (*)(Inner_82C0DAF0 *))o->inner->vt[0x60 / 4])(o->inner);
    ((void (*)(Obj_82C0DAF0 *))o->vt[0xc8 / 4])(o);
    ((void (*)(Obj_82C0DAF0 *))o->vt[0xd0 / 4])(o);
}
