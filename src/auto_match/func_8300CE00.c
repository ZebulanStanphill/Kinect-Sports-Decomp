typedef unsigned int size_t;
extern void *memset(void *d, int c, size_t n);
extern void *fn_82FA5060(void *heap, unsigned int size);
extern int fn_8300D168(void *buffer, unsigned int count);
extern void *lbl_831BC768;

typedef struct Obj_8300CE00 {
    char pad00[0x16];
    unsigned short width;       /* 0x16 */
    char buffer[0xc];           /* 0x18 */
    unsigned char *rows;        /* 0x24 */
    unsigned char *rowsEnd;     /* 0x28 */
} Obj_8300CE00;

int fn_8300CE00(Obj_8300CE00 *o, unsigned short count)
{
    int bytes = (o->width + 7) / 8;
    int size = bytes * 2;

    o->rows = (unsigned char *)fn_82FA5060(lbl_831BC768, size);
    if (o->rows == 0) {
        return 2;
    }
    o->rowsEnd = o->rows + bytes;
    memset(o->rows, 0, size);
    return fn_8300D168(o->buffer, count < 4 ? count : 4);
}
