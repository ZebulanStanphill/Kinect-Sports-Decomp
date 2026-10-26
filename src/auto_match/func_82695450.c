// Calls virtual function 0x4 of the object at 0x18, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_82695450(char *self)
{
    Obj *o = *(Obj **)(self + 0x18);

    o->vtbl[1](o);
}
