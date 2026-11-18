void *memcpy(void *dst, const void *src, unsigned int size);

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
extern void fn_82FA5190(void *heap, void *p);
extern int fn_82FFA6E8(void *queue, Message_82FE7320 m);

int fn_82FE7320(int mode, int a, int b, void **items, unsigned int count, unsigned char copy)
{
    Message_82FE7320 m;
    int result;

    if (count == 0) {
        return 0x1f;
    }
    m.b = b;
    m.a = a;
    m.count = count;
    m.flag = 0;
    m.kind = mode ? 3 : 2;
    if (count == 1) {
        m.items = *items;
    } else if (copy != 0) {
        m.items = fn_82FA5060(lbl_831BC768, count * 4);
        if (m.items == 0) {
            return 0x34;
        }
        memcpy(m.items, items, count * 4);
    } else {
        m.items = items;
    }
    result = fn_82FFA6E8(lbl_832642F0, m);
    if (result != 1 && count != 1) {
        fn_82FA5190(lbl_831BC768, m.items);
    }
    return result;
}
