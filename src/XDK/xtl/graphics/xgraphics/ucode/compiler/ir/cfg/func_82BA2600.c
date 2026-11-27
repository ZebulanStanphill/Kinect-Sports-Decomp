typedef struct Inst_82BA2600 Inst_82BA2600;
typedef struct Source_82BA2600 Source_82BA2600;
typedef struct Compiler_82BA2600 Compiler_82BA2600;

typedef struct SourceVtbl_82BA2600 {
    void *slots00[7];
    void *(*GetStates)(Source_82BA2600 *self); /* 0x1c */
} SourceVtbl_82BA2600;

struct Source_82BA2600 {
    SourceVtbl_82BA2600 *vtbl; /* 0x00 */
};

typedef struct Context_82BA2600 {
    char pad000[0x5d0];
    Source_82BA2600 *source; /* 0x5d0 */
} Context_82BA2600;

typedef struct Register_82BA2600 {
    char pad00[0x20];
    Inst_82BA2600 *value; /* 0x20 */
} Register_82BA2600;

typedef struct ShaderInfo_82BA2600 {
    char pad0[3];
    unsigned char kind; /* 0x03 */
} ShaderInfo_82BA2600;

typedef struct Program_82BA2600 {
    int unknown0;
    ShaderInfo_82BA2600 *info; /* 0x04 */
} Program_82BA2600;

struct Compiler_82BA2600 {
    char pad00[0xc];
    Context_82BA2600 *ctx; /* 0x0c */
    void *states;          /* 0x10 */
    char pad14[0x64];
    Register_82BA2600 *pointSize; /* 0x78 */
    char pad7c[2];
    unsigned char usesPointSize; /* 0x7e */
    char pad7f[0x29];
    void *exitBlock; /* 0xa8 */
};

typedef void (*Report_82BA2600)(void *self, const char *format, ...);

extern void fn_82B7C800(void *self, const char *format, ...);
extern void fn_82AB15D0(int level, const char *format, ...);
extern int fn_82B9EBF0(void *states, int index, void *out, Report_82BA2600 report, void *ctx);
extern int fn_82B9D7D8(void *states, int unused, float *out, Report_82BA2600 report, void *ctx);
extern Inst_82BA2600 *fn_82BC24F0(int op, void *ctx);
extern void fn_82BC2958(Inst_82BA2600 *inst, int index, Inst_82BA2600 *value);
extern void fn_82BC34D8(Inst_82BA2600 *inst, Compiler_82BA2600 *self, int index, float x, float y, float z,
                        float w);
extern void fn_82BA0C40(Compiler_82BA2600 *self, Inst_82BA2600 *inst);
extern void fn_82BC5628(void *block, Register_82BA2600 *before, Inst_82BA2600 *inst);
extern unsigned char fn_82BC2580(Inst_82BA2600 *inst);

/* Clamps the point size to the range given by the render states when any of them is set. */
void fn_82BA2600(Compiler_82BA2600 *self, Program_82BA2600 *program)
{
    unsigned char found = 0;
    float maxSize = 0.0f;
    float minSize = 0.0f;
    int i;

    for (i = 0; i < 5; i++) {
        Context_82BA2600 *ctx = self->ctx;

        found |=
            fn_82B9EBF0(self->states, i, ctx->source->vtbl->GetStates(ctx->source), fn_82B7C800, ctx) == 1;
    }
    if (self->usesPointSize && program->info->kind != 3 && found) {
        Inst_82BA2600 *value;
        Inst_82BA2600 *max;
        Inst_82BA2600 *min;

        fn_82B9D7D8(self->states, 0, &minSize, fn_82B7C800, self->ctx);
        fn_82B9D7D8(self->states, 0, &maxSize, fn_82B7C800, self->ctx);
        value = self->pointSize->value;
        max = fn_82BC24F0(0x17, self->ctx);
        fn_82BC2958(max, 0, value);
        fn_82BC2958(max, 1, value);
        fn_82BC34D8(max, self, 2, maxSize, maxSize, maxSize, maxSize);
        fn_82BA0C40(self, max);
        fn_82BC5628(self->exitBlock, self->pointSize, max);
        if (!fn_82BC2580(max)) {
            fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "max->Validate()",
                        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode"
                        "\\compiler\\ir\\cfg.cpp",
                        0x975);
        }
        min = fn_82BC24F0(0x19, self->ctx);
        fn_82BC2958(min, 0, value);
        fn_82BC2958(min, 1, value);
        fn_82BC34D8(min, self, 2, minSize, minSize, minSize, minSize);
        fn_82BA0C40(self, min);
        fn_82BC5628(self->exitBlock, self->pointSize, min);
        if (!fn_82BC2580(min)) {
            fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "min->Validate()",
                        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode"
                        "\\compiler\\ir\\cfg.cpp",
                        0x97d);
        }
    }
}
