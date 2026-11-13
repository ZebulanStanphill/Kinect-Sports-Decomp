extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define SS_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\programstore.cpp", line)

#define E_SSM_OK 0

typedef struct ProgramKey_82B6D6E8 {
    void *handle;
    unsigned int shaders[8];
} ProgramKey_82B6D6E8;

typedef struct ProgramStore_82B6D6E8 {
    char pad0[0x1c];
    void *stores[8];
    char pad3c[0x13c - 0x3c];
    void *hashCache;
} ProgramStore_82B6D6E8;

extern int fn_82B6D458(ProgramStore_82B6D6E8 *pProgramStore, void *store, unsigned int shader, unsigned int type);
extern void fn_82B7F170(void *handle);
extern void fn_82B6B230(void *hashCache, ProgramKey_82B6D6E8 *pKey);

int fn_82B6D6E8(ProgramStore_82B6D6E8 *pProgramStore, ProgramKey_82B6D6E8 *pKey)
{
    unsigned int i;
    int code;

    SS_ASSERT(pProgramStore, 0x341);
    SS_ASSERT(pKey, 0x342);
    for (i = 0; i < 6; i++) {
        code = fn_82B6D458(pProgramStore, pProgramStore->stores[i], pKey->shaders[i], i);
        SS_ASSERT(code == E_SSM_OK, 0x34d);
        pKey->shaders[i] = 0;
    }
    code = fn_82B6D458(pProgramStore, pProgramStore->stores[6], pKey->shaders[6], 6);
    SS_ASSERT(code == E_SSM_OK, 0x357);
    pKey->shaders[6] = 0;
    code = fn_82B6D458(pProgramStore, pProgramStore->stores[7], pKey->shaders[7], 7);
    SS_ASSERT(code == E_SSM_OK, 0x360);
    pKey->shaders[7] = 0;
    fn_82B7F170(pKey->handle);
    fn_82B6B230(pProgramStore->hashCache, pKey);
    return code;
}
