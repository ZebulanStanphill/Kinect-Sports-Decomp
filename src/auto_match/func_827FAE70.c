// Calls virtual function 0xc of the object at 0x4, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_827FAE70(char *self)
{
    Obj *o = *(Obj **)(self + 0x4);

    o->vtbl[3](o);
}
