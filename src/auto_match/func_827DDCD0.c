// Calls virtual function 0x8 of the object at 0xc, passing the other arguments through.

typedef void (*VFn)(void *);

typedef struct Obj {
    VFn *vtbl;
} Obj;

void fn_827DDCD0(char *self)
{
    Obj *o = *(Obj **)(self + 0xc);

    o->vtbl[2](o);
}
