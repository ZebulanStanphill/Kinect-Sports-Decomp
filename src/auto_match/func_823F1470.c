typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Block_823F1470 {
    __vector4 a;
    __vector4 b;
} Block_823F1470;

typedef struct Ref_823F1470 {
    void *obj;
    void *ref;
} Ref_823F1470;

typedef struct Channel_823F1470 Channel_823F1470;
typedef struct ChannelVtbl_823F1470 {
    void *slot0;
    void *slot1;
    void *slot2;
    void *slot3;
    void (*set)(Channel_823F1470 *self, void *obj, const void *value);
} ChannelVtbl_823F1470;
struct Channel_823F1470 {
    ChannelVtbl_823F1470 *vt;
};

typedef struct Self_823F1470 {
    char pad00[0x38];
    char list[0x10];
    void *active;
    char pad4C[0x1C];
    Channel_823F1470 *ch68;
    int pad6C;
    Channel_823F1470 *ch70;
    int pad74;
    Channel_823F1470 *ch78;
    int pad7C;
    Channel_823F1470 *ch80;
    int pad84;
    Channel_823F1470 *ch88;
    int pad8C;
    Channel_823F1470 *ch90;
    int pad94;
    Channel_823F1470 *ch98;
} Self_823F1470;

extern void *fn_8265C9E0(unsigned int size);
extern void *fn_822D7FE0(void *mem);
extern void fn_822D79D8(Ref_823F1470 *r, void *obj);
extern void fn_828E9D90(void *obj);
extern void fn_828E9D40(void *obj);
extern void fn_82251F78(Self_823F1470 *self, void *obj, void *list);
extern void fn_828E2B28(Self_823F1470 *self, Ref_823F1470 *r);
extern void fn_822315A0(void *ref);

void fn_823F1470(Self_823F1470 *self, int a, int b, __vector4 v, Block_823F1470 blk, short h, int c, const void *d)
{
    void *mem;
    void *obj;
    Ref_823F1470 r;

    mem = fn_8265C9E0(0x28);
    if (mem != 0) {
        obj = fn_822D7FE0(mem);
    } else {
        obj = 0;
    }
    r.obj = 0;
    r.ref = 0;
    fn_822D79D8(&r, obj);
    self->ch68->vt->set(self->ch68, r.obj, &a);
    self->ch70->vt->set(self->ch70, r.obj, &b);
    self->ch78->vt->set(self->ch78, r.obj, &v);
    self->ch80->vt->set(self->ch80, r.obj, &blk);
    self->ch88->vt->set(self->ch88, r.obj, &h);
    self->ch90->vt->set(self->ch90, r.obj, &c);
    self->ch98->vt->set(self->ch98, r.obj, d);
    if (self->active != 0) {
        fn_828E9D90(r.obj);
        fn_828E9D40(r.obj);
        fn_82251F78(self, r.obj, self->list);
    }
    fn_828E2B28(self, &r);
    if (r.ref != 0) {
        fn_822315A0(r.ref);
    }
}
