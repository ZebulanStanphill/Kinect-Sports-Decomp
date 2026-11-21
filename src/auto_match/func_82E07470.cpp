#include "havok/hkString.h"

extern "C" {

typedef struct Buffer_82E07470 {
    char padding[8];
    void *data0; /* 0x8 */
    int fields0[2];
    void *data1; /* 0x14 */
    int fields1[2];
    void *data2; /* 0x20 */
    int fields2[2];
    void *data3; /* 0x2c */
    int fields3[2];
    void *data4; /* 0x38 */
    int fields4[2];
    unsigned int count;   /* 0x44 */
    unsigned int stride0; /* 0x48 */
    unsigned int stride1; /* 0x4c */
    unsigned int stride2; /* 0x50 */
    unsigned int stride3; /* 0x54 */
    unsigned int stride4; /* 0x58 */
    int format[3];        /* 0x5c */
} Buffer_82E07470;

extern int fn_82E07698(void *, void *);
extern void fn_82E07080(Buffer_82E07470 *, unsigned int, void *);
extern void fn_82E06C88(Buffer_82E07470 *, Buffer_82E07470 *, unsigned int, unsigned int);

void fn_82E07470(Buffer_82E07470 *self, Buffer_82E07470 *source, unsigned char resize)
{
    int same = fn_82E07698(self->format, source->format);
    if (resize != 0) {
        fn_82E07080(self, source->count, self->format);
    }
    if ((unsigned char)same != 0) {
        unsigned int count;
        unsigned int ownCount = self->count;
        unsigned int sourceCount = source->count;
        if (sourceCount < ownCount) {
            count = sourceCount;
        } else {
            count = ownCount;
        }
        if (self->stride4 != 0) {
            hkString::memCpy(self->data4, source->data4, self->stride4 * count);
        }
        if (self->stride3 != 0) {
            hkString::memCpy(self->data3, source->data3, self->stride3 * count);
        }
        if (self->stride2 != 0) {
            hkString::memCpy(self->data2, source->data2, self->stride2 * count);
        }
        if (self->stride1 != 0) {
            hkString::memCpy(self->data1, source->data1, self->stride1 * count);
        }
        if (self->stride0 != 0) {
            hkString::memCpy(self->data0, source->data0, self->stride0 * count);
        }
    } else {
        unsigned int i;
        for (i = 0; i < source->count; i++) {
            fn_82E06C88(self, source, i, i);
        }
    }
}

}
