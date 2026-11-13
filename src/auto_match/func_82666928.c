typedef struct String_82666928 {
    char pad[0x10];
    unsigned int size;      /* 0x10 */
    unsigned int capacity;  /* 0x14 */
} String_82666928;

extern unsigned char fn_8265DD28(String_82666928 *self, const char *ptr);
extern String_82666928 *fn_82666808(String_82666928 *self, String_82666928 *right, unsigned int offset, unsigned int count);
extern void fn_8265E080(String_82666928 *self);
extern unsigned char fn_8265DC30(String_82666928 *self, unsigned int size, int keep);
extern char *fn_8265DDA0(String_82666928 *self);
extern char *fn_822300F0(char *dst, const char *src, unsigned int count);
extern void fn_8265DAB8(String_82666928 *self, unsigned int size);

String_82666928 *fn_82666928(String_82666928 *self, const char *ptr, unsigned int count)
{
    unsigned int num;

    if (fn_8265DD28(self, ptr)) {
        return fn_82666808(self, self, ptr - fn_8265DDA0(self), count);
    }
    if (0xffffffff - self->size <= count) {
        fn_8265E080(self);
    }
    if (0 < count && fn_8265DC30(self, num = self->size + count, 0)) {
        fn_822300F0(fn_8265DDA0(self) + self->size, ptr, count);
        fn_8265DAB8(self, num);
    }
    return self;
}
