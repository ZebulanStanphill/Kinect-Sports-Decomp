typedef struct Pair_8247AEC0 {
    int a;
    int b;
} Pair_8247AEC0;

typedef struct Arg_8247AEC0 {
    int a;
    int b;
    double d;
} Arg_8247AEC0;

typedef struct Ref_8247AEC0 {
    int a;
    int b;
} Ref_8247AEC0;

extern int **fn_82555A88(int base, const char *name);
extern void fn_82517978(Pair_8247AEC0 *out, int a, int b, int c);
extern void fn_8266F2D0(int *obj, Pair_8247AEC0 *pair, int a, float f, int b);
extern void fn_822A5480(Ref_8247AEC0 *ref, char *name);
extern void fn_82273CD8(Arg_8247AEC0 *arg, int type);
extern void fn_82672C20(int obj, const char *name, Arg_8247AEC0 *arg, int count);
extern void fn_82273C88(Arg_8247AEC0 *arg);

extern float lbl_821CC160;
extern double lbl_821954B0[];
extern char lbl_820E975C[];

void fn_8247AEC0(char *self, char *other)
{
    Ref_8247AEC0 *r;
    Ref_8247AEC0 *p;
    int a;
    float scale;
    int base;
    int **res;
    int *obj;
    double speed;
    Pair_8247AEC0 pair;
    Arg_8247AEC0 arg1;
    Arg_8247AEC0 arg2;

    r = *(Ref_8247AEC0 **)(self + 0x5c4);
    a = r->a;
    scale = lbl_821CC160;
    base = *(int *)(*(int *)(other + 0x3e4) + 0x8c0);
    if (a != 0) {
        res = fn_82555A88(base + 0x98, "|REFERENCE_topticker|");
        if (res != 0 && (obj = *res) != 0) {
            pair.a = 0;
            pair.b = 0;
            fn_82517978(&pair, a, r->b, 0);
            fn_8266F2D0(obj, &pair, 0, scale, 0);
        }
    }
    fn_822A5480(*(Ref_8247AEC0 **)(self + 0x5c4), lbl_820E975C);
    arg1.a = 0;
    arg1.b = 0;
    p = *(Ref_8247AEC0 **)(self + 0x5c4);
    fn_82273CD8(&arg1, 3);
    speed = lbl_821954B0[136];
    arg1.d = speed;
    fn_82672C20(p->a, "_root.SetSpeed", &arg1, 1);
    fn_82273C88(&arg1);

    r = *(Ref_8247AEC0 **)(self + 0x5c8);
    a = r->a;
    if (a != 0) {
        res = fn_82555A88(base + 0x98, "|REFERENCE_Bottomticker|");
        if (res != 0 && (obj = *res) != 0) {
            pair.a = 0;
            pair.b = 0;
            fn_82517978(&pair, a, r->b, 0);
            fn_8266F2D0(obj, &pair, 0, scale, 0);
        }
    }
    fn_822A5480(*(Ref_8247AEC0 **)(self + 0x5c8), lbl_820E975C);
    arg2.a = 0;
    arg2.b = 0;
    p = *(Ref_8247AEC0 **)(self + 0x5c8);
    fn_82273CD8(&arg2, 3);
    arg2.d = speed;
    fn_82672C20(p->a, "_root.SetSpeed", &arg2, 1);
    fn_82273C88(&arg2);
}
