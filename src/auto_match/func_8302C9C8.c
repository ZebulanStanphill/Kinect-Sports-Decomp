typedef struct Obj_8302C9C8 Obj_8302C9C8;
typedef struct ObjVt_8302C9C8 {
    void *a;
    void (*destroy)(Obj_8302C9C8 *o);
} ObjVt_8302C9C8;
struct Obj_8302C9C8 {
    ObjVt_8302C9C8 *vt;
    int pad4[2];
    int fc;
    int f10;
};

typedef struct Src_8302C9C8 Src_8302C9C8;
typedef struct SrcVt_8302C9C8 {
    void *pad[12];
    int (*get)(Src_8302C9C8 *s);
} SrcVt_8302C9C8;
struct Src_8302C9C8 { SrcVt_8302C9C8 *vt; };

typedef struct Self_8302C9C8 {
    char pad0[0x88];
    Src_8302C9C8 *src;
    char pad8c[0x11c - 0x8c];
    unsigned short id;
    unsigned char pad11e;
    unsigned char flags;
} Self_8302C9C8;

extern int lbl_831BC768;
extern void *fn_82FA5060(int heap, int size);
extern Obj_8302C9C8 *fn_8300CF30(void *mem, int arg);
extern int fn_8300CE00(Obj_8302C9C8 *o, unsigned short id);

Obj_8302C9C8 *fn_8302C9C8(Self_8302C9C8 *self, int arg)
{
    void *mem;
    Obj_8302C9C8 *o;
    mem = fn_82FA5060(lbl_831BC768, 0x2c);
    o = mem ? fn_8300CF30(mem, arg) : 0;
    if (o == 0) {
        return 0;
    }
    if (fn_8300CE00(o, self->id) != 1) {
        o->vt->destroy(o);
        return 0;
    }
    if (self->flags & 0x10) {
        int v = self->src->vt->get(self->src);
        o->f10 = v;
        o->fc = v;
    }
    return o;
}
