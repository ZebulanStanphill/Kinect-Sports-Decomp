/* Release(): decrement the reference count; at zero, destroy the object
   through the virtual deleting destructor of its base at +0x10. */
extern long _InterlockedDecrement(long *);

typedef struct Base_82E435E0 Base_82E435E0;
struct Base_82E435E0 {
    void **vt;
};

typedef struct Obj_82E435E0 {
    char pad0[0x10];
    Base_82E435E0 base;
    char pad1[0x38 - 0x10 - 4];
    long refs;
} Obj_82E435E0;

unsigned fn_82E435E0(Obj_82E435E0 *o)
{
    unsigned long n = _InterlockedDecrement(&o->refs);
    if (n == 0 && o != 0) {
        ((void (*)(Base_82E435E0 *, int))o->base.vt[0 / 4])(&o->base, 1);
    }
    return n;
}
