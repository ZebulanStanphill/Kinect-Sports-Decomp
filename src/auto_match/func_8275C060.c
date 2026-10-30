typedef struct Obj {
    int x0;
    void *owner;
    unsigned char *link;
} Obj;

extern void *fn_8275BB38(void *p);
extern int fn_826C53B0(void *p);
extern void fn_8269A1F0(void *owner, int v);

void fn_8275C060(Obj *o)
{
    void *p = o->link != 0 ? o->link - 0x10 : 0;
    if (p != 0) {
        void *q = fn_8275BB38(p);
        if (q != 0) {
            fn_8269A1F0(o->owner, fn_826C53B0(q));
        }
    }
}
