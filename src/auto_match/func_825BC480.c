typedef struct {
    int pad[4];
    int index;
} Key_825BC480;

extern void fn_82536008(void *item);
extern void fn_82536288(void **slot);
extern void fn_825BC3B0(void **items, Key_825BC480 *key, void *ctx);

void fn_825BC480(void *ctx, void **items, Key_825BC480 *key, int unused, unsigned int kind)
{
    switch (kind) {
    case 0:
        fn_825BC3B0(items, key, ctx);
        break;
    case 1:
        fn_82536008(items[key->index]);
        fn_82536288(&items[key->index]);
        break;
    }
}
