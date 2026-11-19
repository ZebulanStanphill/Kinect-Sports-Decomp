typedef struct Band_82FC85F8 {
    float gain;      /* 0x00 */
    float frequency; /* 0x04 */
    float width;     /* 0x08 */
    float level;     /* 0x0c */
    int state0;      /* 0x10 */
    int state1;      /* 0x14 */
} Band_82FC85F8;

typedef struct Filter_82FC85F8 {
    const void *vtable;     /* 0x00 */
    int unk4;               /* 0x04 */
    int unk8;               /* 0x08 */
    int unkC;               /* 0x0c */
    int unk10;              /* 0x10 */
    char pad14[0x10];       /* 0x14 */
    int unk24;              /* 0x24 */
    int unk28;              /* 0x28 */
    int unk2C;              /* 0x2c */
    int history[12];        /* 0x30 */
    char pad60[8];          /* 0x60 */
    int unk68;              /* 0x68 */
    Band_82FC85F8 bands[6]; /* 0x6c */
} Filter_82FC85F8;

extern const char lbl_8216DE30[];

void fn_82FC85F8(Filter_82FC85F8 *self)
{
    int i;

    self->vtable = lbl_8216DE30;
    for (i = 0; i < 6; i++) {
        self->bands[i].gain = 0.0f;
        self->bands[i].frequency = 0.0f;
        self->bands[i].width = 0.0f;
        self->bands[i].level = 0.0f;
        self->bands[i].state0 = 0;
        self->bands[i].state1 = 0;
    }
    self->unk4 = 0;
    self->unk10 = 0;
    self->unk28 = 0;
    self->unk24 = 0;
    self->unk2C = 0;
    self->unk8 = 0;
    self->unkC = 0;
    for (i = 0; i < 12; i++) {
        self->history[i] = 0;
    }
    self->unk68 = 0;
}
