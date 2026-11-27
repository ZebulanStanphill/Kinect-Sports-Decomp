#include "xdk/vectorintrinsics.h"

typedef struct Interface_825AD9E8 Interface_825AD9E8;

typedef struct VTable_825AD9E8 {
    void *padding[4];
    unsigned int (*first)(Interface_825AD9E8 *);
    unsigned int (*second)(Interface_825AD9E8 *);
} VTable_825AD9E8;

struct Interface_825AD9E8 {
    VTable_825AD9E8 *vtable;
};

typedef struct Buffer_825AD9E8 {
    int padding[2];
    char *data;
    unsigned int size;
} Buffer_825AD9E8;

typedef struct String_825AD9E8 {
    int padding;
    Buffer_825AD9E8 buffer;
    char padding14[12];
    Interface_825AD9E8 *interface; // 0x20
    int padding24;
    int argument; // 0x28
} String_825AD9E8;

typedef struct Reader_825AD9E8 {
    int position;
    int offset;
    int bitOffset;
    int bitCount;
    const char *data;
    unsigned int size;
    void *allocation;
    unsigned int capacity;
    unsigned int flags;
    unsigned int padding;
} Reader_825AD9E8;

extern int fn_8289D8D0(int);
extern char *fn_82236200(String_825AD9E8 *, int);
extern void fn_828E9D28(Reader_825AD9E8 *, const char *, unsigned int);
extern float fn_828E5538(Reader_825AD9E8 *, int, int);
extern void fn_8265CA20(void *);

__vector4 *fn_825AD9E8(__vector4 *out, String_825AD9E8 *self)
{
    unsigned int result;
    const char *data;
    Reader_825AD9E8 reader;
    __vector4 vector;

    result = self->interface ? self->interface->vtable->first(self->interface) : 0;
    if (!result) {
        result = self->interface ? self->interface->vtable->second(self->interface) : 0;
        if (!result) {
            Buffer_825AD9E8 *buffer = &self->buffer;
            if (self->buffer.size <= 4) {
                data = (char *)&buffer->data;
            } else {
                data = buffer->data;
            }
            goto read;
        }
    }
    data = fn_82236200(self, fn_8289D8D0(self->argument));
read:
    reader.data = data;
    reader.allocation = 0;
    reader.capacity = 0;
    reader.flags = 0;
    reader.size = 6;
    fn_828E9D28(&reader, data, 6);
    vector = __VMXGetReg(77);
    vector.vector4_f32[0] = fn_828E5538(&reader, 10, 5);
    vector.vector4_f32[1] = fn_828E5538(&reader, 6, 6);
    vector.vector4_f32[2] = fn_828E5538(&reader, 10, 5);
    *out = vector;
    if (reader.allocation) {
        fn_8265CA20(reader.allocation);
    }
    return out;
}
