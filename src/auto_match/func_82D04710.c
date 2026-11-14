// Havok string buffer: drop the directory part of a path, keeping what follows its
// last '/' or '\\'. The searches and the removal are inlined.
typedef struct Str_82D04710 {
    char *data;
    int len;            // including the terminator
    int cap;            // capacity in the low 30 bits, flags above
} Str_82D04710;

static __forceinline int LastIndexOf(Str_82D04710 *s, char c, int start, int end)
{
    int lim = s->len - 1;
    int i;

    if (lim < end)
        end = lim;
    for (i = end - 1; i >= start; i--) {
        if (s->data[i] == c)
            return i;
    }
    return -1;
}

static __forceinline void RemoveFront(Str_82D04710 *s, int n)
{
    if (n > 0) {
        char *dst = s->data;
        char *src = dst + n;
        int count = s->len -= n;
        int i;

        for (i = 0; i < count; i++)
            dst[i] = src[i];
    }
}

void fn_82D04710(Str_82D04710 *s)
{
    int slash = LastIndexOf(s, '/', 0, 0x7fffffff);
    int backslash = LastIndexOf(s, '\\', 0, 0x7fffffff);
    int last = backslash > slash ? backslash : slash;

    if (last >= 0)
        RemoveFront(s, last + 1);
}
