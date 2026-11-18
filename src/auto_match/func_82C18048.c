typedef struct Scaler_82C18048 {
    char pad0[0x13c];
    int doubled; /* 0x13c */
    char pad140[4];
    int rescaled;   /* 0x144 */
    int divisor;    /* 0x148 */
    int multiplier; /* 0x14c */
    char pad150[4];
    int offset; /* 0x154 */
} Scaler_82C18048;

int fn_82C18048(Scaler_82C18048 *self, int value)
{
    int result = value;

    if (self->doubled != 0 && value > 0) {
        result = value * 2;
    } else if (self->rescaled != 0 && value > 0) {
        result = (self->multiplier * value - self->offset) / self->divisor + 1;
    }
    return result;
}
