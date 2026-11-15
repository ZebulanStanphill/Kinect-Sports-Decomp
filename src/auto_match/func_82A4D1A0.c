extern long _InterlockedExchange(long *, long);

typedef struct Value_82A4D1A0 {
    unsigned int first;
    float second;
    float third;
} Value_82A4D1A0;

typedef struct State_82A4D1A0 {
    char pad[0x1c];
    unsigned int first;
    unsigned int second;
    unsigned int third;
    char gap[0x18];
    long pending;
    Value_82A4D1A0 *current;
} State_82A4D1A0;

void fn_82A4D1A0(State_82A4D1A0 *self, const Value_82A4D1A0 *value)
{
    if (!self->current)
        self->current = (Value_82A4D1A0 *)_InterlockedExchange(&self->pending, -1);
    *self->current = *value;
    self->first = value->first;
    {
        union Bits_82A4D1A0 {
            float number;
            unsigned int bits;
        } bits;

        bits.number = value->second;
        self->second = bits.bits;
    }
    {
        union Bits_82A4D1A0 {
            float number;
            unsigned int bits;
        } bits;

        bits.number = value->third;
        self->third = bits.bits;
    }
}
