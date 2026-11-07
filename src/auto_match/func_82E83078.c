typedef struct Bits_82E83078 {
    int unk0;
    unsigned char *ptr;
    int unk8[2];
    unsigned int bitsLeft;
} Bits_82E83078;

typedef struct Enc_82E83078 {
    char pad0[0x4];
    int profile;
    char pad8[0x30c];
    int f314;
    char pad318[0x4];
    int width;
    int height;
    char pad324[0x48];
    int rates[1];
    char pad370[0x17c];
    int rateCount;
    int hasRates;
    int f4f4;
    int f4f8;
    int f4fc;
    char pad500[0x94];
    int f594;
    char pad598[0x4];
    int f59c;
    int f5a0;
    char pad5a4[0xa0];
    int f644;
    int f648;
    char pad64c[0x2d4];
    int f920;
    char pad924[0x54];
    int f978;
    char pad97c[0x88];
    int fa04;
    int fa08;
    char pada0c[0x14b0];
    Bits_82E83078 *bits;
    char pad1ec0[0x4f44];
    int f6e04;
    char pad6e08[0x8c0];
    int f76c8;
    char pad76cc[0x14];
    int f76e0;
    char pad76e4[0xd4];
    int f77b8;
    int f77bc;
    char pad77c0[0x10];
    int f77d0;
    int f77d4;
    char pad77d8[0x68];
    int f7840;
    int f7844;
} Enc_82E83078;

extern void fn_82F02390(Bits_82E83078 *bits, unsigned char *buf, int unused, int advanced);
extern void fn_82F02410(Bits_82E83078 *bits, unsigned int value, int count);
extern void fn_82F025F0(Bits_82E83078 *bits);
extern void fn_82F023B0(Bits_82E83078 *bits);

void fn_82E83078(Enc_82E83078 *enc, unsigned char *buf, int *size)
{
    int flag = 1;
    int i = 0;

    if (enc->f76c8 != 0) {
        if (enc->f76e0 == 0) {
            return;
        }
        enc->f4f4 = 0;
        enc->f4f8 = 1;
        enc->f4fc = 0;
        enc->f6e04 = 0;
        enc->fa04 = 0;
        if (enc->f77d0 == enc->f77b8 && enc->f77d4 == enc->f77bc) {
            flag = 0;
        }
    }
    fn_82F02390(enc->bits, buf, 0, enc->profile == 8);
    fn_82F02410(enc->bits, enc->f4f4, 1);
    fn_82F02410(enc->bits, enc->f4f8, 1);
    fn_82F02410(enc->bits, enc->f4fc, 1);
    fn_82F02410(enc->bits, enc->f6e04, 1);
    fn_82F02410(enc->bits, enc->f644, 1);
    fn_82F02410(enc->bits, enc->f314, 1);
    fn_82F02410(enc->bits, enc->fa04, 1);
    fn_82F02410(enc->bits, enc->f978, 2);
    fn_82F02410(enc->bits, enc->f648, 1);
    fn_82F02410(enc->bits, enc->f920, 1);
    if (enc->f59c != 0) {
        fn_82F02410(enc->bits, 1, 1);
        fn_82F02410(enc->bits, enc->f594, 1);
    } else {
        fn_82F02410(enc->bits, 0, 1);
        fn_82F02410(enc->bits, enc->f5a0, 1);
    }
    if (enc->hasRates != 0 && enc->rateCount > 0) {
        for (i = 0; i < enc->rateCount; i++) {
            fn_82F02410(enc->bits, enc->rates[i] - 1, 8);
        }
    }
    fn_82F02410(enc->bits, flag, 1);
    if (flag != 0) {
        fn_82F02410(enc->bits, enc->width / 2 - 1, 0xc);
        fn_82F02410(enc->bits, enc->height / 2 - 1, 0xc);
    }
    if (enc->fa04 != 0) {
        fn_82F02410(enc->bits, enc->fa08, 1);
    }
    fn_82F02410(enc->bits, enc->f7840 > 0, 1);
    if (enc->f7840 > 0) {
        fn_82F02410(enc->bits, enc->f7840 - 1, 3);
    }
    fn_82F02410(enc->bits, enc->f7844 > 0, 1);
    if (enc->f7844 > 0) {
        fn_82F02410(enc->bits, enc->f7844 - 1, 3);
    }
    fn_82F025F0(enc->bits);
    *size = (int)(enc->bits->ptr + ((0x27 - enc->bits->bitsLeft) >> 3));
    fn_82F023B0(enc->bits);
}
