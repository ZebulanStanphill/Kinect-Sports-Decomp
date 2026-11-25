typedef struct Handler_830149A0 Handler_830149A0;

typedef struct Header_830149A0 {
    __int64 a; /* 0x00 */
    __int64 b; /* 0x08 */
    __int64 c; /* 0x10 */
} Header_830149A0;

typedef struct Binding_830149A0 {
    int value; /* 0x00 */
    int kind;  /* 0x04 */
} Binding_830149A0;

typedef struct Storage_830149A0 {
    int words[2];
} Storage_830149A0;

typedef struct Result_830149A0 {
    int count;              /* 0x00 */
    int size;               /* 0x04 */
    Storage_830149A0 *data; /* 0x08 */
    unsigned char flag0;    /* 0x0c */
    unsigned char flag1;    /* 0x0d */
    void *buffer;           /* 0x10 */
    int f14;                /* 0x14 */
} Result_830149A0;

typedef struct Self_830149A0 Self_830149A0;

typedef struct Desc_830149A0 {
    int kind;                  /* 0x00 */
    Self_830149A0 *target;     /* 0x04 */
    int size;                  /* 0x08 */
    Binding_830149A0 *binding; /* 0x0c */
    Header_830149A0 header;    /* 0x10 */
    int payload[0x12];         /* 0x28 */
    int flags;                 /* 0x70 */
    int offset;                /* 0x74 */
    Result_830149A0 *result;   /* 0x78 */
    int id;                    /* 0x7c */
    unsigned char done;        /* 0x80 */
    unsigned char valid;       /* 0x81 */
} Desc_830149A0;

typedef struct {
    void *s0;
    void *s1;
    void (*Release)(Handler_830149A0 *self);
    void *pad[3];
    int (*Submit)(Handler_830149A0 *self, Desc_830149A0 *desc);
} HandlerVtbl_830149A0;

struct Handler_830149A0 {
    HandlerVtbl_830149A0 *vt;
};

struct Self_830149A0 {
    char pad0[0x3c];
    unsigned int size;      /* 0x3c */
    Header_830149A0 header; /* 0x40 */
    char pad58[0x7c - 0x58];
    unsigned int id; /* 0x7c */
};

extern Handler_830149A0 *fn_82FAB9C0(int id, unsigned int key);
extern void *fn_83032B40(void);
extern void fn_83032D88(void *buffer);
extern int lbl_832642E0;
extern unsigned int lbl_831BC8E0;

int fn_830149A0(Self_830149A0 *self, unsigned int key, int index)
{
    Handler_830149A0 *handler;
    Result_830149A0 result;
    Binding_830149A0 binding;
    Storage_830149A0 storage;
    Desc_830149A0 desc;
    void *old;
    void *buffer;
    int hr;
    unsigned int id;

    if (self->size == 0) {
        return 2;
    }
    handler = fn_82FAB9C0(lbl_832642E0 + 4, key);
    if (handler != 0) {
        binding.value = 0;
        binding.kind = 4;
        storage.words[0] = 0;
        storage.words[1] = 0;
        result.count = 0;
        result.size = 0;
        result.data = &storage;
        result.flag0 = 0;
        result.flag1 = 0;
        result.buffer = 0;
        result.f14 = 0;
        buffer = fn_83032B40();
        old = result.buffer;
        result.buffer = buffer;
        if (old != 0) {
            fn_83032D88(old);
        }
        if (result.buffer == 0) {
            handler->vt->Release(handler);
            if (result.buffer != 0) {
                fn_83032D88(result.buffer);
            }
            return 2;
        }
        desc.target = self;
        desc.payload[0x11] = 0;
        desc.done = 0;
        desc.payload[0] = 0;
        desc.kind = 2;
        desc.header = self->header;
        desc.flags = 0;
        desc.size = self->size;
        desc.offset = index * 0x30;
        desc.valid = 1;
        desc.binding = &binding;
        desc.result = &result;
        while (self->id == 0) {
            id = lbl_831BC8E0++;
            self->id = id;
        }
        desc.id = self->id;
        hr = handler->vt->Submit(handler, &desc);
        handler->vt->Release(handler);
        if (result.buffer != 0) {
            fn_83032D88(result.buffer);
        }
    } else {
        hr = 0xf;
    }
    return hr;
}
