struct Info_83004C68 {
    short s0;
    int f4;
    int f8;
};
struct Self_83004C68 {
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
    char pad[0x44 - 4];
    Info_83004C68 *info;
};
struct Anim_83004C68 {
    int pad0;
    int f04;
    int pad8;
    int fc;
    char pad10[0x24 - 0x10];
    unsigned f24;
    char pad28[0x38 - 0x28];
    float f38;
};
struct Req_83004C68 {
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
extern void *lbl_831BC768;
void *fn_82FA5060(void *, int);
void fn_82FF5400(void *, int, int, unsigned, int, int, unsigned);
int fn_82FF59A8(void *, Req_83004C68 *, int, int);
}

extern "C" void fn_83004C68(Self_83004C68 *self, Anim_83004C68 *a, int unused, unsigned mode, int p7, int p8, float x)
{
    Req_83004C68 s;
    Info_83004C68 *info;
    if (a != 0) {
        if (a->f24 != 0) {
            s.t = x;
            fn_82FF5400(lbl_832642F4, a->f24, 0x20000000, mode, p8, p7, mode);
        }
        if (a->f24 == 0) {
            if (self->info == 0) {
                info = (Info_83004C68 *)fn_82FA5060(lbl_831BC768, 0xc);
                self->info = info;
                if (info != 0) {
                    info->s0 = 0;
                    info->f4 = 0;
                }
                if (self->info == 0) {
                    return;
                }
            }
            s.v0 = a->f38;
            switch (mode) {
            case 0:
                s.t = 0.0f;
                break;
            case 1:
                s.t = -(self->info->s0 * 0.1f - x);
                break;
            case 2:
                s.t = s.v0 + x;
                break;
            }
            if (s.v0 == s.t || p8 == 0) {
                a->f38 = s.t;
                self->f3c(0x1d, s.t - s.v0, a->fc, 0);
            } else {
                s.p7 = p7;
                s.p8 = p8;
                s.flags = 0x20000000;
                s.b = 1;
                s.p = &a->f04;
                a->f24 = fn_82FF59A8(lbl_832642F4, &s, 1, 0);
            }
        }
    }
}
