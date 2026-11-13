extern void fn_82AB15D0(void *, const char *, const char *, const char *, int);
extern unsigned fn_82AB71F0(void *, int, int);
extern int lbl_8316E480[];

typedef struct State_82B9CE48 {
    unsigned int f0;
    unsigned int value;
    unsigned int f8;
    unsigned int fc;
    unsigned int f10;
    unsigned int f14;
    unsigned int f18;
    unsigned int f1c;
    unsigned int f20;
    unsigned int f24;
} State_82B9CE48;

int fn_82B9CE48(void *a, int b, State_82B9CE48 *s, void (*cb)(void *, const char *, int, int, int, int), void *d)
{
    unsigned int v;
    if (a == 0) {
        fn_82AB15D0(a, "Assertion failed: %s (%s:%u)", "pAS_Object",
            "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compilertossm.cpp", 0xb3d);
    }
    if ((unsigned int)b < 0x10 && b != -1)
        v = fn_82AB71F0(a, 0xf, b);
    else
        v = 0;
    s->value = v;
    s->f8 = 3;
    s->fc = 3;
    s->f0 = 0;
    s->f10 = 3;
    s->f14 = 7;
    s->f18 = 7;
    s->f1c = 3;
    s->f20 = 3;
    s->f24 = 1;
    if (cb != 0 && d != 0) {
        cb(d, "%s (%d) %d : %d\n", lbl_8316E480[0x1f], 0x1f, b, v);
    }
    return 1;
}
