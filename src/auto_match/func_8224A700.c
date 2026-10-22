typedef struct Stream Stream;
typedef struct StreamVtbl {
    void *f00;
    void *f04;
    void *f08;
    void *f0c;
    void (*Set)(Stream *s, int a, unsigned int pos);
} StreamVtbl;
struct Stream {
    StreamVtbl *vt;
};

typedef struct Slot {
    Stream *s;
    int pad;
} Slot;

typedef struct Obj {
    char pad00[0x8];
    unsigned int offs[6];
    Slot slots[6];
} Obj;

void fn_8224A700(Obj *obj, int a, unsigned int pos)
{
    obj->slots[0].s->vt->Set(obj->slots[0].s, a, obj->offs[0] + pos);
    obj->slots[1].s->vt->Set(obj->slots[1].s, a, obj->offs[1] + pos);
    obj->slots[2].s->vt->Set(obj->slots[2].s, a, obj->offs[2] + pos);
    obj->slots[3].s->vt->Set(obj->slots[3].s, a, obj->offs[3] + pos);
    obj->slots[4].s->vt->Set(obj->slots[4].s, a, obj->offs[4] + pos);
    obj->slots[5].s->vt->Set(obj->slots[5].s, a, obj->offs[5] + pos);
}
