#include "xdk/vectorintrinsics.h"

typedef struct Matrix_8260A568 {
    __vector4 r[4];
} Matrix_8260A568;

typedef struct State_8260A568 {
    unsigned short id;      /* 0x00 */
    Matrix_8260A568 first;  /* 0x10 */
    Matrix_8260A568 second; /* 0x50 */
    int unk90;              /* 0x90 */
    int unk94;              /* 0x94 */
    int unk98;              /* 0x98 */
    int unk9C;              /* 0x9c */
    int unkA0;              /* 0xa0 */
    int unkA4;              /* 0xa4 */
    unsigned short unkA8;   /* 0xa8 */
    unsigned short unkAA;   /* 0xaa */
    unsigned short unkAC;   /* 0xac */
    unsigned short unkAE;   /* 0xae */
    unsigned short unkB0;   /* 0xb0 */
    unsigned short unkB2;   /* 0xb2 */
    int unkB4;              /* 0xb4 */
    int unkB8;              /* 0xb8 */
    int unkBC;              /* 0xbc */
} State_8260A568;

static __forceinline void CopyMatrix_8260A568(Matrix_8260A568 *dst, const Matrix_8260A568 *src)
{
    dst->r[0] = src->r[0];
    dst->r[1] = src->r[1];
    dst->r[2] = src->r[2];
    dst->r[3] = src->r[3];
}

void fn_8260A568(State_8260A568 *dst, State_8260A568 *src)
{
    dst->id = src->id;
    CopyMatrix_8260A568(&dst->first, &src->first);
    CopyMatrix_8260A568(&dst->second, &src->second);
    dst->unk90 = src->unk90;
    dst->unk94 = src->unk94;
    dst->unk98 = src->unk98;
    dst->unk9C = src->unk9C;
    dst->unkA0 = src->unkA0;
    dst->unkA4 = src->unkA4;
    dst->unkA8 = src->unkA8;
    dst->unkAA = src->unkAA;
    dst->unkAC = src->unkAC;
    dst->unkAE = src->unkAE;
    dst->unkB0 = src->unkB0;
    dst->unkB2 = src->unkB2;
    dst->unkB4 = src->unkB4;
    dst->unkB8 = src->unkB8;
    dst->unkBC = src->unkBC;
}
