typedef struct Obj_82BA11F0 Obj_82BA11F0;

typedef struct Vtbl_82BA11F0 {
    void *pad[0x54 / 4];
    void (*f54)(Obj_82BA11F0 *self, int a, int b, int c);
    void (*f58)(Obj_82BA11F0 *self, int a, int b, int c);
} Vtbl_82BA11F0;

struct Obj_82BA11F0 {
    Vtbl_82BA11F0 *vt;
    unsigned char pad[0x9a - 4];
    unsigned char b9a;
};

typedef struct Owner_82BA11F0 {
    unsigned char pad0[0x20];
    int v20;
    unsigned char pad24[0x3b4 - 0x24];
    int v3b4;
} Owner_82BA11F0;

typedef struct Self_82BA11F0 {
    unsigned char pad0[0xc];
    int vc;
    int v10;
    unsigned char pad14[0x6c - 0x14];
    Owner_82BA11F0 *owner;
    unsigned char pad70[0xac - 0x70];
    int vac;
} Self_82BA11F0;

extern void fn_82B7C800(void);
extern int fn_82B9DA38(int a, int b, float *out, void *fn, int c);
extern int fn_82B9DAD8(int a, int b, float *out, void *fn, int c);
extern int fn_82B9DB78(int a, int b, float *out, void *fn, int c);
extern int fn_82B9DC18(int a, int b, float *out, void *fn, int c);
extern int fn_82BAFE48(int a, int b, int c);
extern void fn_82BC2958(Obj_82BA11F0 *o, int idx, int v);
extern void fn_82BC34D8(Obj_82BA11F0 *o, Self_82BA11F0 *s, int mode,
                        float a, float b, float c, float d);
extern Obj_82BA11F0 *fn_82BC4478(int kind, int ctx);
extern Obj_82BA11F0 *fn_82BC49F8(int kind, int ctx);
extern void fn_82BC5628(int a, Owner_82BA11F0 *owner, Obj_82BA11F0 *o);

void fn_82BA11F0(Self_82BA11F0 *self)
{
    float a;
    float b;
    float c;
    float d;
    int v;
    int w;
    int i;
    Obj_82BA11F0 *o;
    Owner_82BA11F0 *ow;

    fn_82B9DA38(self->v10, 0, &a, (void *)fn_82B7C800, self->vc);
    fn_82B9DAD8(self->v10, 0, &b, (void *)fn_82B7C800, self->vc);
    fn_82B9DB78(self->v10, 0, &c, (void *)fn_82B7C800, self->vc);
    fn_82B9DC18(self->v10, 0, &d, (void *)fn_82B7C800, self->vc);
    v = self->owner->v20;
    o = fn_82BC49F8(0x12, self->vc);
    fn_82BC2958(o, 0, v);
    fn_82BC2958(o, 1, v);
    fn_82BC34D8(o, self, 2, a, b, c, d);
    o->vt->f54(o, 0, 3, 1);
    o->b9a = 1;
    ow = self->owner;
    fn_82BC5628(ow->v3b4, ow, o);

    w = fn_82BAFE48(self->vac, 0x17, 0);
    o = fn_82BC4478(0x14, self->vc);
    fn_82BC2958(o, 0, v);
    fn_82BC2958(o, 1, w);
    for (i = 0; i < 4; i++) {
        o->vt->f58(o, 1, i, 0);
    }
    fn_82BC2958(o, 2, v);
    fn_82BC34D8(o, self, 3, a, b, c, d);
    o->vt->f54(o, 0, 3, 1);
    ow = self->owner;
    fn_82BC5628(ow->v3b4, ow, o);
}
