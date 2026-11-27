#include <string.h>

typedef struct Handler_830335A0 Handler_830335A0;

typedef struct Header_830335A0 {
    __int64 a; /* 0x00 */
    __int64 b; /* 0x08 */
    __int64 c; /* 0x10 */
} Header_830335A0;

typedef struct Binding_830335A0 {
    int value; /* 0x00 */
    int kind;  /* 0x04 */
} Binding_830335A0;

typedef struct Storage_830335A0 {
    void *block; /* 0x00 */
    int size;    /* 0x04 */
} Storage_830335A0;

typedef struct Result_830335A0 {
    int count;              /* 0x00 */
    int size;               /* 0x04 */
    Storage_830335A0 *data; /* 0x08 */
    unsigned char flag0;    /* 0x0c */
    unsigned char flag1;    /* 0x0d */
    void *buffer;           /* 0x10 */
    int f14;                /* 0x14 */
} Result_830335A0;

typedef struct Desc_830335A0 {
    int kind;                  /* 0x00 */
    int target;                /* 0x04 */
    int size;                  /* 0x08 */
    Binding_830335A0 *binding; /* 0x0c */
    Header_830335A0 header;    /* 0x10 */
    int payload[0x12];         /* 0x28 */
    int flags;                 /* 0x70 */
    int offset;                /* 0x74 */
    Result_830335A0 *result;   /* 0x78 */
    int id;                    /* 0x7c */
    unsigned char done;        /* 0x80 */
    unsigned char valid;       /* 0x81 */
} Desc_830335A0;

typedef struct HandlerVtbl_830335A0 {
    void *s0;
    void *s1;
    void (*Release)(Handler_830335A0 *self);
    void *pad[3];
    int (*Submit)(Handler_830335A0 *self, Desc_830335A0 *desc);
} HandlerVtbl_830335A0;

struct Handler_830335A0 {
    HandlerVtbl_830335A0 *vt;
};

typedef struct Device_830335A0 {
    char pad0[0x1e0];
    int flags; /* 0x1e0 */
} Device_830335A0;

typedef struct Self_830335A0 {
    char pad0[0x10];
    unsigned int key; /* 0x10 */
    char pad14[0xc];
    int count;               /* 0x20 */
    int size;                /* 0x24 */
    unsigned char flag0 : 1; /* 0x28 */
    unsigned char flag1 : 1;
    char pad29[0x3];
    Storage_830335A0 storage; /* 0x2c */
    void *buffer;             /* 0x34 */
    int payload[0x12];        /* 0x38 */
    Device_830335A0 *device;  /* 0x80 */
    int bindingValue;         /* 0x84 */
    int flags;                /* 0x88 */
    int id;                   /* 0x8c */
    unsigned char pad90;
    unsigned char valid; /* 0x91 */
    char pad92[0x6];
    int target;                 /* 0x98 */
    int f9c;                    /* 0x9c */
    Handler_830335A0 *listener; /* 0xa0 */
} Self_830335A0;

typedef struct Request_830335A0 {
    char pad0[0x10];
    int offset; /* 0x10 */
    char pad14[0x4];
    Header_830335A0 header; /* 0x18 */
    char pad30[0x4];
    int size; /* 0x34 */
} Request_830335A0;

extern Handler_830335A0 *fn_82FAB9C0(int id, unsigned int key);
extern void fn_82FF0BA8(Device_830335A0 *device, Binding_830335A0 *binding);
extern void fn_83032B08(void *buffer);
extern void fn_83032D88(void *buffer);
extern void fn_8301B7B8(void *heap, void *block);
extern int lbl_832642E0;
extern void *lbl_832642F8;
extern int lbl_832643DC;

int fn_830335A0(Self_830335A0 *self, Request_830335A0 *request)
{
    Handler_830335A0 *handler;
    Result_830335A0 result;
    Binding_830335A0 binding;
    Desc_830335A0 desc;
    Storage_830335A0 *storage;
    void *old;
    void *buffer;
    int hr;

    binding.kind = 4;
    binding.value = self->bindingValue;
    if (self->device != 0) {
        if ((self->device->flags & (int)0xf0000000) == 0x20000000) {
            binding.kind = 1;
        }
        fn_82FF0BA8(self->device, &binding);
    }
    hr = 0xf;
    handler = fn_82FAB9C0(lbl_832642E0 + 4, self->key);
    if (handler != 0) {
        storage = &self->storage;
        result.buffer = 0;
        result.data = storage;
        result.count = self->count;
        result.size = self->size;
        result.f14 = self->f9c;
        result.flag0 = self->flag0;
        result.flag1 = self->flag1;
        buffer = self->buffer;
        if (buffer != 0) {
            fn_83032B08(buffer);
        }
        old = result.buffer;
        result.buffer = buffer;
        if (old != 0) {
            fn_83032D88(old);
        }
        desc.done = 0;
        memcpy(desc.payload, self->payload, sizeof(desc.payload));
        desc.target = self->target;
        desc.size = request->size;
        desc.kind = 1;
        desc.header = request->header;
        desc.result = &result;
        desc.flags = self->flags;
        desc.binding = &binding;
        desc.offset = request->offset;
        desc.valid = self->valid;
        desc.id = self->id;
        hr = handler->vt->Submit(handler, &desc);
        lbl_832643DC++;
        old = self->buffer;
        self->buffer = 0;
        if (old != 0) {
            fn_83032D88(old);
        }
        if (storage->block != 0) {
            fn_8301B7B8(lbl_832642F8, storage->block);
            storage->block = 0;
            self->storage.size = 0;
        }
        if (self->listener != 0) {
            self->listener->vt->Release(self->listener);
            self->listener = 0;
        }
        handler->vt->Release(handler);
        if (result.buffer != 0) {
            fn_83032D88(result.buffer);
        }
    }
    return hr;
}
