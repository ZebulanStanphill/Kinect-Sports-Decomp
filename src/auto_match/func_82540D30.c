typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

void XMemCpy(void *dest, const void *src, unsigned int size);

typedef struct Constants_82540D30 {
    char padding0[0xaaa4];
    unsigned int mode; /* 0xaaa4 */
    char paddingaaa8[0x8];
    __vector4 vectorAB0;          /* 0xaab0 */
    __vector4 vectorAC0;          /* 0xaac0 */
    __vector4 vectorAD0;          /* 0xaad0 */
    __vector4 vectorAE0;          /* 0xaae0 */
    __vector4 vectorAF0;          /* 0xaaf0 */
    unsigned char blockB00[0x20]; /* 0xab00 */
    unsigned char blockB20[0x20]; /* 0xab20 */
    unsigned char blockB40[0x20]; /* 0xab40 */
    unsigned char blockB60[0x10]; /* 0xab60 */
    char paddingab70[0x80];
    __vector4 vectorBF0; /* 0xabf0 */
    __vector4 vectorC00; /* 0xac00 */
    float scaleC10;      /* 0xac10 */
    float scaleC14;      /* 0xac14 */
    char paddingac18[0x8];
    __vector4 vectorC20;   /* 0xac20 */
    unsigned int valueC30; /* 0xac30 */
} Constants_82540D30;

/* Stores the given values; a null pointer leaves the value unchanged. */
void fn_82540D30(Constants_82540D30 *self, unsigned int mode, const __vector4 *vectorAB0,
                 const __vector4 *vectorAC0, const __vector4 *vectorAD0, const __vector4 *vectorAE0,
                 const __vector4 *vectorAF0, const void *blockB00, const void *blockB20, const void *blockB40,
                 const void *blockB60, unsigned int valueC30, const __vector4 *vectorBF0,
                 const __vector4 *vectorC00, const float *scaleC10, const float *scaleC14,
                 const __vector4 *vectorC20)
{
    self->mode = mode;
    if (vectorAC0 != 0) {
        self->vectorAC0 = *vectorAC0;
    }
    if (vectorAB0 != 0) {
        self->vectorAB0 = *vectorAB0;
    }
    if (vectorAF0 != 0) {
        self->vectorAF0 = *vectorAF0;
    }
    if (vectorAE0 != 0) {
        self->vectorAE0 = *vectorAE0;
    }
    if (vectorAD0 != 0) {
        self->vectorAD0 = *vectorAD0;
    }
    if (blockB00 != 0) {
        XMemCpy(self->blockB00, blockB00, sizeof(self->blockB00));
    }
    if (blockB20 != 0) {
        XMemCpy(self->blockB20, blockB20, sizeof(self->blockB20));
    }
    if (blockB40 != 0) {
        XMemCpy(self->blockB40, blockB40, sizeof(self->blockB40));
    }
    if (blockB60 != 0) {
        XMemCpy(self->blockB60, blockB60, sizeof(self->blockB60));
    }
    if (valueC30 != 0) {
        self->valueC30 = valueC30;
    }
    if (vectorBF0 != 0) {
        self->vectorBF0 = *vectorBF0;
    }
    if (vectorC00 != 0) {
        self->vectorC00 = *vectorC00;
    }
    if (scaleC10 != 0) {
        self->scaleC10 = *scaleC10;
    }
    if (scaleC14 != 0) {
        self->scaleC14 = *scaleC14;
    }
    if (vectorC20 != 0) {
        self->vectorC20 = *vectorC20;
    }
}
