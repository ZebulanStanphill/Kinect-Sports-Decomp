typedef struct V4_827EA490 { float x, y, z, w; } V4_827EA490;

extern int fn_827E9A68(void *a, void *b, void *c, float scale, void *d, float f, void *e);
extern void fn_827EF590(float *q, void *m);
extern void fn_827EF608(void *m, void *in, void *out);
extern int fn_8280A5E8(float);
extern void fn_82810328(void *a, void *b, void *out);
extern void fn_828106A0(void *);
extern void fn_8281CAE8(void *xf, void *in, void *out);
extern float lbl_82002AE0;

int fn_827EA490(void *param_1, void *param_2, void *param_3, float *param_4, void *param_5,
                void *param_6, float param_7, void *param_8)
{
    struct { V4_827EA490 v0; V4_827EA490 v1; V4_827EA490 m; char buf[0x10]; } L;

    if (fn_8280A5E8(param_4[0]) == 0 && fn_8280A5E8(param_4[1]) == 0 && fn_8280A5E8(param_4[2]) == 0) {
        fn_82810328(param_2, param_6, &L.v0);
        fn_82810328(param_1, param_3, &L.v1);
        fn_8281CAE8(param_5, &L.v0, &L.v0);
        fn_8281CAE8(param_5, &L.v1, &L.v1);
        fn_827EF590(param_4, &L.m);
        fn_827EF608(&L.m, &L.v0, &L.v0);
        fn_827EF608(&L.m, &L.v1, &L.v1);
        fn_828106A0(L.buf);
        return fn_827E9A68(&L.v1, &L.v0, L.buf, lbl_82002AE0, L.buf, param_7, param_8);
    }
    return 0;
}
