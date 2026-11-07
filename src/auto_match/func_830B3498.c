typedef struct Str_830B3498 {
    union {
        char buf[16];
        char *ptr;
    } bx;                  /* 0xfc */
    unsigned int size;     /* 0x10c */
    unsigned int res;      /* 0x110 */
} Str_830B3498;

typedef struct Obj_830B3498 {
    char pad0[0xec];
    void *handle;          /* 0xec */
    void *buffer;          /* 0xf0 */
    unsigned int bufSize;  /* 0xf4 */
    unsigned int fileSize; /* 0xf8 */
    Str_830B3498 name;     /* 0xfc */
} Obj_830B3498;

extern void *fn_8265CA60(unsigned int size);
extern int fn_82A1E658(void *h);
extern unsigned int fn_82A29D80(void *h, unsigned int *high);
extern void *fn_82A29DE8(const char *name, unsigned int access, unsigned int share,
                         void *sa, unsigned int disp, unsigned int flags, void *tmpl);

static __forceinline const char *Str_c_str_830B3498(Str_830B3498 *s)
{
    return 16 <= s->res ? s->bx.ptr : s->bx.buf;
}

int fn_830B3498(Obj_830B3498 *p)
{
    void *h;
    unsigned int size;

    if (p->name.size == 0) {
        return (int)0x80070057;
    }
    if (p->handle != 0) {
        fn_82A1E658(p->handle);
    }
    h = fn_82A29DE8(Str_c_str_830B3498(&p->name), 0x80000000, 0, 0, 3, 0, 0);
    p->handle = h;
    if (h == (void *)-1) {
        return (int)0x80040002;
    }
    size = fn_82A29D80(h, 0);
    if (size == (unsigned int)-1) {
        fn_82A1E658(p->handle);
        p->handle = 0;
        return (int)0x80040003;
    }
    if (size == 0) {
        fn_82A1E658(p->handle);
        p->handle = 0;
        return (int)0x80040004;
    }
    p->fileSize = size;
    if (p->buffer == 0) {
        p->buffer = fn_8265CA60(p->bufSize);
    }
    return 0;
}
