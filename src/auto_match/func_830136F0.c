typedef unsigned U;
typedef struct Pair_830136F0 { U a; U b; } Pair_830136F0;
extern U *lbl_832645E4[2];
extern int fn_82FFE5B8(U **v, U key, Pair_830136F0 value);

static __forceinline U *Find(U **self, U key)
{
    U *end = self[1], *p = self[0];
    for (; p != end && *p != key; p += 3) {}
    return (p != end) != 0 ? p + 1 : 0;
}

int fn_830136F0(int a, int b, U c, U d)
{
    U key = ((b << 12) + a) * 16 + 1;
    if (Find(lbl_832645E4, key))
        return 2;
    if (c != 0 && d != 0) {
        Pair_830136F0 v;
        v.a = c;
        v.b = d;
        return (fn_82FFE5B8(lbl_832645E4, key, v) == 0) + 1;
    }
    return 0x1f;
}
