// Calls virtual function 0x34 of the object at 0x9c, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_826D4508(char *self)
{
    Obj *o = *(Obj **)(self + 0x9c);

    o->vtbl[13](o);
}
