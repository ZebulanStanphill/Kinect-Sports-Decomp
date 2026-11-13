extern int fn_82AB15D0();
extern void fn_82AA0750(void *o, unsigned int state, unsigned int value);

typedef struct ArrayState_82AA0840 {
    unsigned int base;
    unsigned int stride;
    unsigned int uMaxCount;
} ArrayState_82AA0840;

typedef struct AS_82AA0840 {
    char pad0[0x10];
    unsigned int flags;
    char pad14[0x48 - 0x14];
    unsigned int uNumArrayStates;
    char pad4c[0x54 - 0x4c];
    ArrayState_82AA0840 *pArrayStateMap;
} AS_82AA0840;

void fn_82AA0840(AS_82AA0840 *pAS_Object, unsigned int eArrayState, unsigned int uIndex, unsigned int value)
{
    if (eArrayState >= pAS_Object->uNumArrayStates) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "(SSM_UINT32)eArrayState < pAS_Object->ASMapInfo.uNumArrayStates", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\inc\\Internal_AS.h", 0x22d);
    }
    if (uIndex >= pAS_Object->pArrayStateMap[eArrayState].uMaxCount) {
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "uIndex < pAS_Object->ASMapInfo.pArrayStateMap[eArrayState].uMaxCount", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\inc\\Internal_AS.h", 0x22d);
    }
    {
        unsigned int state = pAS_Object->pArrayStateMap[eArrayState].base + pAS_Object->pArrayStateMap[eArrayState].stride * uIndex;
        pAS_Object->flags |= 1;
        fn_82AA0750(pAS_Object, state, value);
    }
}
