extern int fn_82C37940(const void *table, int value);
extern char lbl_820EE404[];

typedef struct Packed_82C379D0 {
    int value;
    int unused;
} Packed_82C379D0;

int fn_82C379D0(int *out, Packed_82C379D0 packed, int format, int bits)
{
    int status = 0;
    int value = 0;
    switch (format) {
    case 1:
        value = packed.value;
        break;
    case 2: {
        int shift = 24 - bits;
        if (shift >= 0) {
            value = fn_82C37940(lbl_820EE404, packed.value << shift);
        } else {
            value = fn_82C37940(lbl_820EE404, packed.value >> -shift);
        }
        break;
    }
    case 3:
        value = fn_82C37940(lbl_820EE404, packed.value << 8);
        break;
    default:
        status = 0x80070057;
        break;
    }
    if (out != 0) {
        *out = value;
    }
    return status;
}
