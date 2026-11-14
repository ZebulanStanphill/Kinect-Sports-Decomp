// Havok string buffer: cut the path at its last '/' or '\\' (keeping the directory part), or
// clear it when there is no separator. The searches and the setLength are inlined.
typedef struct Mem_82D05070 {
    int f0;
    int f4;
    int f8;
    void *heap;         // 0x0c
} Mem_82D05070;

typedef struct Str_82D05070 {
    char *data;
    int len;            // including the terminator
    int cap;            // capacity in the low 30 bits, flags above
} Str_82D05070;

extern Mem_82D05070 *fn_82CE5410(void);
extern void fn_82CE6310(void *heap, Str_82D05070 *s, int capacity, int elemSize);
extern void fn_82D04B20(Str_82D05070 *s);

static __forceinline int LastIndexOf(Str_82D05070 *s, char c, int start, int end)
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

static __forceinline void Reserve(Str_82D05070 *s, int n)
{
    void *heap = fn_82CE5410()->heap;
    int cap = s->cap & 0x3fffffff;

    if (cap < n) {
        int newCap = cap * 2;
        fn_82CE6310(heap, s, n < newCap ? newCap : n, 1);
    }
}

static __forceinline void SetLength(Str_82D05070 *s, int len)
{
    Reserve(s, len + 1);
    s->len = len + 1;
    s->data[len] = 0;
}

void fn_82D05070(Str_82D05070 *s)
{
    int slash = LastIndexOf(s, '/', 0, 0x7fffffff);
    int backslash = LastIndexOf(s, '\\', 0, 0x7fffffff);
    int last = backslash > slash ? backslash : slash;

    if (last >= 0)
        SetLength(s, last);
    else
        fn_82D04B20(s);
}
