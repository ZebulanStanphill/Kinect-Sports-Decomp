/* std::string::compare(size_type off, size_type count, const char *ptr, size_type ptrCount) (VC10, out of line, /Og-). */
typedef struct String_8265FD30 {
    char pad[0x10];
    unsigned int size;      /* 0x10 */
    unsigned int capacity;  /* 0x14 */
} String_8265FD30;

extern void fn_82663F28(String_8265FD30 *self);
extern char *fn_8265DDA0(String_8265FD30 *self);
extern int fn_822462B0(const char *a, const char *b, unsigned int count);

int fn_8265FD30(String_8265FD30 *self, unsigned int offset, unsigned int count, const char *ptr, unsigned int ptrCount)
{
    unsigned int result;

    if (self->size < offset) {
        fn_82663F28(self);
    }
    if (self->size - offset < count) {
        count = self->size - offset;
    }
    result = fn_822462B0(fn_8265DDA0(self) + offset, ptr, count < ptrCount ? count : ptrCount);
    return result != 0 ? (int)result : count < ptrCount ? -1 : count == ptrCount ? 0 : 1;
}
