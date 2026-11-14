typedef struct Clock_8303A128 {
    char pad0[0x24];
    unsigned int rate;      /* 0x24 */
} Clock_8303A128;

extern float lbl_82054148;

void fn_8303A128(Clock_8303A128 *self, unsigned int *value)
{
    *value = (unsigned int)((float)*value / ((float)self->rate * lbl_82054148) + 0.5f);
}
