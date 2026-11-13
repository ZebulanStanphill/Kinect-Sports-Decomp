typedef unsigned U;
typedef struct Self_82FB2488 {
    char pad0[0xb8];
    U *v[2];
} Self_82FB2488;
extern int fn_83013B98(U **v, U key, int c);
static __forceinline U *Find(U **self, U key)
{
    U *end = self[1], *p = self[0];
    for (; p != end && *p != key; p += 2) {}
    return (p != end) != 0 ? p + 1 : 0;
}
int fn_82FB2488(Self_82FB2488 *self, U key)
{
    U **v = self->v;
    if (!Find(v, key)) {
        return fn_83013B98(v, key, 0) == 0 ? 2 : 1;
    }
    return 1;
}
