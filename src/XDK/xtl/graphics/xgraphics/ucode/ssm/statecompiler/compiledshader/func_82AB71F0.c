extern void fn_82AB15D0(int, const char *, const char *, const char *, int);

typedef struct ArrayStateMap_82AB71F0 {
    unsigned int base;
    unsigned int stride;
    unsigned int uMaxCount;
} ArrayStateMap_82AB71F0;

typedef struct ASObject_82AB71F0 {
    unsigned char pad[0x48];
    unsigned int uNumArrayStates;
    unsigned int unk4c[2];
    ArrayStateMap_82AB71F0 *pArrayStateMap;
} ASObject_82AB71F0;

extern unsigned int fn_82AB6EC0(ASObject_82AB71F0 *pAS_Object, unsigned int eState);

unsigned int fn_82AB71F0(ASObject_82AB71F0 *pAS_Object, unsigned int eArrayState, unsigned int uIndex)
{
    if (!(eArrayState < pAS_Object->uNumArrayStates))
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "(SSM_UINT32)eArrayState < pAS_Object->ASMapInfo.uNumArrayStates",
            "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\inc\\Internal_AS.h", 0x27a);
    if (!(uIndex < pAS_Object->pArrayStateMap[eArrayState].uMaxCount))
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "uIndex < pAS_Object->ASMapInfo.pArrayStateMap[eArrayState].uMaxCount",
            "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\inc\\Internal_AS.h", 0x27a);
    return fn_82AB6EC0(pAS_Object, pAS_Object->pArrayStateMap[eArrayState].base + pAS_Object->pArrayStateMap[eArrayState].stride * uIndex);
}
