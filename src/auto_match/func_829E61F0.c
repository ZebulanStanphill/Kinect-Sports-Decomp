// Calls virtual function 0x8 of the object at 0x0, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_829E61F0(char *self)
{
    Obj *o = *(Obj **)(self + 0x0);

    o->vtbl[2](o);
}
