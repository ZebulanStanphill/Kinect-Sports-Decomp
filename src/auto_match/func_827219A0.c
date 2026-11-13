typedef struct Pair_827219A0 { unsigned first; unsigned second; unsigned char flags; char pad[7]; } Pair_827219A0;
typedef struct Obj_827219A0 { char pad[0x48]; unsigned value; } Obj_827219A0;

extern void fn_827210C8(void);
extern void *fn_82695598(void *out, void *arg, void (*fn)(void));
extern Pair_827219A0 *fn_82696B20(Pair_827219A0 *p, void *v, void *env);
extern void fn_826824B0(unsigned);
extern void fn_82696330(void *);

int fn_827219A0(Obj_827219A0 *self, void *arg)
{
    unsigned char tmp[16];
    Pair_827219A0 pair;
    int r;

    r = self->value != fn_82696B20(&pair, fn_82695598(tmp, arg, fn_827210C8), 0)->first;
    if ((pair.flags & 2) == 0 && pair.first != 0)
        fn_826824B0(pair.first);
    pair.first = 0;
    if ((pair.flags & 1) == 0 && pair.second != 0)
        fn_826824B0(pair.second);
    pair.second = 0;
    fn_82696330(tmp);
    return r;
}
