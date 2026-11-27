#include "xdk/vectorintrinsics.h"

typedef struct Matrix_8260A488 {
    __vector4 r[4];
} Matrix_8260A488;

typedef struct Block_8260A488 {
    int v[5];
} Block_8260A488;

typedef struct State_8260A488 {
    unsigned short id;      /* 0x00 */
    Matrix_8260A488 first;  /* 0x10 */
    Matrix_8260A488 second; /* 0x50 */
    Block_8260A488 block;   /* 0x90 */
    int unkA4;              /* 0xa4 */
    int unkA8;              /* 0xa8 */
    int unkAC;              /* 0xac */
    int unkB0;              /* 0xb0 */
    int unkB4;              /* 0xb4 */
    int unkB8;              /* 0xb8 */
    int unkBC;              /* 0xbc */
    unsigned short unkC0;   /* 0xc0 */
    unsigned short unkC2;   /* 0xc2 */
    int unkC4;              /* 0xc4 */
    int unkC8;              /* 0xc8 */
} State_8260A488;

static __forceinline void CopyMatrix_8260A488(Matrix_8260A488 *dst, const Matrix_8260A488 *src)
{
    dst->r[0] = src->r[0];
    dst->r[1] = src->r[1];
    dst->r[2] = src->r[2];
    dst->r[3] = src->r[3];
}

void fn_8260A488(State_8260A488 *dst, State_8260A488 *src)
{
    dst->id = src->id;
    CopyMatrix_8260A488(&dst->first, &src->first);
    CopyMatrix_8260A488(&dst->second, &src->second);
    dst->block = src->block;
    dst->unkA4 = src->unkA4;
    dst->unkA8 = src->unkA8;
    dst->unkAC = src->unkAC;
    dst->unkB0 = src->unkB0;
    dst->unkB4 = src->unkB4;
    dst->unkB8 = src->unkB8;
    dst->unkBC = src->unkBC;
    dst->unkC0 = src->unkC0;
    dst->unkC2 = src->unkC2;
    dst->unkC4 = src->unkC4;
    dst->unkC8 = src->unkC8;
}
