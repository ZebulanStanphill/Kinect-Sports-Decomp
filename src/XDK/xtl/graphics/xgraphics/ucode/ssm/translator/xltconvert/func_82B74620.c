extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define XLT_FILE                                                                                             \
    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\"                                   \
    "ucode\\ssm\\translator\\xltconvert.cpp"

#define XLT_ASSERT(e, line)                                                                                  \
    if (!(e))                                                                                                \
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, XLT_FILE, line)

/* IL tokens; the first bit-field is the most significant one on this target. */
typedef struct OpCode_82B74620 {
    unsigned int reserved : 2;
    unsigned int priModifierPresent : 1;
    unsigned int secModifierPresent : 1;
    unsigned int control : 12;
    unsigned int code : 16;
} OpCode_82B74620;

typedef struct Register_82B74620 {
    unsigned int extended : 1;
    unsigned int reserved : 4;
    unsigned int immediatePresent : 1;
    unsigned int dimension : 1;
    unsigned int relativeAddressHigh : 1;
    unsigned int relativeAddress : 1;
    unsigned int modifierPresent : 1;
    unsigned int registerType : 6;
    unsigned int registerNum : 16;
} Register_82B74620;

typedef struct SourceModifier_82B74620 {
    unsigned int other : 16;
    unsigned int negateW : 1;
    unsigned int swizzleW : 3;
    unsigned int negateZ : 1;
    unsigned int swizzleZ : 3;
    unsigned int negateY : 1;
    unsigned int swizzleY : 3;
    unsigned int negateX : 1;
    unsigned int swizzleX : 3;
} SourceModifier_82B74620;

typedef struct Assembler_82B74620 {
    char padding[0x5b40];
    unsigned int scratchRegister; /* 0x5b40 */
    unsigned int sourceRegister;  /* 0x5b44 */
} Assembler_82B74620;

typedef struct Context_82B74620 {
    char padding[0x1c];
    Assembler_82B74620 *assembler; /* 0x1c */
} Context_82B74620;

unsigned int *fn_82B74620(Context_82B74620 *context, unsigned short *source, unsigned int *out)
{
    Assembler_82B74620 *assembler;
    unsigned int component;
    unsigned int swizzle;
    OpCode_82B74620 *opcode;
    Register_82B74620 *destination;
    Register_82B74620 *operand;
    SourceModifier_82B74620 *modifier;

    assembler = context->assembler;
    component = *source & 7;
    opcode = (OpCode_82B74620 *)out;
    opcode->code = 0x71;
    opcode->control = 0;
    opcode->secModifierPresent = 0;
    out++;
    destination = (Register_82B74620 *)out;
    destination->registerNum = assembler->scratchRegister;
    destination->registerType = 4;
    destination->modifierPresent = 0;
    destination->relativeAddress = 0;
    out++;
    operand = (Register_82B74620 *)out;
    operand->registerNum = assembler->sourceRegister;
    operand->registerType = 4;
    operand->modifierPresent = 1;
    operand->relativeAddress = 0;
    out++;
    switch (component) {
    case 1:
        swizzle = 0;
        break;
    case 2:
        swizzle = 1;
        break;
    case 3:
        swizzle = 2;
        break;
    case 4:
        swizzle = 3;
        break;
    default:
        XLT_ASSERT(0, 0x20b6);
        swizzle = 0;
        break;
    }
    modifier = (SourceModifier_82B74620 *)out;
    modifier->swizzleX = swizzle;
    modifier->swizzleY = swizzle;
    modifier->swizzleZ = swizzle;
    modifier->swizzleW = swizzle;
    out++;
    return out;
}
