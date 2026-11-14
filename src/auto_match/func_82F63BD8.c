typedef struct ExcRecord_82F63BD8 {
    unsigned int code;          /* 0x00 */
    unsigned int flags;         /* 0x04 */
    void *next;                 /* 0x08 */
    void *address;              /* 0x0c */
    unsigned int words[16];     /* 0x10 */
} ExcRecord_82F63BD8;

typedef struct Context_82F63BD8 {
    unsigned char data[0xa40];
} Context_82F63BD8;

typedef struct ExcPointers_82F63BD8 {
    ExcRecord_82F63BD8 *record;
    Context_82F63BD8 *context;
} ExcPointers_82F63BD8;

extern void *_ReturnAddress(void);
extern void *memset(void *dst, int value, unsigned int size);
extern void fn_82F70520(int code);
extern void *fn_82A1E4F0(void *filter);
extern unsigned int UnhandledExceptionFilter(ExcPointers_82F63BD8 *pointers);

void fn_82F63BD8(int hookCode, unsigned int code, unsigned int flags)
{
    if (hookCode != -1)
        fn_82F70520(hookCode);
    {
        ExcRecord_82F63BD8 record = {0};
        Context_82F63BD8 context;
        ExcPointers_82F63BD8 pointers = {&record, &context};

        memset(&context, 0, sizeof(context));
        record.code = code;
        record.flags = flags;
        record.address = _ReturnAddress();
        fn_82A1E4F0(0);
        if (UnhandledExceptionFilter(&pointers) == 0 && hookCode != -1)
            fn_82F70520(hookCode);
    }
}
