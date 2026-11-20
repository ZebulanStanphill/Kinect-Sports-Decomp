extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define XLT_FILE                                                                                             \
    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\"                                   \
    "ucode\\ssm\\translator\\xltconvert.cpp"

#define XLT_ASSERT(e, line)                                                                                  \
    if (!(e))                                                                                                \
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, XLT_FILE, line)

typedef void *(*AllocFn_82B7BA30)(void *context, unsigned int size);
typedef void (*FreeFn_82B7BA30)(void *context, void *p);

typedef struct Translator_82B7BA30 {
    void *context;                   /* 0x0 */
    AllocFn_82B7BA30 AllocateSysMem; /* 0x4 */
    FreeFn_82B7BA30 FreeSysMem;      /* 0x8 */
    void *registry;                  /* 0xc */
} Translator_82B7BA30;

typedef struct Assembler_82B7BA30 {
    Translator_82B7BA30 translator; /* 0x0 */
    void *output;                   /* 0x10 */
    void *state;                    /* 0x14 */
    int pad18;
    void *symbols;                 /* 0x1c */
    unsigned char symTable[0x640]; /* 0x20 */
    char pad660[0x14];
    int f674; /* 0x674 */
    int f678; /* 0x678 */
    char pad67c[0x8];
    int f684; /* 0x684 */
    int f688; /* 0x688 */
    int f68c; /* 0x68c */
    char pad690[0xc];
    int f69c; /* 0x69c */
    char pad6a0[0x40];
} Assembler_82B7BA30;

extern unsigned int fn_82B7B6A0(Assembler_82B7BA30 *assembler, void *source, void *buffer);
extern void fn_82B7FA90(void *output, unsigned int count, void *buffer);

int fn_82B7BA30(Translator_82B7BA30 *pTranslator, void *pState, void *output, void *source)
{
    Assembler_82B7BA30 *assembler;
    void *buffer;
    unsigned int i;
    unsigned char *p;
    unsigned char *table;
    unsigned int size;

    XLT_ASSERT(pTranslator, 0x3fbb);
    XLT_ASSERT(pState, 0x3fbc);
    assembler =
        (Assembler_82B7BA30 *)pTranslator->AllocateSysMem(pTranslator->context, sizeof(Assembler_82B7BA30));
    p = (unsigned char *)assembler;
    table = assembler->symTable;
    for (i = 0; i < sizeof(Assembler_82B7BA30); i++) {
        p[i] = 0;
    }
    for (i = 0; i < sizeof(assembler->symTable); i++) {
        table[i] = 0xff;
    }
    assembler->translator = *pTranslator;
    assembler->state = pState;
    assembler->output = output;
    assembler->f678 = 1;
    assembler->f674 = 0;
    assembler->f684 = 2;
    assembler->f69c = 0;
    assembler->f688 = 0xffff;
    assembler->f68c = 0;
    assembler->symbols = pTranslator->AllocateSysMem(pTranslator->context, 0x5b54);
    buffer = pTranslator->AllocateSysMem(pTranslator->context, 12000);
    size = fn_82B7B6A0(assembler, source, buffer);
    fn_82B7FA90(output, size / 4, buffer);
    pTranslator->FreeSysMem(pTranslator->context, buffer);
    pTranslator->FreeSysMem(pTranslator->context, assembler->symbols);
    pTranslator->FreeSysMem(pTranslator->context, assembler);
    return 0;
}
