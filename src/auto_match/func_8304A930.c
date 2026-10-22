typedef int (*code)();

extern void fn_83049F40(void *p);
extern int fn_8304A158(void *p);
extern int fn_8304A3A8(void *p);
extern void fn_8304A420(void *p);
extern int fn_8304A498(void *p, unsigned int v);
extern void fn_8307DE78(void *p);
extern void fn_8307E060(void *p);
extern void fn_8307E6E0(void *p);

typedef struct Fmt {
    char pad[0x20];
    unsigned int rate;
} Fmt;

typedef struct Voice {
    char pad[0x6c];
    Fmt *fmt;
    char pad70[0xd0 - 0x70];
    unsigned int d0;
    char padd4[0xdb - 0xd4];
    unsigned char db;
} Voice;

typedef struct Iface {
    code *vtbl;
} Iface;

typedef struct Obj {
    char pad[8];
    Voice *voice;
    char padc[0x28 - 0xc];
    void *p28;
    Iface *iface;
    char pad30[0x5c - 0x30];
    unsigned int f5c;
} Obj;

int fn_8304A930(Obj *o, int mode, unsigned char flag)
{
    Voice *v;
    unsigned int n;

    if (mode == 1) {
        if (flag) {
            fn_8304A420(o);
            fn_83049F40(o);
            v = o->voice;
            n = (unsigned int)(((unsigned __int64)v->fmt->rate * v->d0) / 48000);
            o->f5c = n;
            v->d0 = n & 0x7f;
            v->db &= 0x7f;
        }
        if (o->p28 == 0 && fn_8304A498(o, o->f5c) != 1) {
            return 2;
        }
    }
    if (o->iface->vtbl[7](o->iface) != 1) {
        return 2;
    }
    if (o->p28 == 0) {
        if (fn_8304A3A8(o) != 1) {
            return 2;
        }
        fn_8307DE78(o->p28);
        fn_8307E6E0(o->p28);
        fn_8304A158(o);
        fn_8307E060(o->p28);
    }
    return 1;
}
