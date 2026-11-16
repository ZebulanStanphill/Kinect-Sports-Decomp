extern const unsigned char *lbl_8324E3B0;

typedef struct Context_82F00638 {
    char reserved00[0x7804];
    int enabled; /* 0x7804 */
    char reserved7808[0x18];
    int firstScale;  /* 0x7820 */
    int secondScale; /* 0x7824 */
} Context_82F00638;

void fn_82F00638(Context_82F00638 *self, unsigned char *first, unsigned char *second, unsigned char *third,
                 int firstCount, int secondCount)
{
    int index;
    if (self->firstScale != 0) {
        short scale = self->firstScale + 8;
        for (index = 0; index < firstCount; index++) {
            first[index] = lbl_8324E3B0[(short)((((first[index] - 0x80) * scale + 4) >> 3) + 0x80)];
        }
    }
    if (self->enabled != 0) {
        short scale = self->secondScale + 8;
        for (index = 0; index < secondCount; index++) {
            second[index] = lbl_8324E3B0[(short)((((second[index] - 0x80) * scale + 4) >> 3) + 0x80)];
        }
        for (index = 0; index < secondCount; index++) {
            third[index] = lbl_8324E3B0[(short)((((third[index] - 0x80) * scale + 4) >> 3) + 0x80)];
        }
    }
}
