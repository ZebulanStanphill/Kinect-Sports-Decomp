typedef struct VObj VObj;
typedef struct VObjVtbl {
    void (*destroy)(VObj *o, int flags);
    void *f4;
    void (*shutdown)(VObj *o);
    char pad[0x54 - 0xc];
    void (*release)(VObj *o, void *p);
} VObjVtbl;

struct VObj {
    VObjVtbl *vtbl;
};

typedef struct Obj {
    char pad[0x94];
    VObj *dev;
    char pad98[0xc0 - 0x98];
    void *res;
    VObj *helper;
} Obj;

extern void fn_822709D0(VObj *o);
extern void fn_8265CA20(Obj *o);

/* The original is C++ with virtual calls; the same body compiled as C++
   matches without __restrict. In C, without it the compiler moves the load
   of o->dev above the store to o->helper. */
Obj *fn_8246B5D8(Obj *__restrict o)
{
    fn_822709D0(o->dev);
    o->dev->vtbl->release(o->dev, o->res);
    o->res = 0;
    if (o->helper != 0) {
        o->helper->vtbl->destroy(o->helper, 1);
    }
    o->helper = 0;
    o->dev->vtbl->shutdown(o->dev);
    if (o->dev != 0) {
        o->dev->vtbl->destroy(o->dev, 1);
    }
    o->dev = 0;
    fn_8265CA20(o);
    return o;
}
