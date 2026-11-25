typedef struct Slot_8246B178 {
    unsigned int first;
} Slot_8246B178;

typedef union Bits_8246B178 {
    unsigned int u;
    float f;
} Bits_8246B178;

extern int fn_824656C8(int min, int max, int exclude);
extern unsigned int lbl_83265A28;

static __forceinline int Valid(Slot_8246B178 *slot)
{
    if (slot == 0) {
        return 0;
    }
    return slot->first != 0;
}

static __forceinline int RandomBelow(int range)
{
    Bits_8246B178 r;

    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    r.u = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
    return (int)((r.f - 1.0f) * (float)range);
}

/* Picks a random valid slot, preferring one other than *selected, and stores its index there. */
Slot_8246B178 *fn_8246B178(Slot_8246B178 *slots, unsigned int count, int *selected)
{
    unsigned int valid;
    unsigned int i;
    int pick;

    valid = 0;
    for (i = 0; i < count; i++) {
        if (Valid(&slots[i])) {
            valid++;
        }
    }
    if (*selected >= 0 && valid > 1) {
        pick = fn_824656C8(0, valid, *selected);
    } else {
        pick = RandomBelow(valid);
    }
    for (i = 0; i < count; i++) {
        if (Valid(&slots[i]) && i == pick) {
            *selected = pick;
            return &slots[i];
        }
    }
    return 0;
}
