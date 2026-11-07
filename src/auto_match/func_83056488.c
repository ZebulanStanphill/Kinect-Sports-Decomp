typedef struct Src_83056488 {
    float a;
    float b;
    float c;
    float d;
    int e;
    unsigned char flag;
} Src_83056488;

typedef struct Dst_83056488 {
    double a;
    double b;
    double c;
    double d;
    int e;
} Dst_83056488;

typedef struct Holder_83056488 {
    int pad0;
    Src_83056488 s;
} Holder_83056488;

struct Obj_83056488;

typedef struct ObjVt_83056488 {
    void *f0;
    void *f4;
    void (*f8)(struct Obj_83056488 *self);
} ObjVt_83056488;

typedef struct Obj_83056488 {
    ObjVt_83056488 *vt;
    char pad4[0x4c];
    Dst_83056488 d;
} Obj_83056488;

typedef struct Self_83056488 {
    int pad0;
    Holder_83056488 *h;
    Obj_83056488 *o;
} Self_83056488;

float fn_83056488(Self_83056488 *p)
{
    Src_83056488 s = p->h->s;
    p->h->s.flag = 0;
    if (s.flag == 1) {
        Dst_83056488 d;
        d.a = s.a;
        d.b = s.b;
        d.c = s.c;
        d.d = s.d;
        d.e = s.e;
        p->o->d = d;
        p->o->vt->f8(p->o);
    }
    return s.b;
}
