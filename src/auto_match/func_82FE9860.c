typedef struct Context_82FE9860 {
    int result;   /* 0x0 */
    int pad;      /* 0x4 */
    void **event; /* 0x8 */
    void *handle; /* 0xc */
} Context_82FE9860;

extern void *lbl_831BC768;
extern void *fn_82FA5060(void *heap, unsigned int size);
extern void *fn_82FE89F8(void *item);
extern int fn_82FE7A60(int mode, void **items, unsigned int count);
extern void *fn_82A1E6A0(void *attributes, int manualReset, int initialState, const char *name);
extern int fn_82FE7320(int mode, void (*callback)(void), Context_82FE9860 *context, void **items,
                       unsigned int count, unsigned char copy);
extern int fn_82FE7220(Context_82FE9860 *context, int code);
extern void fn_82FE72A0(void);

int fn_82FE9860(int mode, void **items, unsigned int count)
{
    void **list;
    void *single;
    unsigned int i;
    Context_82FE9860 context;

    if (count >= 1) {
        if (count != 1) {
            list = (void **)fn_82FA5060(lbl_831BC768, count * 4);
            if (list != 0) {
                for (i = 0; i < count; i++) {
                    list[i] = fn_82FE89F8(items[i]);
                }
                context.handle = fn_82A1E6A0(0, 0, 0, 0);
                if (context.handle == 0) {
                    return 2;
                }
                context.event = &context.handle;
                return fn_82FE7220(&context, fn_82FE7320(mode, fn_82FE72A0, &context, list, count, 0));
            }
            return 0x34;
        }
        single = fn_82FE89F8(items[0]);
        return fn_82FE7A60(mode, &single, 1);
    }
    return 0x1f;
}
