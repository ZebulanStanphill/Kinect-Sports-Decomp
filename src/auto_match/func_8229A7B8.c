typedef unsigned short wchar16;

typedef struct {
    int a;
    void *p;
} Ref_8229A7B8;

typedef struct {
    void *a;
    void *b;
} Sub_8229A7B8;

typedef struct {
    void *vt;
    Sub_8229A7B8 sub;
    void *f0c;
    void *f10;
    void *f14;
    void *f18;
    void *f1c;
    void *f20;
    void *f24;
    int f28;
} Obj_8229A7B8;

extern char lbl_821AADF4[];

extern void fn_822315A0(void *p);
extern void fn_82266D28(Sub_8229A7B8 *s, int v);
extern void *fn_822997C8(void *p);
extern void *fn_82299948(void *p, int a, int b);
extern void *fn_8229B1A0(void *p);
extern void *fn_8229D298(void *p);
extern void *fn_8229EBD8(void *p);
extern void *fn_8229F2C0(void *p);
extern void fn_8229F3F0(void *p, wchar16 *a, wchar16 *b, wchar16 *c, wchar16 *d,
                        wchar16 *e, wchar16 *f, wchar16 *g, wchar16 *h);
extern void fn_82358FD8(void *p, wchar16 *buf, int len, const char *key);
extern void fn_823F2E20(Sub_8229A7B8 *s, void *v);
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_8266EC60(void);
extern void *fn_8266EE08(Ref_8229A7B8 *out, void *a, int b, int c, int d, int e);

Obj_8229A7B8 *fn_8229A7B8(Obj_8229A7B8 *o, void *param_2, int param_3)
{
    Sub_8229A7B8 *s;
    void *p;
    Ref_8229A7B8 ref;
    wchar16 auStack_230[32];
    wchar16 auStack_1f0[32];
    wchar16 auStack_1b0[32];
    wchar16 auStack_170[32];
    wchar16 auStack_130[32];
    wchar16 auStack_f0[32];
    wchar16 auStack_b0[32];
    wchar16 auStack_70[32];

    o->vt = lbl_821AADF4;
    s = &o->sub;
    s->a = 0;
    s->b = 0;
    fn_82266D28(s, 0);

    p = fn_8265C9E0(0x138);
    o->f0c = p != 0 ? fn_8229F2C0(p) : 0;
    p = fn_8265C9E0(0x18);
    o->f10 = p != 0 ? fn_8229EBD8(p) : 0;
    p = fn_8265C9E0(0x1c);
    o->f14 = p != 0 ? fn_8229D298(p) : 0;
    p = fn_8265C9E0(0xc0);
    o->f18 = p != 0 ? fn_8229B1A0(p) : 0;
    o->f1c = param_2;
    p = fn_8265C9E0(0x1230);
    o->f20 = p != 0 ? fn_82299948(p, 8, 0) : 0;
    p = fn_8265C9E0(0x1230);
    o->f24 = p != 0 ? fn_822997C8(p) : 0;
    o->f28 = -1;

    fn_823F2E20(s, fn_8266EE08(&ref, fn_8266EC60(), param_3, 0, 1, 0));
    if (ref.p != 0) {
        fn_822315A0(ref.p);
    }

    fn_82358FD8(o->f1c, auStack_70, 0x20, "postfix_1st");
    fn_82358FD8(o->f1c, auStack_f0, 0x20, "postfix_2nd");
    fn_82358FD8(o->f1c, auStack_170, 0x20, "postfix_3rd");
    fn_82358FD8(o->f1c, auStack_1f0, 0x20, "postfix_4th");
    fn_82358FD8(o->f1c, auStack_230, 0x20, "postfix_5th");
    fn_82358FD8(o->f1c, auStack_b0, 0x20, "postfix_6th");
    fn_82358FD8(o->f1c, auStack_1b0, 0x20, "postfix_7th");
    fn_82358FD8(o->f1c, auStack_130, 0x20, "postfix_8th");
    fn_8229F3F0(o->f0c, auStack_70, auStack_f0, auStack_170, auStack_1f0,
                auStack_230, auStack_b0, auStack_1b0, auStack_130);
    return o;
}
