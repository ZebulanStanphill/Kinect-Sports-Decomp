typedef struct State_82C3F390 {
    int count; /* 0x0 */
    int bytes; /* 0x4 */
    int words; /* 0x8 */
    int size;  /* 0xc */
    int unused10;
    int bitCount;          /* 0x14 */
    unsigned int mask;     /* 0x18 */
    unsigned short first;  /* 0x1c */
    unsigned short second; /* 0x1e */
    int remaining;         /* 0x20 */
    void *table;           /* 0x24 */
    void *flags;           /* 0x28 */
    int unused2c;
    unsigned short *data;   /* 0x30 */
    unsigned short *source; /* 0x34 */
} State_82C3F390;

typedef struct Owner_82C3F390 {
    char pad00[0x2cc];
    int mode;
} Owner_82C3F390;

extern void *memset(void *data, int value, unsigned int size);

int fn_82C3F390(Owner_82C3F390 *owner, State_82C3F390 *state)
{
    int count = state->count;
    int index;
    state->words = count >> 4;
    state->bytes = count >> 3;
    state->remaining = count;
    memset(state->data, 0, count * 2);
    if (owner->mode == 1) {
        for (index = 0; index < state->size; index++) {
            state->data[index] = state->source[index];
        }
    }
    memset(state->table, 0, 0x800);
    memset(state->flags, 0, 0x400);
    state->first = 1;
    state->second = 8;
    state->mask = 1 << (state->bitCount - 1);
    return 0;
}
