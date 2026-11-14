typedef struct State_8226A680 {
    char pad0[0x2b8];
    int dirty;
    void **items;
    char pad2c0[0x390 - 0x2c0];
    int cursor;
} State_8226A680;

typedef struct Owner_8226A680 {
    int unk0;
    State_8226A680 *state;
} Owner_8226A680;

static __forceinline void **Next(void **p)
{
    if (p[1] != 0) return p + 1;
    return 0;
}

void fn_8226A680(Owner_8226A680 *self)
{
    State_8226A680 *s = self->state;
    int count = 0;
    void **p = s->items;
    int cursor = ++s->cursor;
    for (; p != 0 && *p != 0; p = Next(p))
        count++;
    if (cursor == count)
        s->cursor = 0;
    s->dirty = 1;
}
