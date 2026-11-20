typedef struct Decl_829A09C8 {
    int unknown0;
    unsigned int flags; /* 0x4 */
} Decl_829A09C8;

typedef struct Instr_829A09C8 {
    int unknown0;
    int decl;     /* 0x04 */
    int relative; /* 0x08 */
    int unknownC;
    unsigned int component; /* 0x10 */
    char pad14[0x4c];
    int location; /* 0x60 */
    char pad64[0xa];
    unsigned char usageIndex; /* 0x6e */
    unsigned char usage;      /* 0x6f */
} Instr_829A09C8;

typedef struct Compiler_829A09C8 {
    void *vt; /* 0x000 */
    int unknown4;
    unsigned int instrCount; /* 0x008 */
    int unknownC;
    Decl_829A09C8 **decls;   /* 0x010 */
    Instr_829A09C8 **instrs; /* 0x014 */
    char pad18[0x1e4];
    unsigned int texcoordCount[8]; /* 0x1fc */
    unsigned int colorCount[2];    /* 0x21c */
} Compiler_829A09C8;

void *memset(void *dest, int value, unsigned int size);
extern void fn_82975B00(Compiler_829A09C8 *self, int location, int error, const char *format, ...);

int fn_829A09C8(Compiler_829A09C8 *self)
{
    int relativeReported;
    int depthReported;
    int failed;
    int written[4];
    int location;
    unsigned int i;
    unsigned int count;

    memset(self->colorCount, 0, sizeof(self->colorCount));
    memset(written, 0, sizeof(written));
    failed = 0;
    relativeReported = 0;
    depthReported = 0;
    location = 0;
    memset(self->texcoordCount, 0, sizeof(self->texcoordCount));
    for (i = 0; i < self->instrCount; i++) {
        Instr_829A09C8 *instr = self->instrs[i];
        Decl_829A09C8 *decl = self->decls[instr->decl];

        if (instr->relative != -1 && !relativeReported) {
            fn_82975B00(self, instr->location, 0x119f, "relative addressing not supported in ps_1_x");
            relativeReported = 1;
            failed = 1;
        }
        if (decl->flags & 0x20) {
            if (instr->usageIndex > 3) {
                break;
            }
            switch (instr->usage) {
            case 1:
                if (instr->usageIndex == 0) {
                    location = instr->location;
                    written[instr->component] = 1;
                }
                break;
            case 2:
                if (instr->usageIndex == 0 && instr->component != 0 && !depthReported) {
                    fn_82975B00(self, instr->location, 0x11b0, "DEPTH must be a scalar");
                    depthReported = 1;
                    failed = 1;
                }
                break;
            }
        } else if ((decl->flags & 0x10) && !(decl->flags & 0x200)) {
            unsigned int usage = instr->usage;
            unsigned int usageIndex = instr->usageIndex;

            switch (usage) {
            case 1:
                if (usageIndex < 2 && self->colorCount[usageIndex] < instr->component + 1) {
                    self->colorCount[usageIndex] = instr->component + 1;
                }
                break;
            case 3:
                if (usageIndex < 8 && self->texcoordCount[usageIndex] < instr->component + 1) {
                    self->texcoordCount[usageIndex] = instr->component + 1;
                }
                break;
            }
        }
    }
    count = 0;
    for (i = 0; i < 4; i++) {
        count += written[i] != 0;
    }
    if (count != 4) {
        fn_82975B00(self, location, 0x11b2,
                    "pixel shader must minimally write all four components of COLOR0");
        failed = 1;
    }
    return failed ? 0x80004005 : 0;
}
