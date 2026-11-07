typedef struct State_82A31CB8 {
    unsigned char pad0[0x18];
    unsigned int value;         /* 0x18 */
    unsigned char pad1c[0x35 - 0x1C];
    unsigned char flags;        /* 0x35 */
} State_82A31CB8;

extern int fn_82A30780(void *ctx, State_82A31CB8 *s);
extern int fn_82A30A08(void *ctx, State_82A31CB8 *s, unsigned int value, int flag);

int fn_82A31CB8(void *ctx, State_82A31CB8 *s, int *req)
{
    unsigned int newValue;
    unsigned int oldValue;
    int hr;

    if (req[0] != 0) {
        return (int)0xC000007F;
    }
    newValue = (unsigned int)req[1];
    oldValue = s->value;
    if (newValue != oldValue) {
        hr = fn_82A30780(ctx, s);
        if (hr < 0) {
            return hr;
        }
        if (newValue > oldValue) {
            hr = fn_82A30A08(ctx, s, newValue, 1);
            if (hr < 0) {
                return hr;
            }
        }
        s->value = newValue;
        s->flags |= 0x10;
    }
    return 0;
}
