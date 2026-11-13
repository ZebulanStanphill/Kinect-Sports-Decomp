extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define CP_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecompiler\\compiledprogram.cpp", line)

typedef struct StatePair_82B7FE30 {
    int state;
    int value;
} StatePair_82B7FE30;

extern void *fn_82AB63F8(void *pList);
extern void *fn_82AB66F8(void *pList, void *pItem);
extern StatePair_82B7FE30 *fn_82AB67A8(void *pItem);
extern void fn_82B9FA18(void *pCP, int state, int value);

void fn_82B7FE30(void *pCP, void *pStateList)
{
    void *pItem;
    StatePair_82B7FE30 *pPair;

    CP_ASSERT(pCP, 0x282);
    CP_ASSERT(pStateList, 0x283);
    for (pItem = fn_82AB63F8(pStateList); pItem != 0; pItem = fn_82AB66F8(pStateList, pItem)) {
        pPair = fn_82AB67A8(pItem);
        fn_82B9FA18(pCP, pPair->state, pPair->value);
    }
}
