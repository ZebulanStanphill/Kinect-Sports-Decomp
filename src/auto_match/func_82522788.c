typedef struct Desc_82522788 {
    char pad[0x10];
    unsigned int align;
} Desc_82522788;

extern void *fn_82522D98(unsigned int size);
extern void *fn_82522E60(unsigned int size, unsigned int align);

void *fn_82522788(void *self, unsigned int size, const Desc_82522788 *d)
{
    unsigned int align = d->align;
    if (align == 0) {
        return fn_82522D98(size);
    }
    return fn_82522E60(size, align);
}
