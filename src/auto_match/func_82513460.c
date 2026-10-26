// Calls virtual function 0x10 of the object at 0x18, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_82513460(char *self)
{
    Obj *o = *(Obj **)(self + 0x18);

    o->vtbl[4](o);
}
