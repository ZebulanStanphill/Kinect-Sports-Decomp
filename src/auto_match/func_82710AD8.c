typedef struct Data_82710AD8 {
    int f0;
    int f4;
    int refcount;
} Data_82710AD8;

typedef struct Header_82710AD8 {
    char pad0[0x18];
    Data_82710AD8 *empty;
} Header_82710AD8;

typedef struct Page_82710AD8 {
    Header_82710AD8 *hdr;
} Page_82710AD8;

typedef struct String_82710AD8 {
    Data_82710AD8 *data;
} String_82710AD8;

extern unsigned int fn_82693A98(String_82710AD8 *s);
extern void fn_826949A8(String_82710AD8 *out, String_82710AD8 *s, int start, int end);

static __forceinline void SetEmpty_82710AD8(String_82710AD8 *out, String_82710AD8 *s)
{
    Data_82710AD8 *d = ((Page_82710AD8 *)((unsigned int)s->data & 0xfffffc00))->hdr->empty;
    out->data = d;
    d->refcount++;
}

String_82710AD8 *fn_82710AD8(String_82710AD8 *out, String_82710AD8 *s, int start, int length)
{
    int size;

    if (length == 0) {
        SetEmpty_82710AD8(out, s);
        return out;
    }
    start = start < 0 ? 0 : start;
    size = fn_82693A98(s);
    if (start >= size) {
        SetEmpty_82710AD8(out, s);
        return out;
    }
    if (length < 0 || start + length > size)
        length = size - start;
    fn_826949A8(out, s, start, start + length);
    return out;
}
