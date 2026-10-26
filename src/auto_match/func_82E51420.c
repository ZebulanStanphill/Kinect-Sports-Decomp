// Calls virtual function 0xc of the object at 0x8, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_82E51420(char *self)
{
    Obj *o = *(Obj **)(self + 0x8);

    o->vtbl[3](o);
}
