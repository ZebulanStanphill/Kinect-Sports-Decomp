// Calls virtual function 0x0 of the object at 0x4, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_82F36EA0(char *self)
{
    Obj *o = *(Obj **)(self + 0x4);

    o->vtbl[0](o);
}
