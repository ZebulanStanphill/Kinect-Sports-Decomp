extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define XLT_FILE                                                                                             \
    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\"                                   \
    "ucode\\ssm\\translator\\xltconvert.cpp"

#define XLT_ASSERT(e, line)                                                                                  \
    if (!(e))                                                                                                \
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, XLT_FILE, line)

/* IL tokens; the first bit-field is the most significant one on this target. */
typedef struct OpCode_82B75D30 {
    unsigned int reserved : 2;
    unsigned int priModifierPresent : 1;
    unsigned int secModifierPresent : 1;
    unsigned int control : 12;
    unsigned int code : 16;
} OpCode_82B75D30;

typedef struct Register_82B75D30 {
    unsigned int header : 8; /* written as one byte (stb) */
    unsigned int relativeAddress : 1;
    unsigned int modifierPresent : 1;
    unsigned int registerType : 6;
    unsigned int registerNum : 16;
} Register_82B75D30;

typedef struct SourceModifier_82B75D30 {
    unsigned int other : 16;
    unsigned int negateW : 1;
    unsigned int swizzleW : 3;
    unsigned int negateZ : 1;
    unsigned int swizzleZ : 3;
    unsigned int negateY : 1;
    unsigned int swizzleY : 3;
    unsigned int negateX : 1;
    unsigned int swizzleX : 3;
} SourceModifier_82B75D30;

typedef struct DestinationModifier_82B75D30 {
    unsigned int other : 19;
    unsigned int shiftScale : 4;
    unsigned int reserved : 9;
} DestinationModifier_82B75D30;

unsigned int *fn_82B75D30(Register_82B75D30 *source, DestinationModifier_82B75D30 *modifier,
                          unsigned int *relative, unsigned int *out)
{
    unsigned int count;
    unsigned int swizzle;
    OpCode_82B75D30 *opcode;
    Register_82B75D30 *constant;
    SourceModifier_82B75D30 *sourceModifier;

    opcode = (OpCode_82B75D30 *)out;
    opcode->code = 0x49;
    opcode->control = 0;
    opcode->secModifierPresent = 0;
    out++;
    ((Register_82B75D30 *)out)->registerNum = source->registerNum;
    ((Register_82B75D30 *)out)->registerType = source->registerType;
    ((Register_82B75D30 *)out)->relativeAddress = source->relativeAddress;
    ((Register_82B75D30 *)out)->modifierPresent = source->modifierPresent;
    out++;
    if (source->modifierPresent) {
        *out = *(unsigned int *)modifier;
        out++;
    }
    if (source->relativeAddress) {
        *out = *relative;
        out++;
    }
    ((Register_82B75D30 *)out)->registerNum = source->registerNum;
    ((Register_82B75D30 *)out)->registerType = source->registerType;
    ((Register_82B75D30 *)out)->relativeAddress = source->relativeAddress;
    ((Register_82B75D30 *)out)->modifierPresent = 0;
    out++;
    switch (modifier->shiftScale) {
    case 1:
        count = 2;
        swizzle = 0;
        break;
    case 2:
        count = 2;
        swizzle = 1;
        break;
    case 3:
        count = 2;
        swizzle = 2;
        break;
    case 4:
        count = 3;
        swizzle = 0;
        break;
    case 5:
        count = 3;
        swizzle = 1;
        break;
    case 6:
        count = 3;
        swizzle = 2;
        break;
    default:
        XLT_ASSERT(0, 0x2b85);
        count = 2;
        swizzle = 0;
        break;
    }
    constant = (Register_82B75D30 *)out;
    constant->registerNum = count;
    constant->registerType = 1;
    constant->modifierPresent = 1;
    constant->relativeAddress = 0;
    constant->header = 1;
    out++;
    sourceModifier = (SourceModifier_82B75D30 *)out;
    sourceModifier->swizzleX = swizzle;
    sourceModifier->swizzleY = swizzle;
    sourceModifier->swizzleZ = swizzle;
    sourceModifier->swizzleW = swizzle;
    out++;
    return out;
}
