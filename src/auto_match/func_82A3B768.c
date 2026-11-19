typedef struct Context_82A3B768 {
    char pad0[0x554];
    unsigned char base; /* 0x554 */
    char pad555[0x868 - 0x555];
    unsigned int count; /* 0x868 */
    char pad86c[0x2530 - 0x86c];
    unsigned char kinds[0x2bd]; /* 0x2530 */
    unsigned char extra[0xf9];  /* 0x27ed */
} Context_82A3B768;

void fn_82A3B768(Context_82A3B768 *self)
{
    unsigned int i;

    for (i = 0; i < 0x100; i++) {
        if (self->kinds[i] == 0) {
            self->kinds[i] = 0xb;
        }
    }
    for (; i < (self->count + 0x20) * 8; i++) {
        if (self->kinds[i] == 0) {
            self->kinds[i] = 0xc;
        }
    }
    for (i = 0; i < 0xf9; i++) {
        if (self->extra[i] == 0) {
            self->extra[i] = 8;
        }
    }
    for (i = self->base + 0x12; i < self->count; i++) {
        self->kinds[(i + 0x20) * 8] = 100;
    }
}
