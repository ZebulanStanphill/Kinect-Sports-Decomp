typedef struct Obj_823C01C0 Obj_823C01C0;

typedef struct {
    void *slot0;
    void (*fn4)(Obj_823C01C0 *self, float f, int x);
} Vtbl_823C01C0;

struct Obj_823C01C0 {
    Vtbl_823C01C0 *vt;
};

typedef struct {
    Obj_823C01C0 *obj;
    int extra;
} Entry_823C01C0;

typedef struct {
    char pad[0x30];
    Entry_823C01C0 *begin;
    Entry_823C01C0 *end;
} Container_823C01C0;

void fn_823C01C0(Container_823C01C0 *c, float f, int x)
{
    Entry_823C01C0 *e;

    for (e = c->begin; e != c->end; e++) {
        e->obj->vt->fn4(e->obj, f, x);
    }
}
