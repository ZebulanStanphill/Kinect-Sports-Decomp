#include <string.h>

typedef struct Buffer_82CABB00 {
    int width;                  /* 0x00 */
    int height;                 /* 0x04 */
    int kind;                   /* 0x08 */
    void *data;                 /* 0x0c */
} Buffer_82CABB00;

extern void *fn_82C53960(unsigned int size, int flags);
extern void fn_82C53970(void *p);

Buffer_82CABB00 *fn_82CABB00(int height, int width)
{
    Buffer_82CABB00 *b = (Buffer_82CABB00 *)fn_82C53960(sizeof(Buffer_82CABB00), 0);

    if (b == 0)
        return 0;
    memset(b, 0, sizeof(Buffer_82CABB00));
    b->width = width;
    b->height = height;
    b->data = fn_82C53960(height * width, 3);
    if (b->data == 0) {
        fn_82C53970(b);
        return 0;
    }
    b->kind = b->height > 2 ? 2 : 1;
    return b;
}
