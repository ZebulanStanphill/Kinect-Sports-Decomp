typedef struct Obj_8285C8C0 {
    char pad0[0x1c];
    char key[0x2c];
    int id;
} Obj_8285C8C0;

typedef struct Mgr_8285C8C0 {
    char pad0[0x25c];
    int table;
} Mgr_8285C8C0;

extern Mgr_8285C8C0 lbl_83211340;
extern char lbl_820214B4[];
extern const float ltcg_pool_0_0f;

extern void fn_8280AD30(Mgr_8285C8C0 *mgr, void *key, void *out);
extern float fn_82810BE8(void *p);
extern int fn_828116B8(int table, int id);
extern int fn_828593E0(Obj_8285C8C0 *obj, float f, const void *a, int r, int prev, const float *b, const float *c);

void fn_8285C8C0(Obj_8285C8C0 *obj, int *out, const void *a, const float *b, const float *c, unsigned char useDefaults)
{
    unsigned char buf[16];
    float f;
    int r;

    fn_8280AD30(&lbl_83211340, obj->key, buf);
    f = fn_82810BE8(buf);
    r = fn_828116B8(lbl_83211340.table, obj->id);
    if (!useDefaults)
        out[1] = fn_828593E0(obj, f, a, r, out[1], b, c);
    else
        out[1] = fn_828593E0(obj, f, lbl_820214B4, r, out[1], &ltcg_pool_0_0f, &ltcg_pool_0_0f);
}
