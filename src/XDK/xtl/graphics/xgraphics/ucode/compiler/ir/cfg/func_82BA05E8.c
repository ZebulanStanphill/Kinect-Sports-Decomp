extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);
#define IRINST_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\IRInst.hpp", line)

typedef struct Context_82BA05E8 {
    unsigned char pad[0x571];
    unsigned char in_ssa_form;   /* 0x571 */
} Context_82BA05E8;

typedef struct IRInst_82BA05E8 {
    unsigned int pad0[5];
    int numInputs;               /* 0x14 */
    unsigned int pad18[(0xe4 - 0x18) / 4];
    unsigned int flagsHi : 22;            /* 0xe4 */
    unsigned int hasPartialWriteInput : 1;
    unsigned int flagsLo : 9;
    void *inputs[(0x3b8 - 0xe8) / 4]; /* 0xe8 */
    Context_82BA05E8 *context;   /* 0x3b8 */
} IRInst_82BA05E8;

/* IRInst member accessors spelled as macros so #e stringizes like the original member calls */
#define NumInputs() (self->numInputs)
#define HasPartialWriteInput() ((unsigned char)self->hasPartialWriteInput)

void fn_82BA05E8(IRInst_82BA05E8 *self, int arg, void *value)
{
    Context_82BA05E8 *context;
    IRINST_ASSERT(arg <= NumInputs(), 0x799);
    context = self->context;
    IRINST_ASSERT(!(context->in_ssa_form && arg == NumInputs() && HasPartialWriteInput()), 0x79c);
    self->inputs[arg] = value;
}
