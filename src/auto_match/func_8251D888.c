typedef struct Inner_8251D888 {
    char pad0[0x10];
    int stack[5]; /* 0x10 */
    int count;    /* 0x24 */
} Inner_8251D888;

typedef struct Entry_8251D888 {
    int pad0;
    Inner_8251D888 *inner; /* 0x04 */
    int pad8;
    int active; /* 0x0c */
    char pad10[0x20];
} Entry_8251D888;

typedef struct Globals_8251D888 {
    char pad0[0x28];
    Entry_8251D888 entries[4]; /* 0x28 */
    int padE8[2];
    Entry_8251D888 *current; /* 0xf0 */
} Globals_8251D888;

extern Globals_8251D888 lbl_832960A0;

static __forceinline int IsTop(Inner_8251D888 *o, int value)
{
    int n;

    n = o->count;
    if (n > 0 && n < 4) {
        return o->stack[n] == value;
    }
    return 0;
}

static __forceinline int IsValue(int a, int b)
{
    if (a == b)
        return 1;
    return 0;
}

static __forceinline int CanEnter(Inner_8251D888 *o)
{
    int n;

    if (o->stack[0] != 1) {
        return 1;
    }
    n = o->count;
    if (n > 0 && n < 4) {
        return !IsValue(o->stack[n], 1);
    }
    return 0;
}

static __forceinline int MustWait(Inner_8251D888 *o)
{
    if (o->stack[0] != 1) {
        return IsTop(o, 1);
    }
    return 0;
}

void fn_8251D888(void)
{
    Entry_8251D888 *e;
    Inner_8251D888 *o;
    int i;

    for (i = 0; i < 4; i++) {
        o = lbl_832960A0.entries[i].inner;
        e = &lbl_832960A0.entries[i];
        if (o == 0) {
            continue;
        }
        if (lbl_832960A0.current != e && e->active == 0) {
            continue;
        }
        if (!CanEnter(o)) {
            continue;
        }
        if (MustWait(o)) {
            continue;
        }
        if (o->count <= 0 || o->stack[o->count] != 1) {
            o->stack[o->count + 1] = 1;
            o->count = o->count + 1;
        }
    }
}
