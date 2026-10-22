typedef struct {
    char pad[0x184];
    void *data;
    unsigned int size;
} Inner;

typedef struct {
    char pad[0x80];
    Inner *inner;
    char pad2[0xc];
    int hr;
} Outer;

extern void *fn_8265C940(unsigned int size, unsigned int flags);
extern void *memcpy(void *d, const void *s, unsigned int n);

void fn_82A9A970(Outer *o, const void *src, unsigned int size)
{
    if (o->hr >= 0) {
        o->inner->data = fn_8265C940(size, 0x24870000);
        if (o->inner->data == 0) {
            o->hr = 0x8007000e;
        } else {
            o->inner->size = size;
            memcpy(o->inner->data, src, size);
        }
    }
}
