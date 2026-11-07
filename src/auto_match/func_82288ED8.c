typedef struct Ref_82288ED8 {
    int obj;
    void *ref;
} Ref_82288ED8;

typedef struct Value_82288ED8 {
    void *iface;
    int type;
    union {
        const char *s;
        unsigned char b;
        int i;
    } v;
    int pad;
} Value_82288ED8;

extern void fn_822315A0(void *p);
extern void fn_82273C88(Value_82288ED8 *v);
extern void fn_82273CD8(Value_82288ED8 *v, int type);
extern void fn_82517978(Ref_82288ED8 *r, int a, int b, int c);
extern void fn_82672C20(int obj, const char *name, Value_82288ED8 *args, int n);

void fn_82288ED8(int param_1, int param_2)
{
    Ref_82288ED8 ref;
    Value_82288ED8 args[2];
    Value_82288ED8 *p;
    int i;

    for (i = 0; i < 2; i++) {
        args[i].iface = 0;
        args[i].type = 0;
    }
    ref.obj = 0;
    ref.ref = 0;
    fn_82517978(&ref, *(int *)(param_1 + 0x524), *(int *)(param_1 + 0x528), 0);
    fn_82273CD8(&args[0], 5);
    args[0].v.s = (const char *)(param_1 + 0x5a4);
    fn_82273CD8(&args[1], 2);
    args[1].v.b = (unsigned char)(param_2 != 0);
    fn_82672C20(ref.obj, "_root.SetBoardTextForSmallMode", args, 2);
    if (ref.ref != 0) {
        fn_822315A0(ref.ref);
    }
    p = &args[2];
    i = 1;
    do {
        p--;
        fn_82273C88(p);
        i--;
    } while (i >= 0);
}
