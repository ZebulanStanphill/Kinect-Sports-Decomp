extern void fn_82A29A38(void);

typedef union Word_82AB03B0 {
    unsigned int value;

    struct {
        unsigned int pad0 : 3;
        unsigned int high : 2;
        unsigned int pad1 : 3;
        unsigned int index : 8;
        unsigned int low : 16;
    } bits;
} Word_82AB03B0;

void fn_82AB03B0(unsigned int index, int format, unsigned int **cursor)
{
    unsigned int *dst = *cursor;
    Word_82AB03B0 word;
    if (index >= 16)
        fn_82A29A38();
    word.value = 0;
    switch (format) {
    case 0:
        word.value = 0;
        break;
    case 0x10000000:
        word.value = 0x2000000;
        break;
    case 0x18000000:
        word.value = 0x4000000;
        break;
    case 0x20000000:
        word.value = 0x3000000;
        break;
    default:
        fn_82A29A38();
        break;
    }
    word.bits.index = index;
    word.bits.low = 0x19;
    word.bits.high = 1;
    *dst = word.value;
    *cursor = dst + 1;
}
