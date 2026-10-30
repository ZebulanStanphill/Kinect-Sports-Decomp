struct If_83033258 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};
struct Obj_83033258 {
    void *vt;
    char pad0[0x20 - 4];
    void *f20;
    void *f24;
    unsigned char flags;
    char pad1[3];
    void *f2c;
    char pad2[4];
    void *f34;
    char pad3[0x94 - 0x38];
    unsigned int f94;
    If_83033258 *f98;
    char pad4[4];
    If_83033258 *fa0;
};
extern "C" {
extern unsigned int lbl_8217D044;
extern void *lbl_832642F4;
extern void *lbl_832642F8;
void fn_82FF5750(void *, void *, unsigned int);
void fn_8301B7B8(void *, void *);
void fn_83032D88(void *);
void fn_8303D8C0(void *);
}

extern "C" void fn_83033258(Obj_83033258 *o)
{
    o->vt = &lbl_8217D044;
    if (o->f20 != 0 && o->f94 != 0)
        fn_82FF5750(lbl_832642F4, o->f20, o->f94 + 4);
    o->f20 = 0;
    o->flags = o->flags & 0x7f;
    if (o->f24 != 0 && o->f94 != 0)
        fn_82FF5750(lbl_832642F4, o->f24, o->f94 + 4);
    o->f24 = 0;
    o->flags = o->flags & 0xbf;
    if (o->f2c != 0)
        fn_8301B7B8(lbl_832642F8, o->f2c);
    if (o->fa0 != 0) {
        o->fa0->v2();
        o->fa0 = 0;
    }
    if (o->f98 != 0)
        o->f98->v2();
    if (o->f34 != 0) {
        fn_83032D88(o->f34);
        o->f34 = 0;
    }
    fn_8303D8C0(o);
}
