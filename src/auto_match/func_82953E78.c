typedef struct Instr_82953E78 {
    char pad00[0x10];
    unsigned int type; /* 0x10 */
    char pad14[0x28];
    unsigned int flags3c; /* 0x3c */
} Instr_82953E78;

typedef struct Other_82953E78 {
    char pad00[0x3c];
    void *value; /* 0x3c */
} Other_82953E78;

typedef struct Compiler_82953E78 {
    char pad00[0x14];
    Instr_82953E78 **instrs; /* 0x14 */
    char pad18[0x54];
    unsigned int flags6c; /* 0x6c */
    char pad70[0x5c];
    unsigned int options; /* 0xcc */
    char padd0[0x34];
    Other_82953E78 *other; /* 0x104 */
    char pad108[0x20];
    unsigned int *outputs; /* 0x128 */
    int outputBase;        /* 0x12c */
} Compiler_82953E78;

extern int fn_82975B00(Compiler_82953E78 *compiler, void *value, int code, const char *format, ...);

int fn_82953E78(Compiler_82953E78 *compiler, unsigned int *ids, unsigned int count, unsigned int *outMask,
                int all)
{
    unsigned int format;
    unsigned int mask;
    unsigned int flags;
    unsigned int i;

    mask = 0;
    format = 0;
    flags = compiler->instrs[ids[0]]->flags3c;
    if ((flags & 0x400) != 0) {
        format = 0x1000000;
    } else if ((flags & 0x800) != 0) {
        format = 0x2000000;
    } else if ((flags & 0x1000) != 0) {
        format = 0x3000000;
    } else if ((flags & 0x2000) != 0) {
        format = 0xf000000;
    } else if ((flags & 0x4000) != 0) {
        format = 0xe000000;
    } else if ((flags & 0x8000) != 0) {
        format = 0xd000000;
    }
    if ((flags & 0x200) != 0) {
        format |= 0x100000;
    }
    if (all != 0) {
        mask = 0xf0000;
    } else {
        for (i = 0; i < count; i++) {
            unsigned int bit = 0;
            switch (compiler->instrs[ids[i]]->type) {
            case 0:
                bit = 0x10000;
                break;
            case 1:
                bit = 0x20000;
                break;
            case 2:
                bit = 0x40000;
                break;
            case 3:
                bit = 0x80000;
                break;
            }
            if ((bit & mask) != 0) {
                fn_82975B00(compiler, compiler->other->value, 0x12d5,
                            "internal error: overlapping output writes");
            }
            mask |= bit;
        }
    }
    if ((compiler->flags6c & 0x80) != 0) {
        if ((mask & 0x80000) == 0) {
            mask = 0x70000;
        } else if ((mask & 0x70000) != 0) {
            mask = 0xf0000;
        }
    }
    if ((compiler->options & 1) != 0 && compiler->outputs != 0) {
        for (i = 0; i < count; i++) {
            compiler->outputs[compiler->outputBase * 6 + i - 4] = ids[i];
        }
    }
    *outMask = format | mask;
    return 0;
}
