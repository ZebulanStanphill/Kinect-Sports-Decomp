// Calls virtual function 0x4 of the object at 0x8, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_82533D80(char *self)
{
    Obj *o = *(Obj **)(self + 0x8);

    o->vtbl[1](o);
}
