/* Stores size rounded up to the alignment returned by fn_82691DB0 at +0x220. */
typedef struct Self_82692948 {
    char pad0[0x220];
    unsigned int alignedSize;       /* 0x220 */
} Self_82692948;

extern unsigned int fn_82691DB0(Self_82692948 *self);

unsigned int fn_82692948(Self_82692948 *self, unsigned int size)
{
    unsigned int align = fn_82691DB0(self);
    size = (size + align - 1) / align * align;
    self->alignedSize = size;
    return size;
}
