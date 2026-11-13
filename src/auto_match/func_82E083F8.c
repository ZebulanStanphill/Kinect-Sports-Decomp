typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Vec4Array_82E083F8 {
    __vector4 *data;
    int size;
    int capacityAndFlags;
} Vec4Array_82E083F8;

typedef struct Router_82E083F8 {
    char pad[0x10];
    void *heap;  /* 0x10 */
} Router_82E083F8;

typedef struct Stream_82E083F8 {
    char pad[8];
    int stride;  /* 0x8 */
} Stream_82E083F8;

typedef struct Source_82E083F8 {
    char pad0[0x44];
    int count;          /* 0x44 */
    char pad1[0x14];
    char streams[4];    /* 0x5c */
} Source_82E083F8;

typedef struct Self_82E083F8 {
    char pad[8];
    Source_82E083F8 *source;  /* 0x8 */
} Self_82E083F8;

extern Stream_82E083F8 *fn_82E06B90(void *streams, int a, int b);
extern char *fn_82E06BF8(Source_82E083F8 *source, Stream_82E083F8 *stream);
extern Router_82E083F8 *fn_82CE5410(void);
extern void fn_82CE6310(void *heap, Vec4Array_82E083F8 *a, int capacity, int elemSize);

void fn_82E083F8(Self_82E083F8 *self, Vec4Array_82E083F8 *out)
{
    Source_82E083F8 *src = self->source;
    if (src != 0) {
        Stream_82E083F8 *stream = fn_82E06B90(src->streams, 1, 0);
        int count = src->count;
        if (stream != 0 && count > 0) {
            char *p = fn_82E06BF8(src, stream);
            int size = out->size;
            int stride = stream->stride;
            int newSize = size + count;
            void *heap = fn_82CE5410()->heap;
            int i;
            if ((out->capacityAndFlags & 0x3fffffff) < newSize) {
                int c = (out->capacityAndFlags & 0x3fffffff) * 2;
                fn_82CE6310(heap, out, newSize < c ? c : newSize, 0x10);
            }
            out->size = newSize;
            for (i = 0; i < count; i++) {
                out->data[size + i] = *(__vector4 *)p;
                p += stride;
            }
        }
    }
}
