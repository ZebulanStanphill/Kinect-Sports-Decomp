/* std::wstring::erase(size_type off, size_type count) (VC10, out of line, /Og-). */
typedef struct String_82663C28 {
    char pad[0x10];
    unsigned int size;      /* 0x10 */
    unsigned int capacity;  /* 0x14 */
} String_82663C28;

extern void fn_82663F28(String_82663C28 *self);
extern unsigned short *fn_82663B70(String_82663C28 *self);
extern unsigned short *fn_822974E8(unsigned short *dst, const unsigned short *src, unsigned int count);
extern void fn_82663848(String_82663C28 *self, unsigned int size);

String_82663C28 *fn_82663C28(String_82663C28 *self, unsigned int offset, unsigned int count)
{
    unsigned int newSize;

    if (self->size < offset) {
        fn_82663F28(self);
    }
    if (self->size - offset < count) {
        count = self->size - offset;
    }
    if (0 < count) {
        fn_822974E8(fn_82663B70(self) + offset, fn_82663B70(self) + offset + count, self->size - offset - count);
        newSize = self->size - count;
        fn_82663848(self, newSize);
    }
    return self;
}
