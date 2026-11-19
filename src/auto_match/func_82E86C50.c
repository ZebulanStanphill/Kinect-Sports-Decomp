typedef struct Pad_82E86C50 {
    char pad0[0x978];
    int state;             /* 0x978 */
    int enabled;           /* 0x97c */
    unsigned char mode;    /* 0x980 */
    unsigned char channel; /* 0x981 */
    char pad982[2];
    int directions; /* 0x984 */
    char pad988[0x1ebc - 0x988];
    void *output; /* 0x1ebc */
} Pad_82E86C50;

extern void fn_82F02410(void *output, int value, int bitCount);
extern void fn_82F15A98(Pad_82E86C50 *self, unsigned char channel, int flag);

void fn_82E86C50(Pad_82E86C50 *self)
{
    int value;
    int bitCount;

    if (self->state == 2) {
        fn_82F15A98(self, self->channel, 1);
        return;
    }
    fn_82F02410(self->output, self->enabled, 1);
    if (self->enabled == 0) {
        return;
    }
    if (self->directions == 0xf) {
        value = 0;
        bitCount = 2;
    } else if ((self->directions & 5) != 0 && (self->directions & 0xa) != 0) {
        fn_82F02410(self->output, 1, 2);
        if (self->directions == 3) {
            value = 0;
        } else if (self->directions == 6) {
            value = 1;
        } else if (self->directions == 0xc) {
            value = 2;
        } else {
            value = self->directions == 9 ? 3 : 0;
        }
        bitCount = 2;
    } else if ((self->directions & 5) != 0 || (self->directions & 0xa) != 0) {
        fn_82F02410(self->output, 2, 2);
        if (self->directions == 1) {
            value = 0;
        } else if (self->directions == 2) {
            value = 1;
        } else if (self->directions == 4) {
            value = 2;
        } else {
            value = self->directions == 8 ? 3 : 0;
        }
        bitCount = 2;
    } else {
        fn_82F02410(self->output, 3, 2);
        value = self->mode == 1;
        bitCount = 1;
    }
    fn_82F02410(self->output, value, bitCount);
    if (self->mode != 1 && self->directions == 0) {
        return;
    }
    fn_82F15A98(self, self->channel, 1);
}
