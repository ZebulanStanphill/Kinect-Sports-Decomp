typedef struct Shape_82CEEF50 {
    void *f0;
    char pad4[0xd - 0x4];
    unsigned char type;
} Shape_82CEEF50;

extern void *fn_82CFD5A8(Shape_82CEEF50 *shape);
extern void *fn_82CEEB70(void *item, void *container);
extern void fn_82CEE7F8(void *owner, void *item, void *container, void *ctx);
extern void fn_82CEEE70(void *owner, void *container, void **items, int count, void *ctx);
extern void fn_82CEEA70(Shape_82CEEF50 *shape, void *item, void *ctx);
extern void fn_82CFFA08(void *ctx, void *owner, void **item);

void fn_82CEEF50(Shape_82CEEF50 *shape, void **items, int count, void *ctx)
{
    void *container;
    void *owner;
    int i;

    if (count <= 0) {
        return;
    }
    switch (shape->type) {
    case 0x14:
        container = fn_82CFD5A8(shape);
        if (container != 0) {
            for (i = 0; i < count; i++) {
                owner = fn_82CEEB70(items[i], container);
                if (owner == 0) {
                    owner = shape->f0;
                }
                fn_82CEE7F8(owner, items[i], container, ctx);
            }
        }
        break;
    case 0x19:
        container = fn_82CFD5A8(shape);
        if (container != 0) {
            fn_82CEEE70(shape->f0, container, items, count, ctx);
        }
        break;
    case 0x1d:
        for (i = 0; i < count; i++) {
            fn_82CEEA70(shape, items[i], ctx);
        }
        break;
    case 0x21:
        for (i = 0; i < count; i++) {
            fn_82CFFA08(ctx, shape->f0, &items[i]);
        }
        break;
    }
}
