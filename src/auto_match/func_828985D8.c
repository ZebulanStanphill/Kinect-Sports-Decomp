typedef struct Source_828985D8 Source_828985D8;

typedef struct Flags_828985D8 {
    int unk0;
    unsigned char bits[1];
} Flags_828985D8;

typedef struct Value_828985D8 {
    int unk0;
    int unk4;
    unsigned char value;
} Value_828985D8;

typedef struct SourceVt_828985D8 {
    void *slot0;
    Flags_828985D8 *(*getA)(Source_828985D8 *);
    void *slot8;
    Value_828985D8 *(*getValue)(Source_828985D8 *);
    void *slot10;
    Flags_828985D8 *(*getB)(Source_828985D8 *);
} SourceVt_828985D8;

struct Source_828985D8 {
    SourceVt_828985D8 *vt;
};

typedef struct Obj_828985D8 {
    char pad[0x20];
    Source_828985D8 *src;
} Obj_828985D8;

static __forceinline unsigned char anySet(Flags_828985D8 *f)
{
    unsigned int i;
    unsigned char r = 0;
    for (i = 0; i < 1; i++) {
        if (f->bits[i] != 0) {
            r = 1;
            break;
        }
    }
    return r;
}

unsigned char fn_828985D8(Obj_828985D8 *o)
{
    unsigned char result = 0;
    Flags_828985D8 *f;
    Value_828985D8 *v;
    if (o->src != 0 && o->src->vt->getA(o->src) != 0) {
        if (o->src != 0) f = o->src->vt->getA(o->src); else f = 0;
        result = anySet(f);
    } else if (o->src != 0 && o->src->vt->getB(o->src) != 0) {
        if (o->src != 0) f = o->src->vt->getB(o->src); else f = 0;
        result = anySet(f);
    } else if (o->src != 0 && o->src->vt->getValue(o->src) != 0) {
        if (o->src != 0) v = o->src->vt->getValue(o->src); else v = 0;
        result = v->value;
    }
    return result;
}
