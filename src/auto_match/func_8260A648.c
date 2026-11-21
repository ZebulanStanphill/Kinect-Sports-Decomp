typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Matrix_8260A648 {
    __vector4 r[4];
} Matrix_8260A648;

typedef struct Record_8260A648 {
    unsigned short type;    /* 0x00 */
    unsigned char enabled;  /* 0x02 */
    unsigned char reserved; /* 0x03 */
    unsigned short first;   /* 0x04 */
    unsigned short second;  /* 0x06 */
    char padding08[8];      /* 0x08 */
    __vector4 vectors[3];   /* 0x10 */
    unsigned int values[3]; /* 0x40 */
} Record_8260A648;

typedef struct Block_8260A648 {
    int v[5];
} Block_8260A648;

typedef struct State_8260A648 {
    unsigned short id;      /* 0x000 */
    Matrix_8260A648 first;  /* 0x010 */
    Matrix_8260A648 second; /* 0x050 */
    Record_8260A648 record; /* 0x090 */
    int unkE0;              /* 0x0e0 */
    int unkE4;              /* 0x0e4 */
    int unkE8;              /* 0x0e8 */
    Block_8260A648 blockA;  /* 0x0ec */
    Block_8260A648 blockB;  /* 0x100 */
    Block_8260A648 blockC;  /* 0x114 */
    int unk128;             /* 0x128 */
    int unk12C;             /* 0x12c */
} State_8260A648;

extern void fn_8260A770(Record_8260A648 *out, const Record_8260A648 *source);

static __forceinline void CopyMatrix_8260A648(Matrix_8260A648 *dst, const Matrix_8260A648 *src)
{
    dst->r[0] = src->r[0];
    dst->r[1] = src->r[1];
    dst->r[2] = src->r[2];
    dst->r[3] = src->r[3];
}

State_8260A648 *fn_8260A648(State_8260A648 *dst, const State_8260A648 *src)
{
    dst->id = src->id;
    CopyMatrix_8260A648(&dst->first, &src->first);
    CopyMatrix_8260A648(&dst->second, &src->second);
    fn_8260A770(&dst->record, &src->record);
    dst->unkE0 = src->unkE0;
    dst->unkE4 = src->unkE4;
    dst->unkE8 = src->unkE8;
    dst->blockA = src->blockA;
    dst->blockB = src->blockB;
    dst->blockC = src->blockC;
    dst->unk128 = src->unk128;
    dst->unk12C = src->unk12C;
    return dst;
}
