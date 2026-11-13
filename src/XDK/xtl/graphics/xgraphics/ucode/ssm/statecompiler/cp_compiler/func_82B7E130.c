extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define SSM_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "E:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\AbstractState\\AS_Interface.h", line)

#define SSM_NULL 0

typedef struct ArrayStateMap_82B7E130 {
    unsigned int base;
    unsigned int stride;
    unsigned int uMaxCount;
} ArrayStateMap_82B7E130;

typedef struct ASObject_82B7E130 {
    unsigned int unk0[2];
    unsigned int *values;
    unsigned char pad[0x48 - 0xc];
    unsigned int uNumArrayStates;
    unsigned int unk4c[2];
    ArrayStateMap_82B7E130 *pArrayStateMap;
} ASObject_82B7E130;

unsigned int fn_82B7E130(ASObject_82B7E130 *pAS_Object, unsigned int eArrayState, unsigned int uIndex, unsigned int *pASValue)
{
    ArrayStateMap_82B7E130 *map; unsigned int idx;
    SSM_ASSERT(pASValue != SSM_NULL, 0xa3);
    if (!(eArrayState < pAS_Object->uNumArrayStates))
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "(SSM_UINT32)eArrayState < pAS_Object->ASMapInfo.uNumArrayStates",
            "E:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\AbstractState\\AS_Interface.h", 0xa4);
    if (!(uIndex < pAS_Object->pArrayStateMap[eArrayState].uMaxCount))
        fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "uIndex < pAS_Object->ASMapInfo.pArrayStateMap[eArrayState].uMaxCount",
            "E:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\AbstractState\\AS_Interface.h", 0xa5);
    map = &pAS_Object->pArrayStateMap[eArrayState];
    idx = map->base + map->stride * uIndex;
    *pASValue = pAS_Object->values[idx];
    return idx;
}
