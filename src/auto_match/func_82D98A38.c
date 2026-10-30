typedef void (*Fn)(void *ret, void *self);

typedef struct Obj {
    Fn *vt;
} Obj;

void *fn_82D98A38(void *ret, char *p)
{
    Obj *o = *(Obj **)(p + 0xc);
    o->vt[0x1c / 4](ret, o);
    return ret;
}
