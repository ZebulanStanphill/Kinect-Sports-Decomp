typedef struct Entry_826200B0 {
    char pad0[0x8];
    unsigned int mask; /* 0x08 */
    char padc[0x10];
    float value; /* 0x1c */
    char pad20[0x8];
} Entry_826200B0;

typedef struct EntryList_826200B0 {
    int current;               /* 0x00 */
    Entry_826200B0 entries[1]; /* 0x04 */
} EntryList_826200B0;

typedef struct State_826200B0 {
    char pad0[0x10];
    EntryList_826200B0 list; /* 0x10 */
} State_826200B0;

typedef struct Filter_826200B0 {
    char pad0[0x10];
    unsigned int mask;      /* 0x10 */
    unsigned int extraMask; /* 0x14 */
} Filter_826200B0;

typedef struct Owner_826200B0 {
    char pad0[0x1d4];
    int f1d4; /* 0x1d4 */
    char pad1d8[0xc];
    int f1e4; /* 0x1e4 */
} Owner_826200B0;

typedef struct Globals_826200B0 {
    int pad0[7];
    unsigned int disabled; /* 0x1c */
} Globals_826200B0;

extern Globals_826200B0 lbl_8326B4BC;
extern const float lbl_82193CF0[10];
extern const float lbl_821954B0[];

static __forceinline Entry_826200B0 *CurrentEntry(EntryList_826200B0 *list)
{
    return &list->entries[list->current];
}

static __forceinline float CurrentValue(State_826200B0 *state)
{
    if (lbl_8326B4BC.disabled == 0)
        return CurrentEntry(&state->list)->value;
    return 0.0f;
}

static __forceinline unsigned int CurrentMask(State_826200B0 *state, unsigned int mask)
{
    if (lbl_8326B4BC.disabled == 0)
        return CurrentEntry(&state->list)->mask & mask;
    return 0;
}

int fn_826200B0(Owner_826200B0 *self, Filter_826200B0 *filter, State_826200B0 *state, int test, int alt)
{
    float value;

    if (state == 0)
        return 0;
    value = CurrentValue(state);
    switch (test) {
    case 1:
        return value > lbl_82193CF0[5];
    case 2:
        return value < lbl_821954B0[0xa2];
    case 3:
        if (alt != 0)
            return self->f1e4;
        return self->f1d4;
    case 4:
        return CurrentMask(state, filter->mask) != 0;
    case 5:
        return CurrentMask(state, filter->mask) != 0 || CurrentMask(state, filter->extraMask) != 0;
    }
    return 0;
}
