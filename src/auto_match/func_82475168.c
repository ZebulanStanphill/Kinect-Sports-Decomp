typedef struct Obj_82475168 Obj_82475168;
typedef struct {
    void *slot0;
    int (*fn4)(Obj_82475168 *self);
} ObjVt_82475168;
struct Obj_82475168 {
    ObjVt_82475168 *vt;
};

typedef struct {
    char pad0[0x8];
    int f8;
    char pad1[0x50 - 0xc];
    unsigned int f50;
    char pad2[0x60 - 0x54];
    unsigned int f60;
    unsigned int f64;
    unsigned int f68;
    char pad3[0x88 - 0x6c];
    int f88;
} Mgr_82475168;

extern int fn_82475290(int idx);
extern int fn_82475350(int idx);
extern Mgr_82475168 *fn_8249ABC0(void);
extern void fn_8249B598(Mgr_82475168 *m, int idx);
extern Obj_82475168 *fn_82F4EBE8(void);
extern float lbl_821CC160;
extern float lbl_831C6664[];
extern float lbl_8327F880[];

int fn_82475168(int param_1, int param_2)
{
    int e;
    Obj_82475168 *o;
    Mgr_82475168 *m;
    unsigned int v;
    float thr;
    float t;

    thr = lbl_831C6664[13];
    e = param_2 * 0x18 + param_1;
    t = *(float *)(e + 0x5c) + lbl_8327F880[5];
    *(float *)(e + 0x5c) = t;
    if (t < thr) {
        return 0;
    }
    fn_8249B598(fn_8249ABC0(), param_2);
    o = fn_82F4EBE8();
    if (o == 0) {
        return 0;
    }
    if (o->vt->fn4(o) == 0) {
        return 0;
    }
    m = fn_8249ABC0();
    if (m->f88 != 0) {
        if (m->f8 == 0) {
            v = m->f68;
        } else {
            v = m->f64;
        }
    } else {
        v = m->f60;
    }
    v = m->f50 & v;
    if (v == 0x20 || v == 0) {
        if (*(int *)(e + 0x68) == 0) {
            if (fn_82475290(param_2) == 0) goto reset;
            *(int *)(e + 0x68) = 1;
        }
        if (fn_82475350(param_2) == 0) {
            return 1;
        }
    }
reset:
    *(float *)(e + 0x5c) = lbl_821CC160;
    return 0;
}
