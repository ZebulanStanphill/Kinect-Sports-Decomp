typedef struct Buffer_8295A398 Buffer_8295A398;

typedef struct BufferVtbl_8295A398 {
    void *QueryInterface;
    void *AddRef;
    unsigned int (*Release)(Buffer_8295A398 *self);       /* 0x8 */
    void *(*GetBufferPointer)(Buffer_8295A398 *self);     /* 0xc */
    unsigned int (*GetBufferSize)(Buffer_8295A398 *self); /* 0x10 */
} BufferVtbl_8295A398;

struct Buffer_8295A398 {
    BufferVtbl_8295A398 *vt;
};

typedef struct Table_8295A398 Table_8295A398;

typedef struct TableVtbl_8295A398 {
    void *slot0;
    void *slot1;
    int (*GetBuffer)(Table_8295A398 *self, Buffer_8295A398 **out); /* 0x8 */
} TableVtbl_8295A398;

struct Table_8295A398 {
    TableVtbl_8295A398 *vt;
};

typedef struct Writer_8295A398 {
    unsigned int tag;   /* 0x0 */
    unsigned int size;  /* 0x4 */
    unsigned int first; /* 0x8 */
    void *last;         /* 0xc */
} Writer_8295A398;

typedef struct Compiler_8295A398 {
    unsigned char pad0[0xe4];
    Table_8295A398 *table; /* 0xe4 */
    unsigned char pade8[0x110 - 0xe8];
    unsigned int *tokens; /* 0x110 */
    int tokenCount;       /* 0x114 */
    unsigned char pad118[0x120 - 0x118];
    int end;         /* 0x120 */
    int commentSize; /* 0x124 */
} Compiler_8295A398;

extern void fn_82935220(Writer_8295A398 *writer, unsigned int tag);
extern unsigned int fn_82935240(Writer_8295A398 *writer);
extern void fn_82935258(Writer_8295A398 *writer);
extern int fn_829352D0(Writer_8295A398 *writer, void *data, unsigned int size, int kind, void *arg,
                       int flags);
extern int fn_829355B8(Writer_8295A398 *writer, unsigned int *dest, unsigned int count);
extern int fn_82958950(Compiler_8295A398 *self, unsigned int count);
extern int fn_82976860(Compiler_8295A398 *self);
extern void fn_82975B00(Compiler_8295A398 *self, int location, int code, const char *format, ...);
extern void *memmove(void *dest, const void *src, unsigned int size);

int fn_8295A398(Compiler_8295A398 *self)
{
    Buffer_8295A398 *buffer = 0;
    Writer_8295A398 writer;
    int hr;
    unsigned int size;

    fn_82935220(&writer, 0x53455250);
    hr = fn_82976860(self);
    if (hr < 0)
        goto done;
    hr = self->table->vt->GetBuffer(self->table, &buffer);
    if (hr < 0)
        goto done;
    if (hr == 0) {
        hr = fn_829352D0(&writer, buffer->vt->GetBufferPointer(buffer), buffer->vt->GetBufferSize(buffer), 1,
                         0, 0);
        if (hr < 0)
            goto done;
    }
    size = fn_82935240(&writer);
    if (size <= 0x8000) {
        hr = fn_82958950(self, size);
        if (hr < 0)
            goto done;
        memmove(self->tokens + size + 1, self->tokens + 1, (self->tokenCount - 1) * 4);
        hr = fn_829355B8(&writer, self->tokens + 1, size);
        if (hr < 0)
            goto done;
        self->tokenCount += size;
        self->commentSize += size;
        self->end = self->tokenCount;
        hr = 0;
    } else {
        fn_82975B00(self, 0, 0x11c4, "constant table info exceeds maximum comment size");
        hr = 0x80004005;
    }
done:
    if (buffer != 0) {
        buffer->vt->Release(buffer);
        buffer = 0;
    }
    fn_82935258(&writer);
    return hr;
}
