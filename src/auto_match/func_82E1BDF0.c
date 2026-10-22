typedef void (*vfn)(void *, void *, int, int);
typedef struct { vfn f[8]; } VT;
typedef struct { VT *vt; } Obj;
typedef struct {
    void *data;
    int count;
    int cap;
    int sub;
} Arr;
extern void fn_82BA02A8(void *);
extern int fn_82CE5410(void);
extern void fn_82CEA4B8(void *, void *);

void fn_82E1BDF0(Arr *a)
{
    Obj *o;
    void *s = &a->sub;
    int g = fn_82CE5410();

    fn_82CEA4B8(s, *(void **)(g + 0x10));
    fn_82BA02A8(s);
    o = *(Obj **)(fn_82CE5410() + 0x10);
    a->count = 0;
    if ((a->cap & (int)0x80000000) == 0) {
        o->vt->f[4](o, a->data, a->cap & 0x3fffffff, 8);
    }
    a->data = 0;
    a->cap = 0x80000000;
}
