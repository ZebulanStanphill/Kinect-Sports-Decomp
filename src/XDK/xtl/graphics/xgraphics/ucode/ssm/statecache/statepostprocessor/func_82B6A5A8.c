typedef struct StateObject_82B6A5A8 {
    char pad0[0x10];
    unsigned int address; /* 0x10 */
    char pad14[0xc];
    unsigned int *storage; /* 0x20 */
} StateObject_82B6A5A8;

typedef struct CommandInterface_82B6A5A8 {
    unsigned int unknown;                                         /* 0x00 */
    void *context;                                                /* 0x04 */
    unsigned int *(*allocate)(void *context, unsigned int count); /* 0x08 */
    void *reserved[2];                                            /* 0x0c */
    void (*finish)(void *context, unsigned int count, void *out); /* 0x14 */
} CommandInterface_82B6A5A8;

typedef struct AbstractState_82B6A5A8 {
    char pad0[0xec];
    CommandInterface_82B6A5A8 objectCI; /* 0xec */
} AbstractState_82B6A5A8;

extern void fn_82AB15D0(void *object, const char *format, ...);
extern void fn_82B6D908(StateObject_82B6A5A8 **key, void *data);

#define SPP_FILE                                                                                             \
    "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\"           \
    "statepostprocessor.cpp"
#define SPP_ASSERT(e, line)                                                                                  \
    if (!(e))                                                                                                \
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, SPP_FILE, line)

unsigned int fn_82B6A5A8(void *pPostProcessor, StateObject_82B6A5A8 **pProgKey,
                         AbstractState_82B6A5A8 *pAbstractState)
{
    enum {
        cmdBufSizeCount = 16
    };

    CommandInterface_82B6A5A8 *pObjectCI;
    unsigned int *begin;
    unsigned int *cursor;
    StateObject_82B6A5A8 *object;
    unsigned int cmdBufSizeUsed;
    unsigned int *storage;
    int i;
    unsigned int data[4];

    SPP_ASSERT(pPostProcessor, 0x5aa);
    SPP_ASSERT(pProgKey, 0x5ab);
    SPP_ASSERT(pAbstractState, 0x5ac);
    pObjectCI = &pAbstractState->objectCI;
    SPP_ASSERT(pObjectCI, 0x5af);
    cursor = pObjectCI->allocate(pObjectCI->context, cmdBufSizeCount);
    begin = cursor;
    *cursor++ = 0xc00b2500;
    object = pProgKey[1];
    *cursor++ = object->storage[1] | object->address;
    *cursor++ = 0x10;
    *cursor++ = 0x10;
    /* An indexed loop: a hand-written pointer walk gives other registers. */
    for (i = 0; i < 5; i++) {
        object = pProgKey[i + 2];
        *cursor++ = object->storage[1] | object->address;
    }
    *cursor++ = 0x10;
    *cursor++ = 0x10;
    object = pProgKey[7];
    storage = object->storage;
    *cursor++ = 0xc0012700;
    *cursor++ = object->address | 2;
    *cursor++ = storage[1];
    cmdBufSizeUsed = cursor - begin;
    SPP_ASSERT(cmdBufSizeCount >= cmdBufSizeUsed, 0x5e0);
    pObjectCI->finish(pObjectCI->context, cmdBufSizeUsed, data);
    fn_82B6D908(pProgKey, data);
    return 0;
}
