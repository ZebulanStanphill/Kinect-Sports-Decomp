#include "xdk/vectorintrinsics.h"

typedef struct Obj_8306DAB0 {
    char pad0[0x530];
    char sub530[0x510];  /* 0x530 */
    char subA40[0x290];  /* 0xa40 */
    char subCD0[0xd30];  /* 0xcd0 */
    char block[0x50];    /* 0x1a00 */
    __vector4 vec1A50;   /* 0x1a50 */
    __vector4 vec1A60;   /* 0x1a60 */
    float f1A70;         /* 0x1a70 */
    float f1A74;         /* 0x1a74 */
    float f1A78;         /* 0x1a78 */
    unsigned char b1A7C; /* 0x1a7c */
    char pad1A7D[0xb];
    float f1A88;         /* 0x1a88 */
    float f1A8C;         /* 0x1a8c */
    unsigned char b1A90; /* 0x1a90 */
    unsigned char b1A91; /* 0x1a91 */
    unsigned char b1A92; /* 0x1a92 */
} Obj_8306DAB0;

extern void fn_830758A8(Obj_8306DAB0 *self);
extern void fn_83075A28(void *p);
extern void fn_83075CE0(void *p);
extern void fn_8306FB50(void *p);
extern __vector4 fn_8306ECA8(void);
extern void fn_8306D610(Obj_8306DAB0 *self);
extern void *memset(void *dst, int value, unsigned int size);

Obj_8306DAB0 *fn_8306DAB0(Obj_8306DAB0 *self)
{
    fn_830758A8(self);
    fn_83075A28(self->sub530);
    fn_83075CE0(self->subA40);
    fn_8306FB50(self->subCD0);
    self->vec1A50 = fn_8306ECA8();
    self->vec1A60 = fn_8306ECA8();
    self->f1A70 = 0.0f;
    self->f1A74 = 1.0f;
    self->f1A78 = 0.0f;
    self->b1A7C = 0;
    self->f1A88 = 0.0f;
    self->f1A8C = 0.0f;
    self->b1A90 = 0;
    self->b1A91 = 0;
    self->b1A92 = 0;
    fn_8306D610(self);
    memset(self->block, 0, 0x50);
    return self;
}
