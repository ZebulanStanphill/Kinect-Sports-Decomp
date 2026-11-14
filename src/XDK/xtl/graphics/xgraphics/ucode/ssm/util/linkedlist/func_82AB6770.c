extern void fn_82AB15D0(void *obj, const char *fmt, const char *expr, const char *file, int line);

#define LL_ASSERT(e, line) \
    if (!(e)) fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", #e, \
        "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\ssm\\util\\linkedlist.cpp", line)

typedef struct ListItem_82AB6770 {
    void *data;
} ListItem_82AB6770;

extern void fn_82B6B230(void *pool, void *pItem);
void fn_82AB6770(ListItem_82AB6770 *pItem)
{
    LL_ASSERT(pItem, 0xdf7);
    if (pItem)
        fn_82B6B230(pItem->data, pItem);
}
