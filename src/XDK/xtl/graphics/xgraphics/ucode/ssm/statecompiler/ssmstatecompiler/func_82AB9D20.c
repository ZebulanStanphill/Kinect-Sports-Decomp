extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define SS_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\ssmstatecompiler.cpp", line)

#define E_SSM_OK 0

typedef struct Device_82AB9D20 {
    char pad0[0x59c];
    void (*release)(void *context, struct Device_82AB9D20 *device);
    int pad5a0;
    void *context;
} Device_82AB9D20;

typedef struct StateCompiler_82AB9D20 {
    void *context;
    int pad4;
    int (*free)(void *context, struct StateCompiler_82AB9D20 *self);
    char padc[0x18 - 0xc];
    void *cache;
    void *program;
    Device_82AB9D20 *device;
    char pad24[4];
    void *tableA;
    void *tableB;
} StateCompiler_82AB9D20;

extern void *fn_82B69A00(void *program, int flag);
extern void fn_82B6BF80(void *table);
extern void fn_82B7C530(Device_82AB9D20 *device, int flag);
extern int fn_82B77EE0(void *cache);

int fn_82AB9D20(StateCompiler_82AB9D20 *pStateCompiler)
{
    void *program;
    int retVal;

    SS_ASSERT(pStateCompiler, 0x10b);
    program = fn_82B69A00(pStateCompiler->program, 1);
    fn_82B6BF80(pStateCompiler->tableA);
    fn_82B6BF80(pStateCompiler->tableB);
    if (program == 0) {
        Device_82AB9D20 *device = pStateCompiler->device;
        void (*release)(void *, Device_82AB9D20 *) = device->release;
        void *context = device->context;
        fn_82B7C530(device, 1);
        release(context, device);
    } else if (pStateCompiler->cache != 0) {
        retVal = fn_82B77EE0(pStateCompiler->cache);
        SS_ASSERT(retVal == E_SSM_OK, 0x125);
    }
    retVal = pStateCompiler->free(pStateCompiler->context, pStateCompiler);
    SS_ASSERT(retVal == E_SSM_OK, 0x12c);
    return retVal;
}
