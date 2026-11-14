typedef struct State_825580C0 {
    int current;                /* 0x00 (of the first state) */
    unsigned int mask;          /* 0x04 */
    char pad8[0x20];
} State_825580C0;

typedef struct Player_825580C0 {
    char pad0[0x34];
    State_825580C0 states[1];   /* 0x34 */
} Player_825580C0;

typedef struct Players_825580C0 {
    char pad0[0xc];
    Player_825580C0 *player[4]; /* 0x0c */
    unsigned int locked;        /* 0x1c */
} Players_825580C0;

extern Players_825580C0 lbl_8326B4BC;

static __forceinline unsigned int Mask(Player_825580C0 *p)
{
    State_825580C0 *s = p->states;
    return s[s->current].mask;
}

unsigned int fn_825580C0(unsigned int index, unsigned int mask)
{
    unsigned int result = 0;
    int i;

    if (lbl_8326B4BC.locked == 0) {
        if (index != 4) {
            result = Mask(lbl_8326B4BC.player[index]) & mask;
        } else {
            for (i = 0; i < 4; i++) {
                Player_825580C0 *p = lbl_8326B4BC.player[i];
                if (p != 0)
                    result |= Mask(p) & mask;
            }
        }
    }
    return result;
}
