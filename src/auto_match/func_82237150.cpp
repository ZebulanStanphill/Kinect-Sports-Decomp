#include "game/OStringStreamObject_8223DCC8.h"

extern "C" {
typedef struct Str_82237150 {
    char pad[8];

    union {
        unsigned char buf[4];
        unsigned char *ptr;
    } u;

    unsigned int cap;
} Str_82237150;

typedef struct SS_82237150 {
    int pad4;
    char buf[148];
} SS_82237150;

typedef struct W_82237150 {
    int h[4];
    unsigned char *p;
    int n;
    void *heap;
    int a;
    int b;
} W_82237150;

typedef struct Tmp_82237150 {
    char b[0x20];
} Tmp_82237150;

typedef struct Vec3_82237150 {
    float x;
    float y;
    float z;
} Vec3_82237150;

typedef struct Quat_82237150 {
    float x;
    float y;
    float z;
    float w;
} Quat_82237150;

extern void fn_828E9D28(void *, unsigned char *, int);
extern unsigned __int64 fn_823B4900(void *stream, int bits, unsigned char *overflow, int flags);
extern void fn_822393D0(Vec3_82237150 *out, void *stream);
extern void fn_8287C410(const Vec3_82237150 *axis, float angle, Quat_82237150 *out);
extern void fn_8223CFC0(void *ss, int mode, int x);
extern void *fn_82234ED8(void *out, int a, int b, Str_82237150 *s);
extern void *fn_82240158(void *os, const char *s);
extern void *fn_82237920(void *os, unsigned __int64 v);
extern void *fn_82237A48(void *os, float v);
extern void *fn_8223B728(void *os, void *v);
extern void fn_82230300(void *, int, int);
extern void fn_822403C8(void *out, void *buf);
extern void fn_8265CA20(void *);
extern char lbl_82196824[];

typedef struct L_82237150 {
    Quat_82237150 rotation;
    W_82237150 w;
    int pad1;
    Vec3_82237150 axis;
    int pad2[3];
    Tmp_82237150 tmp;
    SS_82237150 ss;
} L_82237150;

void *fn_82237150(void *out, int a, int b, Str_82237150 *s)
{
    L_82237150 L;
    double angle;
    float x, y, z, w;
    void *r;
    void *os;
    unsigned char *p;

    if (s->cap <= 4) {
        p = s->u.buf;
    } else {
        p = s->u.ptr;
    }
    L.w.p = p;
    L.w.heap = 0;
    L.w.a = 0;
    L.w.b = 0;
    L.w.n = 4;
    fn_828E9D28(&L.w, p, 4);
    angle = (((double)fn_823B4900(&L.w, 8, 0, 0) + 0.5) * 0.00390625) * 3.1415927f;
    fn_822393D0(&L.axis, &L.w);
    fn_8287C410(&L.axis, (float)angle, &L.rotation);
    x = L.rotation.x;
    y = L.rotation.y;
    z = L.rotation.z;
    w = L.rotation.w;
    fn_8223CFC0(&L.ss, 2, 1);
    r = fn_82234ED8(&L.tmp, a, b, s);
    os = fn_82240158(&L.ss, "NetDefUnitQuatOneToAll_c<");
    os = fn_82237920(os, 8);
    os = fn_82240158(os, lbl_82196824);
    os = fn_82237920(os, 17);
    os = fn_82240158(os, "> - {");
    os = fn_82237A48(os, x);
    os = fn_82240158(os, lbl_82196824);
    os = fn_82237A48(os, y);
    os = fn_82240158(os, lbl_82196824);
    os = fn_82237A48(os, z);
    os = fn_82240158(os, lbl_82196824);
    os = fn_82237A48(os, w);
    os = fn_82240158(os, "}, {");
    os = fn_8223B728(os, r);
    fn_82240158(os, "}");
    fn_82230300(&L.tmp, 1, 0);
    fn_822403C8(out, L.ss.buf);
    DestroyOStringStream_8223DCC8(&L.ss);
    if (L.w.heap != 0) {
        fn_8265CA20(L.w.heap);
    }
    return out;
}
}
