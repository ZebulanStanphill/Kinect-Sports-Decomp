typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
struct Sink_82259C78;
typedef struct SinkVT_82259C78 {
    int pad0;
    void (*f4)(struct Sink_82259C78 *self, unsigned char b, float f, __vector4 v);
} SinkVT_82259C78;
typedef struct Sink_82259C78 { SinkVT_82259C78 *vt; } Sink_82259C78;
struct Src_82259C78;
typedef struct SrcVT_82259C78 {
    int pad[5];
    void (*f14)(struct Src_82259C78 *self, int a, void *out);
} SrcVT_82259C78;
typedef struct Src_82259C78 { SrcVT_82259C78 *vt; } Src_82259C78;
typedef struct Obj_82259C78 {
    char pad[0x68];
    Src_82259C78 *s68;
    int pad6c;
    Src_82259C78 *s70;
    int pad74;
    Src_82259C78 *s78;
} Obj_82259C78;
typedef struct Dst_82259C78 {
    char pad[0x10];
    Sink_82259C78 *sink;
} Dst_82259C78;
typedef struct Tmp_82259C78 { unsigned char b; float x; float y; float z; } Tmp_82259C78;

void fn_82259C78(Obj_82259C78 *p, int a, Dst_82259C78 *d)
{
    Tmp_82259C78 t;
    __vector4 v4;

    p->s68->vt->f14(p->s68, a, &t.b);
    p->s70->vt->f14(p->s70, a, &v4);
    p->s78->vt->f14(p->s78, a, &t.x);
    if (d->sink != 0)
        d->sink->vt->f4(d->sink, t.b, t.x, v4);
}
