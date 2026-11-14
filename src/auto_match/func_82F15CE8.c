typedef struct Encoder_82F15CE8 {
    char pad0[0x588];
    int count;              /* 0x588 */
    char pad58c[4];
    int base;               /* 0x590 */
    char pad594[0x980 - 0x594];
    unsigned char mode;     /* 0x980 */
    char pad981[3];
    int disabled;           /* 0x984 */
    char pad988[0x1ebc - 0x988];
    void *bits;             /* 0x1ebc */
} Encoder_82F15CE8;

extern void fn_82F02410(void *bits, unsigned int value, int count);
extern void fn_82F15A98(Encoder_82F15CE8 *self, int value, int flag);

void fn_82F15CE8(Encoder_82F15CE8 *self, int value)
{
    if (self->disabled != 0)
        return;
    if (self->mode == 1)
        fn_82F02410(self->bits, value != self->count * 2 + self->base - 1, 1);
    else
        fn_82F15A98(self, (value + 1) >> 1, 0);
}
