typedef struct Stream_82FF99C0 {
    int pad;     /* 0x00 */
    char sub[4]; /* 0x04 */
} Stream_82FF99C0;

typedef struct Entry_82FF99C0 {
    char pad0[0x20];
    unsigned int loaded; /* 0x20 */
    unsigned int count;  /* 0x24 */
    void *data;          /* 0x28 */
    char pad2c[0x1c];
    unsigned char flags; /* 0x48 */
} Entry_82FF99C0;

extern void *lbl_831BC768;
extern void *fn_82FA5060(void *heap, unsigned int size);
extern int fn_82FF8938(void *stream, void *out, unsigned int size);
extern int fn_82FF8988(void *stream, unsigned int size, unsigned int *got);
extern void *fn_82FF8ED8(void *stream, unsigned int size);
extern void fn_82FF86A8(void *stream);

int fn_82FF99C0(Stream_82FF99C0 *stream, Entry_82FF99C0 *entry, unsigned int size, unsigned char mapped)
{
    int result;
    unsigned int count;
    unsigned int bytes;
    unsigned int skipped;
    void *data;

    result = 1;
    if (entry->loaded != 0) {
        fn_82FF8988(stream->sub, size, &skipped);
    } else {
        count = size / 12;
        bytes = count * 12;
        if (mapped == 0) {
            data = fn_82FA5060(lbl_831BC768, bytes);
            entry->data = data;
            if (data != 0) {
                entry->flags |= 0x40;
                fn_82FF8938(stream->sub, data, bytes);
            } else {
                result = 0x34;
            }
        } else {
            data = fn_82FF8ED8(stream->sub, bytes);
            if (entry->data == 0) {
                entry->data = data;
            }
            fn_82FF86A8(stream->sub);
        }
        if (entry->data != 0) {
            entry->count = count;
        }
    }
    return result;
}
