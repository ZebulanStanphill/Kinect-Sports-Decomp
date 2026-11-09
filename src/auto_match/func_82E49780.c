/* Release(): decrement the reference count; at zero, destroy the object
   through the virtual deleting destructor of its base at +0x8. */
extern long _InterlockedDecrement(long *);

typedef struct Base_82E49780 Base_82E49780;
struct Base_82E49780 {
    void **vt;
};

typedef struct Obj_82E49780 {
    char pad0[0x8];
    Base_82E49780 base;
    char pad1[0x54 - 0x8 - 4];
    long refs;
} Obj_82E49780;

unsigned fn_82E49780(Obj_82E49780 *o)
{
    unsigned long n = _InterlockedDecrement(&o->refs);
    if (n == 0 && o != 0) {
        ((void (*)(Base_82E49780 *, int))o->base.vt[0x84 / 4])(&o->base, 1);
    }
    return n;
}
