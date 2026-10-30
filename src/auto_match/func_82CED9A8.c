typedef void (*Fn)(void *ret, void *self);

typedef struct Obj {
    Fn *vt;
} Obj;

void *fn_82CED9A8(void *ret, char *p)
{
    Obj *o = *(Obj **)(p + 0x8);
    o->vt[0xc / 4](ret, o);
    return ret;
}
