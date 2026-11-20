typedef struct Flags_827F2E40 {
    char pad00[0x51];
    unsigned char set[1];   /* 0x51 */
    unsigned char clear[1]; /* 0x52 */
    unsigned char index;    /* 0x53 */
} Flags_827F2E40;

extern void fn_827F2C38(Flags_827F2E40 *self);

static __forceinline void Set(unsigned char *bits, unsigned int index)
{
    unsigned int byte = index >> 3;
    unsigned int bit = index & 7;
    bits[byte] |= 1 << bit;
}

static __forceinline void Clear(unsigned char *bits, unsigned int index)
{
    unsigned int byte = index >> 3;
    unsigned int bit = index & 7;
    bits[byte] &= ~(1 << bit);
}

void fn_827F2E40(Flags_827F2E40 *self)
{
    fn_827F2C38(self);
    Clear(self->set, self->index);
    Set(self->clear, self->index);
}
