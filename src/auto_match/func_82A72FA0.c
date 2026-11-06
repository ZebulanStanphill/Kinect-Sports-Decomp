typedef struct State_82A72FA0 {
    char pad[0x2da];
    unsigned short maxLen;
} State_82A72FA0;

typedef struct Ctx_82A72FA0 {
    State_82A72FA0 *state;
} Ctx_82A72FA0;

typedef struct Item_82A72FA0 {
    char pad0[0x24];
    int f24;
    int f28;
    char pad2c[0x1ea - 0x2c];
    unsigned short len;
} Item_82A72FA0;

extern int fn_82A72A10(Ctx_82A72FA0 *c, Item_82A72FA0 *it, int a, int b);

static __forceinline unsigned short Max_82A72FA0(unsigned short a, unsigned short b)
{
    if (b > a) {
        return b;
    }
    return a;
}

int fn_82A72FA0(Ctx_82A72FA0 *c, Item_82A72FA0 *it)
{
    State_82A72FA0 *s = c->state;
    int hr = 0;

    if (it->f28 != 0) {
        hr = fn_82A72A10(c, it, 0, it->f24);
        if (hr >= 0) {
            s->maxLen = Max_82A72FA0(it->len, s->maxLen);
        }
    }
    return hr;
}
