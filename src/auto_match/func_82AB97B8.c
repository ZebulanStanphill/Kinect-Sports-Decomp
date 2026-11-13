extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define SS_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\shaderstore.cpp", line)

typedef struct SSItem_82AB97B8 { int f0; int f4; int f8; void *list; } SSItem_82AB97B8;
extern SSItem_82AB97B8 *fn_82AB9468(void *pShaderStore, int key);
extern void *fn_82AB6368(void *list, void *pCS);

int fn_82AB97B8(void *pShaderStore, int key, void *pCS)
{
    SSItem_82AB97B8 *pSSItem;
    void *pNewListItem;

    SS_ASSERT(pShaderStore, 0x2eb);
    SS_ASSERT(pCS, 0x2ec);
    pSSItem = fn_82AB9468(pShaderStore, key);
    if (pSSItem == 0) {
        SS_ASSERT(pSSItem, 0x2f4);
        return 0x13;
    }
    pNewListItem = fn_82AB6368(pSSItem->list, pCS);
    if (pNewListItem == 0) {
        SS_ASSERT(pNewListItem, 0x2fe);
        return 0x10;
    }
    return 0;
}
