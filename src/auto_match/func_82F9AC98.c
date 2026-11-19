/* Clears a decoder's state: the shared history buffer, then per group of four channels its float
   state and history buffer, and the trailing gains. */
typedef struct Group_82F9AC98 {
    int pad0[3];
    unsigned int frames; /* 0xc */
} Group_82F9AC98;

typedef struct State_82F9AC98 {
    float values[4];
} State_82F9AC98;

typedef struct Decoder_82F9AC98 {
    char pad0[0x14];
    unsigned int channels; /* 0x14 */
    char pad18[0x74 - 0x18];
    void *history; /* 0x74 */
    char pad78[8];
    unsigned int historySize; /* 0x80 */
    char pad84[8];
    float level;              /* 0x8c */
    Group_82F9AC98 groups[8]; /* 0x90 */
    void *buffers[8];         /* 0x110 */
    char pad130[0x1c0 - 0x130];
    State_82F9AC98 states[4]; /* 0x1c0 */
    float gain[2];            /* 0x200 */
} Decoder_82F9AC98;

extern void *XMemSet(void *dest, int value, unsigned int count);

int fn_82F9AC98(Decoder_82F9AC98 *self)
{
    unsigned int i;

    if (self->history != 0)
        XMemSet(self->history, 0, self->historySize * 4);
    self->level = 0.0f;
    for (i = 0; i < self->channels / 4; i++) {
        self->states[i].values[0] = 0.0f;
        self->states[i].values[1] = 0.0f;
        self->states[i].values[2] = 0.0f;
        self->states[i].values[3] = 0.0f;
        if (self->buffers[i] != 0)
            XMemSet(self->buffers[i], 0, self->groups[i].frames * 16);
    }
    self->gain[0] = 0.0f;
    self->gain[1] = 0.0f;
    return 1;
}
