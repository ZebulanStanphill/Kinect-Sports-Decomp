typedef struct Stack_8302C580 {
    unsigned int count;             /* 0x00 */
    unsigned short values[32];      /* 0x04 */
    unsigned int flags;             /* 0x44 */
} Stack_8302C580;

static __forceinline void SetBit(unsigned int *bits, unsigned int bit, unsigned char on)
{
    if (on)
        *bits |= 1 << bit;
    else
        *bits &= ~(1 << bit);
}

void fn_8302C580(Stack_8302C580 *s, unsigned short value, unsigned char set)
{
    if (s->count < 32) {
        SetBit(&s->flags, s->count, set);
        s->values[s->count] = value;
        s->count++;
    } else {
        s->count++;
    }
}
