typedef struct BitWriter_82F2AAD0 BitWriter_82F2AAD0;

typedef struct VlcCode_82F2AAD0 {
    unsigned int code;   /* 0x0 */
    unsigned int length; /* 0x4 */
} VlcCode_82F2AAD0;

typedef struct Encoder_82F2AAD0 {
    char pad[0x624];
    int scaledCoding; /* 0x624 */
} Encoder_82F2AAD0;

typedef struct Picture_82F2AAD0 {
    char pad[0x60];
    int quantMode; /* 0x60 */
} Picture_82F2AAD0;

extern int abs(int);
extern int fn_82F02410(BitWriter_82F2AAD0 *writer, unsigned int value, unsigned int bitCount);

void fn_82F2AAD0(Encoder_82F2AAD0 *encoder, BitWriter_82F2AAD0 *writer, int value, VlcCode_82F2AAD0 *table,
                 unsigned int escapeIndex, Picture_82F2AAD0 *picture)
{
    unsigned int magnitude = abs(value);
    unsigned int index;
    int shift;
    int rounding;

    if (encoder->scaledCoding == 0 || picture->quantMode > 4) {
        if (magnitude >= escapeIndex) {
            fn_82F02410(writer, table[escapeIndex].code, table[escapeIndex].length);
            fn_82F02410(writer, magnitude, 8);
            fn_82F02410(writer, value <= 0, 1);
        } else {
            fn_82F02410(writer, table[magnitude].code, table[magnitude].length);
            if (magnitude == 0) {
                return;
            }
            fn_82F02410(writer, value <= 0, 1);
        }
    } else {
        if (picture->quantMode > 2) {
            shift = 1;
            rounding = 1;
        } else {
            shift = 2;
            rounding = 3;
        }
        index = (rounding + magnitude) >> shift;
        if (index >= escapeIndex) {
            fn_82F02410(writer, table[escapeIndex].code, table[escapeIndex].length);
            fn_82F02410(writer, magnitude, shift + 8);
        } else {
            fn_82F02410(writer, table[index].code, table[index].length);
            if (magnitude == 0) {
                return;
            }
            fn_82F02410(writer, rounding - (index << shift) + magnitude, shift);
            fn_82F02410(writer, value <= 0, 1);
            return;
        }
        fn_82F02410(writer, value <= 0, 1);
    }
}
