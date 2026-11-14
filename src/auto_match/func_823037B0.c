typedef struct Target_823037B0 {
    char pad0[0x108];
    float a;            /* 0x108 */
    float b;            /* 0x10c */
} Target_823037B0;

typedef struct Self_823037B0 {
    char pad0[0x50];
    int f50;                    /* 0x50 */
    Target_823037B0 *target;    /* 0x54 */
    char pad58[0x6c - 0x58];
    char ref[0xc4 - 0x6c];      /* 0x6c */
    unsigned char busy;         /* 0xc4 */
    char padc5[0x104 - 0xc5];
    float a;                    /* 0x104 */
    float b;                    /* 0x108 */
} Self_823037B0;

extern void fn_8250EC68(void *ref);

void fn_823037B0(Self_823037B0 *self)
{
    Target_823037B0 *target = self->target;

    self->f50 = 0;
    target->a = self->a;
    target->b = self->b;
    if (self->busy == 0)
        fn_8250EC68(self->ref);
}
