typedef struct Obj Obj;
typedef struct {
    Obj *obj;
    int pad[6];
    void *f1c;
    char rest[0x1a0 - 0x20];
} Elem;
typedef struct {
    Elem *data;
    int count;
} Array;
typedef struct {
    char pad[0x98];
    Array arr;
} Inner;
struct Obj {
    Inner *inner;
};

extern void fn_825A1AE0(Obj *p, void *a, void *b);

void fn_825A1700(Obj *p, void *a, void *b)
{
    Array *arr;
    int i, n;
    fn_825A1AE0(p, a, b);
    arr = &p->inner->arr;
    if (arr != 0 && (n = arr->count) > 0) {
        for (i = 0; i < n; i++) {
            Elem *e = &arr->data[i];
            if (e->f1c == 0)
                fn_825A1700((Obj *)((char *)e->obj + 0x11c), a, b);
        }
    }
}
