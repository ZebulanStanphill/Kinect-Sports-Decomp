// Calls virtual function 0xc of the object at 0x0, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_827D5650(char *self)
{
    Obj *o = *(Obj **)(self + 0x0);

    o->vtbl[3](o);
}
