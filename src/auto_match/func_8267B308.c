// Calls virtual function 0x24 of the object at 0xc, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_8267B308(char *self)
{
    Obj *o = *(Obj **)(self + 0xc);

    o->vtbl[9](o);
}
