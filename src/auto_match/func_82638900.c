/* Stores a scalar, its 16-bit fixed-point copy (x 16) and marks the value as changed. */
typedef union Value_82638900 {
    float scalar;
    unsigned int bits;
} Value_82638900;

typedef struct Object_82638900 {
    char padding[0x18];
    unsigned __int64 flags; /* 0x18 */
    char padding20[0x294a];
    short packed; /* 0x296a */
    char paddingPacked[0x5bc];
    float scalar; /* 0x2f28 */
} Object_82638900;

static __forceinline void SetFlags(unsigned __int64 *flags, unsigned __int64 mask)
{
    *flags |= mask;
}

void fn_82638900(Object_82638900 *self, Value_82638900 value)
{
    self->scalar = value.scalar;
    self->packed = (short)(int)(value.scalar * 16.0f);
    SetFlags(&self->flags, 0x20000000000000ULL);
}
