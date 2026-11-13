typedef struct String_82666808 {
    char pad[0x10];
    unsigned int size;      /* 0x10 */
    unsigned int capacity;  /* 0x14 */
} String_82666808;

extern unsigned int fn_8265DED8(String_82666808 *self);
extern void fn_82663F28(String_82666808 *self);
extern void fn_8265E080(String_82666808 *self);
extern unsigned char fn_8265DC30(String_82666808 *self, unsigned int size, int keep);
extern char *fn_8265DDA0(String_82666808 *self);
extern char *fn_822300F0(char *dst, const char *src, unsigned int count);
extern void fn_8265DAB8(String_82666808 *self, unsigned int size);

String_82666808 *fn_82666808(String_82666808 *self, String_82666808 *right, unsigned int offset, unsigned int count)
{
    unsigned int num;

    if (fn_8265DED8(right) < offset) {
        fn_82663F28(self);
    }
    num = fn_8265DED8(right) - offset;
    if (num < count) {
        count = num;
    }
    if (0xffffffff - self->size <= count) {
        fn_8265E080(self);
    }
    if (0 < count && fn_8265DC30(self, num = self->size + count, 0)) {
        fn_822300F0(fn_8265DDA0(self) + self->size, fn_8265DDA0(right) + offset, count);
        fn_8265DAB8(self, num);
    }
    return self;
}
