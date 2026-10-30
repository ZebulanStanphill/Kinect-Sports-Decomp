struct IfaceC_824053F8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};
struct IfaceB_824053F8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual IfaceC_824053F8 *v3();
};
struct IfaceA_824053F8 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};
struct Big_824053F8 {
    char pad0[0x188];
    int f188;
    char pad18c[0x1cc - 0x18c];
    int f1cc;
    char pad1d0[0x3ec - 0x1d0];
    IfaceB_824053F8 *b;
    char pad3f0[0x408 - 0x3f0];
    char sub408[0x6b0 - 0x408];
    unsigned flags;
    char pad6b4[0x70c - 0x6b4];
    int f70c;
    char pad710[0x7e0 - 0x710];
    int f7e0;
};
struct Sub_824053F8 {
    char pad0[0x34];
    int f34;
    int f38;
    int f3c;
};
struct Obj_824053F8 {
    char pad0[8];
    Big_824053F8 *big;
    char padc[8];
    IfaceA_824053F8 *a;
    char pad18[0xc0 - 0x18];
    Sub_824053F8 sub;
    char padcc[0x110 - 0xc0 - sizeof(Sub_824053F8)];
    char sub110[1];
};
extern "C" {
void fn_8229A000(void *);
void fn_822BEA00();
void fn_82458808(void *);
void fn_82458E80(int, int, int);
void fn_82672C20(int, const char *, int, int);
void fn_824053F8(Obj_824053F8 *o)
{
    o->a->v1();
    fn_822BEA00();
    o->a->v2();
    fn_822BEA00();
    Big_824053F8 *big = o->big;
    unsigned *fl = &big->flags;
    if (big->f70c != 0) {
        *fl = *fl | 0x10;
    }
    *fl = *fl | 2;
    big->b->v3()->v3();
    fn_82458E80(big->f7e0, big->f188, big->f1cc);
    fn_82458808(big->sub408);
    fn_8229A000(o->sub110 - 0 + 0);
    Sub_824053F8 *s = &o->sub;
    if (*(int *)((char *)o + 0xf4) != 0 && s->f38 == 0) {
        s->f38 = 1;
        fn_82672C20(s->f3c, "_root.mainCtrl.hide", 0, 0);
    }
}
}
