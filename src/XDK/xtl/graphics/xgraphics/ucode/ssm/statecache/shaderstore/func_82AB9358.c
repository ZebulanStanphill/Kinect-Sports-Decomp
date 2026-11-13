extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define SS_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\statecache\\shaderstore.cpp", line)

typedef void (*FreeFn_82AB9358)(void *ctx, void *p);

typedef struct ShaderStore_82AB9358 {
    void *pool;            /* 0x0 */
    void *ctx;             /* 0x4 */
    void *pad8;
    FreeFn_82AB9358 free;  /* 0xc */
} ShaderStore_82AB9358;

typedef struct SSItem_82AB9358 {
    void *pad0;
    void *data;            /* 0x4 */
    void *pad8;
    void *list;            /* 0xc */
} SSItem_82AB9358;

extern void *fn_82AB6498(void *list);
extern void *fn_82AB67A8(void *item);
extern void fn_82AB6BC8(void *pCS);
extern void fn_82AB6770(void *item);
extern void fn_82AB5FE0(void *list);
extern void fn_82B6B230(void *pool, void *item);

void fn_82AB9358(ShaderStore_82AB9358 *pShaderStore, SSItem_82AB9358 *pSSItem)
{
    void *item;
    void *pCS;

    SS_ASSERT(pShaderStore, 0xc1);
    SS_ASSERT(pSSItem, 0xc2);
    if (pSSItem->list != 0) {
        item = fn_82AB6498(pSSItem->list);
        while (item != 0) {
            pCS = fn_82AB67A8(item);
            SS_ASSERT(pCS, 0xcb);
            fn_82AB6BC8(pCS);
            fn_82AB6770(item);
            item = fn_82AB6498(pSSItem->list);
        }
        fn_82AB5FE0(pSSItem->list);
    }
    if (pSSItem->data != 0) {
        pShaderStore->free(pShaderStore->ctx, pSSItem->data);
    }
    fn_82B6B230(pShaderStore->pool, pSSItem);
}
