typedef struct Bits_82C4E470 {
    unsigned __int64 acc; /* 0x00 */
    int nbits;            /* 0x08 */
    unsigned char *cur;   /* 0x0C */
    unsigned char *end;   /* 0x10 */
    int status;           /* 0x14 */
    int refill;           /* 0x18 */
} Bits_82C4E470;

extern void fn_82C4E0F8(Bits_82C4E470 *bits);

void fn_82C4E470(Bits_82C4E470 *bits, unsigned int count)
{
    unsigned char *p = bits->cur;

    if (p == 0) {
        return;
    }
    bits->acc <<= count;
    bits->nbits -= count;
    if (bits->nbits >= 0) {
        return;
    }
    for (;;) {
        if (p < bits->end - 4) {
            unsigned __int64 v;
            int c;

            v = ((((((((unsigned __int64)p[0] << 8) + p[1]) << 8) + p[2]) << 8) + p[3]) << 8) + p[4];
            v = (v << 8) + p[5];
            c = bits->nbits;
            bits->acc = (v << -c) + bits->acc;
            bits->nbits = c + 0x30;
            p += 6;
            break;
        }
        if (p <= bits->end) {
            while (p <= bits->end) {
                int c = bits->nbits;

                bits->acc += (unsigned __int64)*p++ << (0x28 - c);
                bits->nbits = c + 8;
            }
            bits->cur = p;
            if (bits->nbits >= 0) {
                return;
            }
        }
        if (bits->refill != 1) {
            if (bits->nbits < -16) {
                if (bits->status == 0) {
                    bits->status = 2;
                }
                bits->nbits = 0x7F;
            }
            break;
        }
        fn_82C4E0F8(bits);
        p = bits->cur;
    }
    bits->cur = p;
}
