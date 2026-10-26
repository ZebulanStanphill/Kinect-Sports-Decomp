// Calls virtual function 0x18 of the object at 0x64, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_8232C738(char *self)
{
    Obj *o = *(Obj **)(self + 0x64);

    o->vtbl[6](o);
}
