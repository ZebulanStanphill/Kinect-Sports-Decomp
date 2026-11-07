typedef struct Inner_8300D298 {
    char pad0[0xfc];
    struct { int pad[2]; void *v8; } *pfc;
} Inner_8300D298;

typedef struct Sub_8300D298 {
    char pad0[0x14];
    Inner_8300D298 *p14;
} Sub_8300D298;

typedef struct Res_8300D298 {
    char pad0[0xc];
    float fc;
    int pad10;
    void *p14;
} Res_8300D298;

typedef struct Obj_8300D298 {
    int pad0;
    Sub_8300D298 *p4;
    char pad8[0x3a0 - 8];
    void **p3a0;
} Obj_8300D298;

extern Res_8300D298 *fn_82FEFD50(void *a);
extern void fn_83022188(void *a, void **b);
extern void fn_830221F8(void *a, float f);
extern unsigned char fn_83027B20(void);

void fn_8300D298(Obj_8300D298 *param_1)
{
    Inner_8300D298 *p;
    void *arg;
    Res_8300D298 *r;

    p = param_1->p4->p14;
    if (p != 0) {
        arg = p->pfc->v8;
    } else {
        arg = 0;
    }
    r = fn_82FEFD50(arg);
    if (r->fc > 0.1f && *param_1->p3a0 != 0 &&
        (r->p14 != 0 || fn_83027B20() != 0)) {
        fn_830221F8(r->p14, r->fc);
        fn_83022188(r->p14, param_1->p3a0);
    }
}
