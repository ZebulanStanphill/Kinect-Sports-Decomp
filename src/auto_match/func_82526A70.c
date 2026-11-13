typedef struct Obj_82526A70 {
    char *name;
} Obj_82526A70;

extern unsigned int strlen(const char *s);
extern char *fn_82522D98(unsigned int size);

static __forceinline void CopyN(char *dst, const char *src, unsigned int n)
{
    char *end = dst + n;
    while (dst < end && (*dst++ = *src++) != 0)
        ;
    if (dst == end)
        dst[-1] = 0;
}

void fn_82526A70(Obj_82526A70 *self, const char *s)
{
    unsigned int len = strlen(s) + 1;
    self->name = fn_82522D98(len + 1);
    CopyN(self->name, s, len);
}
