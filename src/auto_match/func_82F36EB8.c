// Calls virtual function 0x4 of the object at 0x4, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_82F36EB8(char *self)
{
    Obj *o = *(Obj **)(self + 0x4);

    o->vtbl[1](o);
}
