typedef struct Obj_822E2028 {
    char pad0[0xd4];
    int flag;
    char pad1[0x8];
    float a;
    float b;
} Obj_822E2028;

typedef struct Pair_822E2028 {
    Obj_822E2028 *first;
    void *second;
} Pair_822E2028;

struct Self_822E2028;

typedef struct Vt_822E2028 {
    void *slots[8];
    void (*f20)(struct Self_822E2028 *self);
} Vt_822E2028;

typedef struct Self_822E2028 {
    Vt_822E2028 *vt;
    char pad0[0x54];
    char member58;
} Self_822E2028;

extern void fn_822315A0(void *p);
extern void fn_824D2AE8(Pair_822E2028 *out, void *src);
extern float lbl_821CC160;

void fn_822E2028(Self_822E2028 *param_1)
{
    Pair_822E2028 pair;
    Obj_822E2028 *o;

    fn_824D2AE8(&pair, &param_1->member58);
    o = pair.first;
    if (o != 0) {
        float v;
        o->flag = 1;
        v = lbl_821CC160;
        o->a = v;
        o->b = v;
    }
    param_1->vt->f20(param_1);
    if (pair.second != 0) {
        fn_822315A0(pair.second);
    }
}
