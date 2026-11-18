typedef struct Message_82FE7320 {
    int kind;           /* 0x0 */
    int a;              /* 0x4 */
    int b;              /* 0x8 */
    int flag;           /* 0xc */
    unsigned int count; /* 0x10 */
    void *items;        /* 0x14 */
    int v[3];           /* 0x18 */
} Message_82FE7320;

extern void *lbl_831BC768;
extern void *lbl_832642F0;
extern void *fn_82FA5060(void *heap, unsigned int size);
extern void *fn_82FE89F8(void *item);
extern int fn_82FFA6E8(void *queue, Message_82FE7320 m);
extern int fn_82FE7320(int mode, int a, int b, void **items, unsigned int count, unsigned char copy);

int fn_82FE9A88(int mode, void **items, unsigned int count, int a, int b)
{
    void **list;
    unsigned int i;
    Message_82FE7320 m;

    if (count >= 1) {
        if (count != 1) {
            list = (void **)fn_82FA5060(lbl_831BC768, count * 4);
            if (list != 0) {
                for (i = 0; i < count; i++) {
                    list[i] = fn_82FE89F8(items[i]);
                }
                return fn_82FE7320(mode, a, b, list, count, 0);
            }
            return 0x34;
        }
        m.items = fn_82FE89F8(items[0]);
        m.b = b;
        m.a = a;
        m.flag = 0;
        m.kind = mode ? 3 : 2;
        m.count = 1;
        return fn_82FFA6E8(lbl_832642F0, m);
    }
    return 0x1f;
}
