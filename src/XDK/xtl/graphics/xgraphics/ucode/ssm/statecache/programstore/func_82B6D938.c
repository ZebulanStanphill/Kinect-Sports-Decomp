extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define SS_ASSERT(e, line)                                                                                   \
    if (!(e))                                                                                                \
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e,                                                       \
                "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm"             \
                "\\statecache\\programstore.cpp",                                                            \
                line)

#define E_SSM_OK 0

typedef struct VidMem_82B6D938 {
    unsigned int uptrLinearAddr;    /* 0x00 */
    unsigned int alignedLinearAddr; /* 0x04 */
    unsigned int secondAddr;        /* 0x08 */
    unsigned int alignedSecondAddr; /* 0x0c */
    void *hSurface;                 /* 0x10 */
} VidMem_82B6D938;

typedef struct BlockInfo_82B6D938 {
    VidMem_82B6D938 sVidMem; /* 0x00 */
} BlockInfo_82B6D938;

typedef struct Block_82B6D938 {
    unsigned int refCount;   /* 0x00 */
    BlockInfo_82B6D938 info; /* 0x04 */
} Block_82B6D938;

typedef struct Program_82B6D938 {
    unsigned char pad0[0x20];
    void *microcode; /* 0x20 */
} Program_82B6D938;

typedef struct ProgramStore_82B6D938 {
    void *pContext;                                                  /* 0x000 */
    void *unused4;                                                   /* 0x004 */
    int (*pfnFree)(void *pContext, void *p);                         /* 0x008 */
    void *unusedC;                                                   /* 0x00c */
    void (*pfnFreeVidMem)(void *pContext, VidMem_82B6D938 *pVidMem); /* 0x010 */
    unsigned char pad14[0x1c - 0x14];
    void *stores[8];            /* 0x01c */
    void *blockLists[8];        /* 0x03c */
    VidMem_82B6D938 vidMem[8];  /* 0x05c */
    unsigned int vidMemUsed[8]; /* 0x0fc */
    unsigned char pad11c[0x13c - 0x11c];
    void *hashCache; /* 0x13c */
} ProgramStore_82B6D938;

extern void *fn_82AB6498(void *list);
extern Block_82B6D938 *fn_82AB67A8(void *item);
extern void fn_82AB6770(void *item);
extern void fn_82AB5FE0(void *list);
extern Program_82B6D938 *fn_82B6E9E0(void *hashTable);
extern void fn_82B6E6D0(void *hashTable);
extern void fn_82B6B0C8(void *hashCache);

int fn_82B6D938(ProgramStore_82B6D938 *pProgramStore)
{
    unsigned int i;
    void *item;
    Block_82B6D938 *pInBlock;
    Program_82B6D938 *pProgram;
    int code;

    for (i = 0; i < 8; i++) {
        while ((item = fn_82AB6498(pProgramStore->blockLists[i])) != 0) {
            pInBlock = fn_82AB67A8(item);
            SS_ASSERT(pInBlock->info.sVidMem.hSurface, 0x153);
            pProgramStore->pfnFreeVidMem(pProgramStore->pContext, &pInBlock->info.sVidMem);
            pInBlock->info.sVidMem.uptrLinearAddr = 0;
            pInBlock->info.sVidMem.alignedLinearAddr = 0;
            pInBlock->info.sVidMem.secondAddr = 0;
            pInBlock->info.sVidMem.alignedSecondAddr = 0;
            pInBlock->info.sVidMem.hSurface = 0;
            fn_82AB6770(item);
        }
        if (pProgramStore->vidMemUsed[i] != 0) {
            pProgramStore->vidMemUsed[i] = 0;
            pProgramStore->pfnFreeVidMem(pProgramStore->pContext, &pProgramStore->vidMem[i]);
        }
        while ((pProgram = fn_82B6E9E0(pProgramStore->stores[i])) != 0) {
            if (pProgram->microcode != 0) {
                code = pProgramStore->pfnFree(pProgramStore->pContext, pProgram->microcode);
                SS_ASSERT(code == E_SSM_OK, 0x180);
            }
            code = pProgramStore->pfnFree(pProgramStore->pContext, pProgram);
            SS_ASSERT(code == E_SSM_OK, 0x185);
        }
        fn_82B6E6D0(pProgramStore->stores[i]);
        pProgramStore->stores[i] = 0;
        fn_82AB5FE0(pProgramStore->blockLists[i]);
        pProgramStore->blockLists[i] = 0;
    }
    fn_82B6B0C8(pProgramStore->hashCache);
    code = pProgramStore->pfnFree(pProgramStore->pContext, pProgramStore);
    SS_ASSERT(code == E_SSM_OK, 0x198);
    return code;
}
