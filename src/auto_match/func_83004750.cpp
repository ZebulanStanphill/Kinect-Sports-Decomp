struct Self_83004750 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void f3c(int, float, int, int);
    char pad[0x2e - 4];
    unsigned short s2e;
};
struct Anim_83004750 {
    int pad0;
    int f04;
    int pad8;
    int fc;
    int pad10;
    unsigned f14;
    char pad18[0x2c - 0x18];
    float f2c;
};
struct Req_83004750 {
    int *p;
    int flags;
    float v0;
    float t;
    int p8;
    int p7;
    unsigned char b;
};

extern "C" {
extern void *lbl_832642F4;
void fn_82FF5400(void *, int, int, unsigned, int, int, unsigned);
int fn_82FF59A8(void *, Req_83004750 *, int, int);
}

extern "C" void fn_83004750(Self_83004750 *self, Anim_83004750 *a, int unused, unsigned mode, int p7, int p8, float x)
{
    Req_83004750 s;
    if (a != 0) {
        if (a->f14 != 0) {
            s.t = x;
            fn_82FF5400(lbl_832642F4, a->f14, 0x80000, mode, p8, p7, mode);
        }
        if (a->f14 == 0) {
            s.v0 = a->f2c;
            switch (mode) {
            case 0:
                s.t = 0.0f;
                break;
            case 1:
                s.t = -((short)self->s2e * 0.1f - x);
                break;
            case 2:
                s.t = s.v0 + x;
                break;
            }
            if (s.v0 == s.t || p8 == 0) {
                a->f2c = s.t;
                self->f3c(1, s.t - s.v0, a->fc, 0);
            } else {
                s.p7 = p7;
                s.p8 = p8;
                s.flags = 0x80000;
                s.b = 1;
                s.p = &a->f04;
                a->f14 = fn_82FF59A8(lbl_832642F4, &s, 1, 0);
            }
        }
    }
}
