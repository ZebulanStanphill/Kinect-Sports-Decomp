typedef unsigned int size_t;
extern void *memcpy(void *d, const void *s, size_t n);
extern void *fn_82FA5060(void *heap, unsigned int size);
extern void *lbl_831BC768;

typedef struct Blob_8301E890 {
    int a;
    void *data;
    unsigned short b;
    unsigned char c;
} Blob_8301E890;

typedef struct Obj_8301E890 {
    char pad0[0x10];
    void *items;           /* 0x10 */
    Blob_8301E890 blob;    /* 0x14 */
} Obj_8301E890;

extern int fn_8300E490(Blob_8301E890 *o, int a, const void *src, unsigned int size,
                       unsigned char b, unsigned char c);

int fn_8301E890(Obj_8301E890 *self, const unsigned char *data)
{
    int count;
    unsigned int size;
    unsigned int len;
    unsigned char b;
    unsigned char c;
    int result;

    data += 4;
    count = *(const int *)data;
    data += 4;
    size = count * 4;
    if (size != 0) {
        self->items = fn_82FA5060(lbl_831BC768, size);
        if (self->items == 0) {
            return 0x34;
        }
        memcpy(self->items, data, size);
    } else {
        self->items = 0;
    }
    data += size;
    len = *(const unsigned int *)data;
    data += 4;
    b = *data;
    data++;
    c = *data;
    data++;
    result = fn_8300E490(&self->blob, count, data, len, b, c);
    if (result != 1) {
        return result;
    }
    return result;
}
