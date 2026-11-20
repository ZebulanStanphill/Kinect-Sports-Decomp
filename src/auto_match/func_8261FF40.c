typedef struct Entry_8261FF40 {
    unsigned int mask; /* 0x00 */
    char pad4[0x18];
    float value; /* 0x1c */
    char pad20[0x8];
} Entry_8261FF40;

typedef struct EntryList_8261FF40 {
    int current;               /* 0x00 */
    Entry_8261FF40 entries[1]; /* 0x04 */
} EntryList_8261FF40;

typedef struct State_8261FF40 {
    char pad0[0x10];
    EntryList_8261FF40 list; /* 0x10 */
} State_8261FF40;

typedef struct Filter_8261FF40 {
    char pad0[0x10];
    unsigned int mask;      /* 0x10 */
    unsigned int extraMask; /* 0x14 */
} Filter_8261FF40;

typedef struct Owner_8261FF40 {
    char pad0[0x1d0];
    float position; /* 0x1d0 */
    char pad1d4[0x4];
    int f1d8; /* 0x1d8 */
} Owner_8261FF40;

typedef struct Globals_8261FF40 {
    int pad0[7];
    unsigned int disabled; /* 0x1c */
} Globals_8261FF40;

extern Globals_8261FF40 lbl_8326B4BC;
extern const float lbl_82193CF0[10];
extern const float lbl_821954B0[];

static __forceinline Entry_8261FF40 *CurrentEntry(EntryList_8261FF40 *list)
{
    return &list->entries[list->current];
}

static __forceinline float CurrentValue(State_8261FF40 *state)
{
    if (lbl_8326B4BC.disabled == 0)
        return CurrentEntry(&state->list)->value;
    return 0.0f;
}

static __forceinline unsigned int CurrentMask(State_8261FF40 *state, unsigned int mask)
{
    if (lbl_8326B4BC.disabled == 0)
        return CurrentEntry(&state->list)->mask & mask;
    return 0;
}

int fn_8261FF40(Owner_8261FF40 *self, Filter_8261FF40 *filter, State_8261FF40 *state, int test)
{
    float value;

    if (state == 0)
        return 0;
    value = CurrentValue(state);
    switch (test) {
    case 1:
        return value > lbl_82193CF0[5] && self->position < lbl_82193CF0[5];
    case 2:
        return value < lbl_821954B0[0xa2] && self->position > lbl_821954B0[0xa2];
    case 3:
        return self->f1d8;
    case 4:
        return CurrentMask(state, filter->mask) != 0;
    case 5:
        return CurrentMask(state, filter->mask) != 0 || CurrentMask(state, filter->extraMask) != 0;
    }
    return 0;
}
