// Calls virtual function 0x8 of the object at 0x24, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_82799B18(char *self)
{
    Obj *o = *(Obj **)(self + 0x24);

    o->vtbl[2](o);
}
