#include "xdk/vectorintrinsics.h"

typedef struct Matrix_82475788 {
    __vector4 r[4];
} Matrix_82475788;

typedef struct Sub_82475788 {
    char pad[0x1bc];
    int active; /* 0x1bc */
} Sub_82475788;

typedef struct Thing_82475788 {
    char pad[0x50];
    __vector4 position; /* 0x50 */
    char pad60[0x860];
    Sub_82475788 *sub; /* 0x8c0 */
} Thing_82475788;

typedef struct Slot_82475788 {
    Thing_82475788 **thing; /* 0x00 */
    char pad4[0x14];
} Slot_82475788;

typedef struct Self_82475788 {
    char pad[0x54];
    Slot_82475788 slots[2]; /* 0x54 */
} Self_82475788;

typedef struct Manager_82475788 {
    char pad[0xf4];
    int fade; /* 0xf4 */
    char padf8[8];
    float volume; /* 0x100 */
} Manager_82475788;

extern Matrix_82475788 lbl_83296890[];
extern Manager_82475788 *lbl_8327F844;

extern int fn_82475290(int index);
extern void fn_8252CAF8(Thing_82475788 *thing, int index, unsigned char on);
extern void fn_82530258(Matrix_82475788 m, __vector4 position);

static __forceinline Matrix_82475788 Multiply(const Matrix_82475788 *a, const Matrix_82475788 *b)
{
    Matrix_82475788 m;
    __vector4 t0, t1, t2, t3, c0, c1, c2, c3;
    __vector4 x, y, z, w;

    t0 = __vmrghw(b->r[0], b->r[2]);
    t1 = __vmrghw(b->r[1], b->r[3]);
    t2 = __vmrglw(b->r[0], b->r[2]);
    t3 = __vmrglw(b->r[1], b->r[3]);
    c0 = __vmrghw(t0, t1);
    c1 = __vmrglw(t0, t1);
    c2 = __vmrghw(t2, t3);
    c3 = __vmrglw(t2, t3);
    x = __vmsum4fp(a->r[0], c0);
    y = __vmsum4fp(a->r[0], c1);
    z = __vmsum4fp(a->r[0], c2);
    w = __vmsum4fp(a->r[0], c3);
    m.r[0] = __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
    x = __vmsum4fp(a->r[1], c0);
    y = __vmsum4fp(a->r[1], c1);
    z = __vmsum4fp(a->r[1], c2);
    w = __vmsum4fp(a->r[1], c3);
    m.r[1] = __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
    x = __vmsum4fp(a->r[2], c0);
    y = __vmsum4fp(a->r[2], c1);
    z = __vmsum4fp(a->r[2], c2);
    w = __vmsum4fp(a->r[2], c3);
    m.r[2] = __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
    x = __vmsum4fp(a->r[3], c0);
    y = __vmsum4fp(a->r[3], c1);
    z = __vmsum4fp(a->r[3], c2);
    w = __vmsum4fp(a->r[3], c3);
    m.r[3] = __vmrghw(__vmrghw(x, z), __vmrghw(y, w));
    return m;
}

static __forceinline float Clamp01(float v)
{
    v = v >= 0.0f ? v : 0.0f;
    return v - 1.0f >= 0.0f ? 1.0f : v;
}

void fn_82475788(Self_82475788 *self, int player, float volume)
{
    int i;
    int isPlayer;
    int ready;
    Manager_82475788 *manager;
    Matrix_82475788 m;

    for (i = 0; i < 2; i++) {
        if (self->slots[i].thing != 0) {
            isPlayer = i == player;
            ready = fn_82475290(i);
            fn_8252CAF8(*self->slots[i].thing, 2, ready != 0);
            fn_8252CAF8(*self->slots[i].thing, 3, ready == 0 || !isPlayer);
            fn_8252CAF8(*self->slots[i].thing, 1, 0);
            (*self->slots[i].thing)->sub->active = isPlayer;
        }
    }
    manager = lbl_8327F844;
    if (self->slots[player].thing != 0) {
        m = Multiply(&lbl_83296890[0], &lbl_83296890[1]);
        if (manager != 0) {
            fn_82530258(m, (*self->slots[player].thing)->position);
        }
    }
    volume = Clamp01(volume);
    if (manager != 0) {
        manager->fade = 0;
        manager->volume = Clamp01(volume);
    }
}
