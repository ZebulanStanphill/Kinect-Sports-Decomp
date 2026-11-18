void *memcpy(void *dst, const void *src, unsigned int size);

typedef struct Message_82FE7428 {
    int kind;           /* 0x00 */
    int a;              /* 0x04 */
    int b;              /* 0x08 */
    int flag;           /* 0x0c */
    int c;              /* 0x10 */
    int d;              /* 0x14 */
    unsigned char e;    /* 0x18 */
    unsigned int count; /* 0x1c */
    void *items;        /* 0x20 */
} Message_82FE7428;

extern void *lbl_831BC768;
extern void *lbl_832642F0;
extern void *fn_82FA5060(void *heap, unsigned int size);
extern void fn_82FA5190(void *heap, void *p);
extern int fn_82FFA6E8(void *queue, Message_82FE7428 m);

int fn_82FE7428(int a, int b, unsigned char e, int c, int d, void **items, unsigned int count,
                unsigned char copy)
{
    Message_82FE7428 m;
    int result;

    if (count == 0 || items == 0) {
        return 0x1f;
    }
    m.kind = 4;
    m.a = a;
    m.b = b;
    m.flag = 0;
    m.e = e;
    m.c = c;
    m.d = d;
    m.count = count;
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
