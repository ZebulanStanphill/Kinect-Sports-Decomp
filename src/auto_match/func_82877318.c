typedef struct Path_82877318 {
    int unknown0;     /* 0x000 */
    char base[0x104]; /* 0x004 */
    char dir[0x104];  /* 0x108 */
    char root[0x104]; /* 0x20c */
    char name[0x104]; /* 0x310 */
} Path_82877318;

extern unsigned int strlen(const char *s);
extern int fn_82F66368(char *dst, unsigned int size, const char *src, unsigned int count);

static __forceinline const unsigned int *MaxOf(const unsigned int *a, const unsigned int *b)
{
    return *a < *b ? b : a;
}

int fn_82877318(Path_82877318 *self, const char *name)
{
    unsigned int rootLength = strlen(self->root);
    unsigned int dirLength = strlen(self->dir);
    unsigned int baseLength = strlen(self->base);
    const unsigned int *longer = MaxOf(&dirLength, &rootLength);
    if (*longer + strlen(name) + baseLength >= 0x104) {
        return 0x1f;
    }
    fn_82F66368(self->name, 0x104, name, 0x103);
    return 1;
}
