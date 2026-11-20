typedef struct Compiler_829A64F0 Compiler_829A64F0;

typedef struct CompilerVtbl_829A64F0 {
    char pad0[0x70];
    unsigned int (*getType)(Compiler_829A64F0 *self, unsigned int token);   /* 0x70 */
    unsigned int (*getNumber)(Compiler_829A64F0 *self, unsigned int token); /* 0x74 */
} CompilerVtbl_829A64F0;

typedef struct Decl_829A64F0 {
    int unknown0;
    unsigned int flags; /* 0x4 */
} Decl_829A64F0;

typedef struct Instr_829A64F0 {
    int unknown0;
    int decl; /* 0x04 */
    char pad8[0x8];
    unsigned int component; /* 0x10 */
    char pad14[0x4c];
    int location; /* 0x60 */
    char pad64[0x8];
    unsigned int token; /* 0x6c */
} Instr_829A64F0;

struct Compiler_829A64F0 {
    CompilerVtbl_829A64F0 *vt; /* 0x000 */
    int unknown4;
    unsigned int instrCount; /* 0x008 */
    int unknownC;
    Decl_829A64F0 **decls;   /* 0x010 */
    Instr_829A64F0 **instrs; /* 0x014 */
    char pad18[0x144];
    int skip; /* 0x15c */
};

void *memset(void *dest, int value, unsigned int size);
extern void fn_82975B00(Compiler_829A64F0 *self, int location, int error, const char *format, ...);

int fn_829A64F0(Compiler_829A64F0 *self)
{
    int fogReported;
    int psizeReported;
    int failed;
    int written[4];
    int location;
    unsigned int i;
    unsigned int count;

    if (self->skip != 0) {
        return 0;
    }
    fogReported = 0;
    psizeReported = 0;
    memset(written, 0, sizeof(written));
    failed = 0;
    location = 0;
    for (i = 0; i < self->instrCount; i++) {
        Instr_829A64F0 *instr = self->instrs[i];
        if (self->decls[instr->decl]->flags & 0x20) {
            unsigned int type = self->vt->getType(self, instr->token);
            unsigned int number = self->vt->getNumber(self, instr->token);
            switch (type) {
            case 1:
                if (number == 0) {
                    location = instr->location;
                    written[instr->component] = 1;
                }
                break;
            case 5:
                if (number == 0 && instr->component > 0 && !psizeReported) {
                    fn_82975B00(self, instr->location, 0x11bc, "PSIZE must be a scalar");
                    psizeReported = 1;
                    failed = 1;
                }
                break;
            case 0xc:
                if (number == 0 && instr->component > 0 && !fogReported) {
                    fn_82975B00(self, instr->location, 0x11bc, "FOG must be a scalar");
                    fogReported = 1;
                    failed = 1;
                }
                break;
            }
        }
    }
    count = 0;
    for (i = 0; i < 4; i++) {
        if (written[i] != 0) {
            count++;
        }
    }
    if (count != 4) {
        fn_82975B00(self, location, 0x11bd,
                    "vertex shader must minimally write all four components of POSITION");
        failed = 1;
    }
    return failed ? 0x80004005 : 0;
}
