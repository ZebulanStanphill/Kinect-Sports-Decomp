/* std::string::erase(size_type off, size_type count) (VC10, out of line, /Og-). */
typedef struct String_8265DDD8 {
    char pad[0x10];
    unsigned int size;      /* 0x10 */
    unsigned int capacity;  /* 0x14 */
} String_8265DDD8;

extern void fn_82663F28(String_8265DDD8 *self);
extern char *fn_8265DDA0(String_8265DDD8 *self);
extern char *fn_822300F8(char *dst, const char *src, unsigned int count);
extern void fn_8265DAB8(String_8265DDD8 *self, unsigned int size);

String_8265DDD8 *fn_8265DDD8(String_8265DDD8 *self, unsigned int offset, unsigned int count)
{
    unsigned int newSize;

    if (self->size < offset) {
        fn_82663F28(self);
    }
    if (self->size - offset < count) {
        count = self->size - offset;
    }
    if (0 < count) {
        fn_822300F8(fn_8265DDA0(self) + offset, fn_8265DDA0(self) + offset + count, self->size - offset - count);
        newSize = self->size - count;
        fn_8265DAB8(self, newSize);
    }
    return self;
}
