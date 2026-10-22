typedef struct Obj Obj;
typedef struct {
    void (*fn0)(Obj *self, int arg);
} ObjVt;
struct Obj {
    ObjVt *vt;
    int f4;
    unsigned int count;
};

void fn_826C30F8(Obj **pair)
{
    Obj *o;
    unsigned int c;

    o = pair[0];
    if (o != 0) {
        c = o->count + 1;
        o->count = c;
        if ((c & 0x70000000) != 0) {
            o->count = c & 0x8fffffff;
            o->vt->fn0(o, 2);
        }
    }
    o = pair[1];
    if (o != 0) {
        c = o->count + 1;
        o->count = c;
        if ((c & 0x70000000) != 0) {
            o->count = c & 0x8fffffff;
            o->vt->fn0(o, 2);
        }
    }
}
