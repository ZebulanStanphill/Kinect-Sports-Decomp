/* Stores a scalar, its 16-bit fixed-point copy (x 16) and marks the value as changed. */
typedef union Value_82638958 {
    float scalar;
    unsigned int bits;
} Value_82638958;

typedef struct Object_82638958 {
    char padding[0x18];
    unsigned __int64 flags; /* 0x18 */
    char padding20[0x2948];
    short packed; /* 0x2968 */
    char paddingPacked[0x5c2];
    float scalar; /* 0x2f2c */
} Object_82638958;

static __forceinline void SetFlags(unsigned __int64 *flags, unsigned __int64 mask)
{
    *flags |= mask;
}

void fn_82638958(Object_82638958 *self, Value_82638958 value)
{
    self->scalar = value.scalar;
    self->packed = (short)(int)(value.scalar * 16.0f);
    SetFlags(&self->flags, 0x20000000000000ULL);
}
