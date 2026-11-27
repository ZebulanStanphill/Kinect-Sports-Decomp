#include "xdk/vectorintrinsics.h"

typedef struct Vec_82F4ED78 {
    __vector4 v;
} Vec_82F4ED78;

typedef struct Matrix_82F4ED78 {
    __vector4 rows[4];
} Matrix_82F4ED78;

typedef struct Key_82F4ED78 {
    __vector4 position; /* 0x00 */
    __vector4 rotation; /* 0x10 */
    __vector4 scale;    /* 0x20 */
    int frame;          /* 0x30 */
    char pad34[0x1c];
} Key_82F4ED78;

typedef struct Track_82F4ED78 {
    char pad0[0x1040];
    Key_82F4ED78 keys[1]; /* 0x1040 */
} Track_82F4ED78;

typedef struct Node_82F4ED78 {
    char pad0[0xcb1];
    unsigned char flipped; /* 0xcb1 */
    char padCB2[0xcf0 - 0xcb2];
    Track_82F4ED78 *track; /* 0xcf0 */
} Node_82F4ED78;

extern Vec_82F4ED78 fn_82F538A0(Key_82F4ED78 *keys, int i);
extern Vec_82F4ED78 fn_82F538B0(Key_82F4ED78 *keys, int i);
extern Vec_82F4ED78 fn_82F538C8(Key_82F4ED78 *keys, int i);
extern int fn_82F538E0(Key_82F4ED78 *keys, int i);
extern Vec_82F4ED78 fn_82F4ED10(Node_82F4ED78 *node);
extern __vector4 fn_82F597F0(Matrix_82F4ED78 m, __vector4 v);
extern __vector4 fn_8306ED70(__vector4 a, __vector4 b);

int fn_82F4ED78(Node_82F4ED78 *self, int i, Matrix_82F4ED78 m, __vector4 *position, void *unused,
                __vector4 *rotation, __vector4 *scale)
{
    if (position != 0) {
        *position = fn_82F597F0(m, fn_82F538A0(self->track->keys, i).v);
        *position = fn_8306ED70(*position, fn_82F4ED10(self).v);
    }
    if (rotation != 0) {
        *rotation = fn_82F538B0(self->track->keys, i).v;
        *rotation = fn_8306ED70(*rotation, fn_82F4ED10(self).v);
    }
    if (scale != 0) {
        *scale = fn_82F538C8(self->track->keys, i).v;
        if (self->flipped) {
            scale->vector4_f32[1] = -scale->vector4_f32[1];
            scale->vector4_f32[2] = -scale->vector4_f32[2];
        }
    }
    return fn_82F538E0(self->track->keys, i);
}
