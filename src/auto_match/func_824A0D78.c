// Looks up the object for the id at p+0x20 with fn_82F4EBE8 (negative ids give none) and
// returns 1 if it exists and its slot 1 returns non-zero. self is unused.
typedef struct Obj_824A0D78 Obj_824A0D78;

typedef struct {
    void *f0;
    int (*test)(Obj_824A0D78 *self);
} ObjVtbl_824A0D78;

struct Obj_824A0D78 { ObjVtbl_824A0D78 *vt; };

extern Obj_824A0D78 *fn_82F4EBE8(int id);

int fn_824A0D78(void *self, char *p)
{
    int result = 0;
    int id = *(int *)(p + 0x20);
    Obj_824A0D78 *o;

    if (id >= 0)
        o = fn_82F4EBE8(id);
    else
        o = 0;
    if (o && o->vt->test(o))
        result = 1;
    return result;
}
