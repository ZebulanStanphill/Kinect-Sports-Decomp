typedef void (*Fn)(void *ret, void *self);

typedef struct Obj {
    Fn *vt;
} Obj;

void *fn_82CFB900(void *ret, char *p)
{
    Obj *o = *(Obj **)(p + 0x8);
    o->vt[0xc / 4](ret, o);
    return ret;
}
