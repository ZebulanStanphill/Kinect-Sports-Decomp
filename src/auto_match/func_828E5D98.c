long _InterlockedIncrement(long volatile *addend);

typedef struct RefCount_828E5D98 {
    void *vtable;
    long uses;  /* 0x04 */
    long weaks; /* 0x08 */
} RefCount_828E5D98;

typedef struct SharedPtr_828E5D98 {
    void *ptr;              /* 0x00 */
    RefCount_828E5D98 *rep; /* 0x04 */
} SharedPtr_828E5D98;

typedef struct Buffer_828E5D98 {
    char unk00[0x10];
    int unk10; /* 0x10 */
    int unk14; /* 0x14 */
    int unk18; /* 0x18 */
    int unk1C; /* 0x1C */
    int unk20; /* 0x20 */
    int unk24; /* 0x24 */
} Buffer_828E5D98;

typedef struct Source_828E5D98 Source_828E5D98;

typedef struct SourceVtbl_828E5D98 {
    void *unk00;
    int (*Get)(Source_828E5D98 *self, int key); /* 0x04 */
} SourceVtbl_828E5D98;

struct Source_828E5D98 {
    SourceVtbl_828E5D98 *vtbl;
};

typedef struct Reader_828E5D98 Reader_828E5D98;

typedef struct ReaderVtbl_828E5D98 {
    void *unk00[7];
    Source_828E5D98 *(*GetSource)(Reader_828E5D98 *self); /* 0x1C */
} ReaderVtbl_828E5D98;

struct Reader_828E5D98 {
    ReaderVtbl_828E5D98 *vtbl;
};

typedef struct Self_828E5D98 {
    char unk00[0x6c];
    int unk6C; /* 0x6C */
    char unk70[0x80 - 0x70];
    Reader_828E5D98 *reader;      /* 0x80 */
    RefCount_828E5D98 *readerRep; /* 0x84 */
    SharedPtr_828E5D98 buffer;    /* 0x88 */
} Self_828E5D98;

extern void *fn_8265C9E0(unsigned int size);
extern void fn_828E9D28(Buffer_828E5D98 *buffer, void *data, int size);
extern SharedPtr_828E5D98 *fn_822D7940(SharedPtr_828E5D98 *out, Buffer_828E5D98 *buffer);
extern void fn_822315A0(RefCount_828E5D98 *rep);
extern int fn_828E8F80(void);
extern void fn_828DFF48(SharedPtr_828E5D98 *out, int key, int unk, int unk2);
extern void fn_823B4970(void *buffer, int key, int value, int unk);

static __forceinline void SwapWords_828E5D98(void **a, void **b)
{
    void *t = *a;
    *a = *b;
    *b = t;
}

static __forceinline Buffer_828E5D98 *Construct_828E5D98(Buffer_828E5D98 *mem)
{
    mem->unk18 = 0;
    mem->unk1C = 0;
    mem->unk20 = 0;
    mem->unk10 = 0;
    mem->unk14 = 0;
    fn_828E9D28(mem, 0, 0);
    return mem;
}

void fn_828E5D98(Self_828E5D98 *self, int key)
{
    Buffer_828E5D98 *mem;
    Buffer_828E5D98 *buffer;
    SharedPtr_828E5D98 created;
    SharedPtr_828E5D98 *made;
    SharedPtr_828E5D98 reader;
    RefCount_828E5D98 *rep;
    void *ptr;
    RefCount_828E5D98 *old;
    SharedPtr_828E5D98 *slot;
    Source_828E5D98 *source;
    void *target;
    int unk;

    mem = (Buffer_828E5D98 *)fn_8265C9E0(0x28);
    buffer = mem != 0 ? Construct_828E5D98(mem) : 0;
    made = fn_822D7940(&created, buffer);
    SwapWords_828E5D98((void **)&made->rep, (void **)&self->buffer.rep);
    SwapWords_828E5D98(&made->ptr, &self->buffer.ptr);
    if (created.rep != 0) {
        fn_822315A0(created.rep);
    }
    unk = self->unk6C;
    fn_828DFF48(&reader, key, unk, fn_828E8F80());
    ptr = reader.ptr;
    rep = reader.rep;
    if (rep != 0) {
        _InterlockedIncrement(&rep->uses);
    }
    slot = (SharedPtr_828E5D98 *)&self->reader;
    old = slot->rep;
    slot->rep = rep;
    slot->ptr = ptr;
    if (old != 0) {
        fn_822315A0(old);
    }
    source = ((Reader_828E5D98 *)slot->ptr)->vtbl->GetSource((Reader_828E5D98 *)slot->ptr);
    target = self->buffer.ptr;
    fn_823B4970(target, key, source->vtbl->Get(source, key), 0);
    if (reader.rep != 0) {
        fn_822315A0(reader.rep);
    }
}
