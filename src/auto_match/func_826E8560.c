typedef struct BitReader {
    char pad0[0x14];
    unsigned char bits;
    unsigned char nbits;
    char pad16[0x16];
    int pos;
    int end;
    char pad34[8];
    unsigned char *buf;
} BitReader;

extern void fn_826E7800(BitReader *br, int n);

int fn_826E8560(BitReader *br)
{
    unsigned char c;
    int r;
    if (br->nbits == 0) {
        br->nbits = 0;
        if (br->end - br->pos < 1) {
            fn_826E7800(br, 1);
        }
        c = br->buf[br->pos++];
        br->nbits = 7;
        r = c >> 7;
        br->bits = c & 0x7f;
    } else {
        br->nbits--;
        r = br->bits >> br->nbits;
        br->bits &= (unsigned char)(1 << br->nbits) - 1;
    }
    return r;
}
