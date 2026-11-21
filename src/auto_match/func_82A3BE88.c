typedef struct Decoder_82A3BE88 {
    char pad0[0x24];
    unsigned int *offsets; /* 0x24 */
    char pad28[0x8];
    unsigned int recent[3]; /* 0x30 */
} Decoder_82A3BE88;

void fn_82A3BE88(Decoder_82A3BE88 *self, int count)
{
    int i;
    unsigned char run;
    unsigned int offset;
    unsigned int previous;

    run = 0;
    for (i = count - 1; i >= 0; i--) {
        if (self->offsets[i] > 2) {
            run++;
            if (run >= 3) {
                break;
            }
        } else {
            run = 0;
        }
    }
    i = run >= 3 ? i : 0;
    for (; i < count; i++) {
        offset = self->offsets[i];
        if (offset != 0) {
            if (offset <= 2) {
                previous = self->recent[offset];
                self->recent[offset] = self->recent[0];
                self->recent[0] = previous;
            } else {
                self->recent[2] = self->recent[1];
                self->recent[1] = self->recent[0];
                self->recent[0] = offset - 2;
            }
        }
    }
}
