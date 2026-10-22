typedef struct Obj {
    char pad0[0x18];
    int f18;
    int f1c;
    char pad20[0x20];
    unsigned int f40;
    unsigned int f44;
} Obj;

extern void KeQuerySystemTime(__int64 *t);
extern void fn_82A2C8E0(__int64 t, unsigned int *out);
extern int fn_82A30A08(void *a, Obj *o, void *c, int d);
extern void fn_82A30700(void *a, Obj *o, int d);

void fn_82A30FF8(void *a, Obj *o, void *c)
{
    __int64 t;
    unsigned int ms;

    o->f18 = 0;
    o->f1c = 0;
    KeQuerySystemTime(&t);
    fn_82A2C8E0(t, &ms);
    o->f40 = ms;
    o->f44 = ms;
    if (fn_82A30A08(a, o, c, 0) >= 0) {
        fn_82A30700(a, o, 0);
    }
}
