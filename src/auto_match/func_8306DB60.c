#include "xdk/vectorintrinsics.h"

typedef struct Frames_8306DB60 {
    int type; /* 0x00 */
    char pad4[0x1c];
    __vector4 points[20]; /* 0x20 */
} Frames_8306DB60;

typedef struct Info_8306DB60 {
    char pad0[0xc];
    int fieldC; /* 0x0c */
    char pad10[0x4];
    char data14[4]; /* 0x14 */
} Info_8306DB60;

typedef struct Path_8306DB60 {
    char pad0[0xa40];
    char points[0xcd0 - 0xa40];  /* 0xa40 */
    char solver[0x19fc - 0xcd0]; /* 0xcd0 */
    float pad19FC;               /* 0x19fc */
    float weights[20];           /* 0x1a00 */
    char pad1A50[0x1a90 - 0x1a50];
    unsigned char hasFrames; /* 0x1a90 */
    unsigned char hasInfo;   /* 0x1a91 */
    unsigned char pad1A92;
    unsigned char ready; /* 0x1a93 */
} Path_8306DB60;

extern const __vector4 lbl_832654C0;

extern __vector4 fn_8306ED70(__vector4 a, __vector4 b);
extern void fn_83075D80(void *points, int i, __vector4 v);
extern float fn_83075D40(void *points, int i);
extern void fn_83075DA0(void *points, unsigned __int64 time);
extern void fn_83075DA8(void *points, unsigned char enabled);
extern float fn_8306D898(Path_8306DB60 *self, void *points, __vector4 a, __vector4 b);
extern void fn_83075590(void *solver, Frames_8306DB60 *frames, void *points, float scale, void *data,
                        void *extra);
extern void fn_83075790(Path_8306DB60 *self, void *points);
extern void fn_8306D610(Path_8306DB60 *self);

void fn_8306DB60(Path_8306DB60 *self, Frames_8306DB60 *frames, unsigned __int64 time, Info_8306DB60 *info,
                 void *extra, __vector4 a, __vector4 b)
{
    void *points;
    unsigned int i;
    int j;
    float scale;

    self->hasFrames = frames != 0 && frames->type == 2;
    points = self->points;
    fn_83075DA0(points, time);
    fn_83075DA8(points, self->hasFrames);
    if (self->hasFrames) {
        __vector4 offset = lbl_832654C0;
        for (i = 0; i < 20; i++) {
            fn_83075D80(points, i, fn_8306ED70(frames->points[i], offset));
        }
        scale = fn_8306D898(self, points, a, b);
        fn_83075590(self->solver, frames, points, scale, info->data14, extra);
        self->hasInfo = info->fieldC != 0;
        fn_83075790(self, points);
        for (j = 0; j < 20; j++) {
            self->weights[j] = fn_83075D40(points, j);
        }
    } else {
        fn_8306D610(self);
    }
    self->ready = 1;
}
