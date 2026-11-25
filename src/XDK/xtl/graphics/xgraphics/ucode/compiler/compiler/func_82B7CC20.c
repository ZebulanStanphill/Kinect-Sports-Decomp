typedef void *(*AllocFn_82B7CC20)(void *context, unsigned int size);

typedef struct Limits_82B7CC20 {
    void *vtable; /* 0x00 */
    int unk04;    /* 0x04 */
    int unk08;    /* 0x08 */
    int unk0C;    /* 0x0C */
    int unk10;    /* 0x10 */
    int unk14;    /* 0x14 */
    int unk18;    /* 0x18 */
    int unk1C;    /* 0x1C */
    int unk20;    /* 0x20 */
    int unk24;    /* 0x24 */
    int unk28;    /* 0x28 */
    int unk2C;    /* 0x2C */
    int unk30;    /* 0x30 */
} Limits_82B7CC20;

typedef struct Compiler_82B7CC20 {
    int flags; /* 0x000 */
    char pad004[0x54c];
    Limits_82B7CC20 *limits; /* 0x550 */
    char pad554[4];
    unsigned char unk558; /* 0x558 */
    char pad559[0xf];
    int unk568; /* 0x568 */
    char pad56c[0x30];
    int unk59C;             /* 0x59C */
    AllocFn_82B7CC20 alloc; /* 0x5A0 */
    void *allocContext;     /* 0x5A4 */
    int unk5A8;             /* 0x5A8 */
    int unk5AC;             /* 0x5AC */
    int unk5B0;             /* 0x5B0 */
    char pad5b4[0x29c];
    unsigned char unk850; /* 0x850 */
    unsigned char unk851; /* 0x851 */
    char pad852[6];
    unsigned int unk858; /* 0x858 */
    char pad85c[0x23c];
    int unkA98; /* 0xA98 */
    int unkA9C; /* 0xA9C */
    int unkAA0; /* 0xAA0 */
    int unkAA4; /* 0xAA4 */
    int unkAA8; /* 0xAA8 */
    char padaac[4];
    int unkAB0; /* 0xAB0 */
} Compiler_82B7CC20;

extern char lbl_820DB518[];
extern void fn_82B7C9B8(Compiler_82B7CC20 *self);
extern void fn_82B7CA68(Compiler_82B7CC20 *self);

void fn_82B7CC20(Compiler_82B7CC20 *self, void *allocContext, AllocFn_82B7CC20 alloc, int arg59C, int flags,
                 int arg568)
{
    Limits_82B7CC20 *memory;
    Limits_82B7CC20 *limits;

    self->allocContext = allocContext;
    self->unk568 = arg568;
    self->unk59C = arg59C;
    self->alloc = alloc;
    self->unk558 = 1;
    self->unkA98 = 0x7fffffff;
    self->unk850 = 1;
    self->unk851 = 1;
    self->unkAB0 = 0;
    self->unk858 = 0xefba;
    self->unkA9C = 0x7fffffff;
    self->unkAA0 = 0x7fffffff;
    self->unkAA4 = 0x7fffffff;
    self->unkAA8 = 0x10;
    self->flags = flags;
    memory = (Limits_82B7CC20 *)alloc(allocContext, 0x34);
    if (memory != 0) {
        memory->unk04 = 0x40;
        memory->unk0C = 0xfff;
        memory->unk10 = 4;
        memory->unk08 = 0x10;
        memory->unk20 = 0x100;
        memory->unk14 = 0xfff;
        memory->unk18 = 0x20;
        memory->vtable = lbl_820DB518;
        memory->unk28 = 0x100;
        memory->unk1C = 4;
        memory->unk24 = 0x10;
        limits = memory;
    } else {
        limits = 0;
    }
    self->limits = limits;
    self->unk5A8 = 0;
    self->unk5AC = 0;
    self->unk5B0 = 0;
    fn_82B7C9B8(self);
    fn_82B7CA68(self);
}
