typedef unsigned U;
extern U *lbl_832645F0[2];
extern int fn_83013B98(U **v, U key, int c);

static __forceinline U *Find(U **self, U key)
{
    U *end = self[1], *p = self[0];
    for (; p != end && *p != key; p += 2) {}
    return (p != end) != 0 ? p + 1 : 0;
}

int fn_830139F8(int a, int b, int c)
{
    U key = ((b << 12) + a) * 16 + 4;
    if (Find(lbl_832645F0, key))
        return 2;
    fn_83013B98(lbl_832645F0, key, c);
    return 1;
}
