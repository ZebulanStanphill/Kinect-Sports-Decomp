typedef struct Compiler_82953CA8 Compiler_82953CA8;

typedef struct Register_82953CA8 {
    int pad0;
    unsigned int type; /* 0x04 */
    int pad8;
    unsigned int index; /* 0x0c */
} Register_82953CA8;

typedef struct CompilerVtbl_82953CA8 {
    void *slots0[0x150 / 4];
    long (*emitDestination)(Compiler_82953CA8 *self, Register_82953CA8 *reg, void *arg); /* 0x150 */
    void *slot154;
    long (*mapOutput)(Compiler_82953CA8 *self, Register_82953CA8 *reg, unsigned int *index,
                      unsigned int *type); /* 0x158 */
} CompilerVtbl_82953CA8;

typedef struct Source_82953CA8 {
    char pad0[0x3c];
    void *location; /* 0x3c */
} Source_82953CA8;

struct Compiler_82953CA8 {
    CompilerVtbl_82953CA8 *vt; /* 0x00 */
    char pad4[0x2c - 4];
    unsigned int maxTemps; /* 0x2c */
    char pad30[4];
    unsigned int maxPredicates; /* 0x34 */
    char pad38[0x50 - 0x38];
    unsigned int firstAddressTemp; /* 0x50 */
    char pad54[0x84 - 0x54];
    unsigned int outputType;    /* 0x84 */
    unsigned int tempType;      /* 0x88 */
    unsigned int addressType;   /* 0x8c */
    unsigned int predicateType; /* 0x90 */
    char pad94[0x104 - 0x94];
    Source_82953CA8 *source; /* 0x104 */
};

extern void fn_82975B00(Compiler_82953CA8 *self, void *location, int code, const char *format, ...);

long fn_82953CA8(Compiler_82953CA8 *self, Register_82953CA8 *reg, unsigned int *token, void *arg,
                 unsigned int *extra)
{
    unsigned int type = 0;
    unsigned int index = 0;
    long hr;

    if (extra != 0) {
        *extra = 0;
    }
    if (self->tempType == reg->type) {
        type = 0;
        index = reg->index;
        if (index >= self->maxTemps) {
            fn_82975B00(self, self->source->location, 0x1199, "maximum temp register index exceeded");
            return 0x88760b59;
        }
        if (self->firstAddressTemp != 0 && index >= self->firstAddressTemp) {
            index -= self->firstAddressTemp;
            type = 3;
        }
    } else if (self->addressType == reg->type) {
        type = 3;
        index = reg->index;
        if (index >= 1) {
            fn_82975B00(self, self->source->location, 0x119c, "maximum address register index exceeded");
            return 0x88760b59;
        }
    } else if (self->outputType == reg->type) {
        if (self->vt->mapOutput(self, reg, &index, &type) < 0) {
            return 0x80004005;
        }
    } else if (self->predicateType == reg->type) {
        type = 0x13;
        index = reg->index;
        if (index >= self->maxPredicates) {
            fn_82975B00(self, self->source->location, 0x11c5, "maximum predicate register index exceeded");
            return 0x88760b59;
        }
    } else {
        fn_82975B00(self, 0, 0, "internal error: unexpected output register type");
        return 0x80004005;
    }
    if (token != 0) {
        *token = 0x80000000 | ((type << 28) & 0x70000000) | ((type << 8) & 0x1800) | (index & 0x7ff);
    }
    hr = self->vt->emitDestination(self, reg, arg);
    if (hr < 0) {
        return hr;
    }
    return 0;
}
