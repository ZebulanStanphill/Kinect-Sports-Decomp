typedef struct Writer_82E1EC90 {
    unsigned char pad00[0xa];
    unsigned char open; /* 0x0a */
    unsigned char pad0b;
    unsigned char buffered; /* 0x0c */
    unsigned char pad0d[0x33];
    unsigned int capacity; /* 0x40 */
    unsigned int used;     /* 0x44 */
    unsigned char pad48[4];
    unsigned char *buffer; /* 0x4c */
    unsigned char pad50[0xc];
    unsigned char fixedBuffer; /* 0x5c */
} Writer_82E1EC90;

extern void *memcpy(void *dest, const void *src, unsigned int size);
extern void fn_82E1E9F0(Writer_82E1EC90 *writer, const void *data, unsigned int size);
extern void fn_82E1EAE8(Writer_82E1EC90 *writer);

void fn_82E1EC90(Writer_82E1EC90 *writer, const void *data, unsigned int size)
{
    if (writer->open) {
        if (writer->buffered) {
            if (writer->fixedBuffer) {
                if (writer->used + size + 1 < writer->capacity && size < writer->capacity) {
                    memcpy(writer->buffer + writer->used, data, size);
                    writer->used += size;
                }
            } else {
                if (writer->used + size + 1 >= writer->capacity) {
                    fn_82E1EAE8(writer);
                }
                if (size < writer->capacity) {
                    memcpy(writer->buffer + writer->used, data, size);
                    writer->used += size;
                } else {
                    fn_82E1E9F0(writer, data, size);
                }
                if (writer->used / 9 > writer->capacity / 10) {
                    fn_82E1EAE8(writer);
                }
            }
        } else {
            fn_82E1E9F0(writer, data, size);
        }
    }
}
