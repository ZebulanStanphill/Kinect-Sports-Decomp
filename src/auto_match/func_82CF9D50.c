typedef struct Heap_82CF9D50 Heap_82CF9D50;

typedef struct {
    void *f0;
    void *f4;
    void *f8;
    void *fc;
    void (*Free)(Heap_82CF9D50 *h, void *data, int count, int elemSize);
} HeapVt_82CF9D50;

struct Heap_82CF9D50 {
    HeapVt_82CF9D50 *vt;
};

typedef struct {
    int f0;
    int f4;
    int f8;
    Heap_82CF9D50 *heap;
} Mem_82CF9D50;

typedef struct {
    void *data;
    int count;
    int cap;
} Buf_82CF9D50;

typedef struct {
    Buf_82CF9D50 b;
    int pad;
} PtrArr_82CF9D50;

typedef struct {
    Buf_82CF9D50 b;
    int pad[9];
} Str_82CF9D50;

extern Mem_82CF9D50 *fn_82CE5410(void);
extern int fn_82D04358(Str_82CF9D50 *s, const char *text);
extern int fn_82D04440(Str_82CF9D50 *s, int ch, int start, int end);
extern void fn_82D046D0(Str_82CF9D50 *s, int n);
extern void fn_82D047D8(Str_82CF9D50 *s, int from, int to, int all);
extern void fn_82D048D0(Str_82CF9D50 *s, int sep, PtrArr_82CF9D50 *out);
extern void fn_82D04B20(Str_82CF9D50 *s);
extern void fn_82D04C78(Str_82CF9D50 *s, const char *text);
extern void fn_82D05178(Str_82CF9D50 *s, const char *text);
extern void fn_82D05468(Str_82CF9D50 *s, const char *text, int n);

static __forceinline void RemoveAt_82CF9D50(Buf_82CF9D50 *b, int i)
{
    char *dst;
    char *src;
    int n;
    int k;

    b->count--;
    dst = (char *)((char **)b->data + i);
    src = dst + 4;
    n = (b->count - i) * 4;
    for (k = 0; k < n; k += 4) {
        *(int *)(dst + k) = *(int *)(src + k);
    }
}

static __forceinline void FreeBuf_82CF9D50(Buf_82CF9D50 *b, int elemSize)
{
    Heap_82CF9D50 *h = fn_82CE5410()->heap;
    b->count = 0;
    if ((b->cap & (int)0x80000000) == 0) {
        h->vt->Free(h, b->data, b->cap & 0x3fffffff, elemSize);
    }
    b->data = 0;
    b->cap = (int)0x80000000;
}

char *fn_82CF9D50(const char *path, Str_82CF9D50 *out)
{
    Str_82CF9D50 tmp;
    PtrArr_82CF9D50 parts;
    int i;
    char hasPrefix;
    char *result;

    fn_82D05178(&tmp, path);
    parts.b.data = 0;
    parts.b.count = 0;
    parts.b.cap = (int)0x80000000;
    fn_82D048D0(&tmp, '/', &parts);

    for (i = 0; i < parts.b.count; i++) {
        char *s = ((char **)parts.b.data)[i];
        if (s[0] == '.') {
            if (s[1] == 0) {
                RemoveAt_82CF9D50(&parts.b, i);
                i--;
            } else if (s[1] == '.') {
                RemoveAt_82CF9D50(&parts.b, i);
                i--;
                if (i >= 0) {
                    RemoveAt_82CF9D50(&parts.b, i);
                    i--;
                }
            }
        }
    }

    fn_82D04B20(out);
    for (i = 0; i < parts.b.count; i++) {
        fn_82D04C78(out, ((char **)parts.b.data)[i]);
        if (i != parts.b.count - 1) {
            fn_82D04C78(out, "/");
        }
    }

    if (fn_82D04358(out, "d:/") != 0 || fn_82D04440(out, ':', 0, 0x7fffffff) != -1) {
        hasPrefix = 1;
    } else {
        hasPrefix = 0;
    }
    if (!hasPrefix) {
        char *d = (char *)out->b.data;
        for (i = 0; d[i] == '.' || d[i] == '/'; i++) {
        }
        fn_82D046D0(out, i);
        fn_82D05468(out, "d:/", -1);
    }

    fn_82D047D8(out, '/', '\\', 1);
    result = (char *)out->b.data;

    FreeBuf_82CF9D50(&parts.b, 4);
    FreeBuf_82CF9D50(&tmp.b, 1);
    return result;
}
