typedef struct Context_82FE9F40 {
    int result;   /* 0x0 */
    int pad;      /* 0x4 */
    void **event; /* 0x8 */
    void *handle; /* 0xc */
} Context_82FE9F40;

extern void *lbl_831BC768;
extern void *fn_82FA5060(void *heap, unsigned int size);
extern void *fn_82FE89F8(void *item);
extern int fn_82FE7C08(int mode, int target, void *source, void **items, unsigned int count);
extern int fn_82FE71B8(Context_82FE9F40 *context);
extern int fn_82FE7428(void (*callback)(void), Context_82FE9F40 *context, unsigned char isDefault, int target,
                       void *source, void **items, unsigned int count, unsigned char copy);
extern int fn_82FE7220(Context_82FE9F40 *context, int code);
extern void fn_82FE72A0(void);

int fn_82FE9F40(int mode, int target, void *source, void **items, unsigned int count)
{
    void *converted;
    void *single;
    void **list;
    unsigned int i;
    int result;
    Context_82FE9F40 context;

    if (items == 0 || count == 0) {
        return 0x1f;
    }
    converted = fn_82FE89F8(source);
    if (count == 1) {
        single = fn_82FE89F8(items[0]);
        return fn_82FE7C08(mode, target, converted, &single, 1);
    }
    list = (void **)fn_82FA5060(lbl_831BC768, count * 4);
    if (list != 0) {
        for (i = 0; i < count; i++) {
            list[i] = fn_82FE89F8(items[i]);
        }
        result = fn_82FE71B8(&context);
        if (result == 1) {
            result = fn_82FE7220(
                &context, fn_82FE7428(fn_82FE72A0, &context, mode == 0, target, converted, list, count, 0));
        }
        return result;
    }
    return 0x34;
}
