extern void fn_82AB15D0(int, const char *, const char *, const char *, int);

typedef struct ArrayStateMap_82B6F100 {
    unsigned int base;
    unsigned int stride;
    unsigned int uMaxCount;
} ArrayStateMap_82B6F100;

typedef struct ASObject_82B6F100 {
    unsigned char pad[0x48];
    unsigned int uNumArrayStates;
    unsigned int unk4c[2];
    ArrayStateMap_82B6F100 *pArrayStateMap;
} ASObject_82B6F100;

extern float fn_82B6E130(ASObject_82B6F100 *pAS_Object, unsigned int eState);

float fn_82B6F100(ASObject_82B6F100 *pAS_Object, unsigned int eArrayState, unsigned int uIndex)
{
    if (!(eArrayState < pAS_Object->uNumArrayStates))
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "(SSM_UINT32)eArrayState < pAS_Object->ASMapInfo.uNumArrayStates",
            "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\inc\\Internal_AS.h", 0x29e);
    if (!(uIndex < pAS_Object->pArrayStateMap[eArrayState].uMaxCount))
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "uIndex < pAS_Object->ASMapInfo.pArrayStateMap[eArrayState].uMaxCount",
            "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\inc\\Internal_AS.h", 0x29e);
    return fn_82B6E130(pAS_Object, pAS_Object->pArrayStateMap[eArrayState].base + pAS_Object->pArrayStateMap[eArrayState].stride * uIndex);
}
