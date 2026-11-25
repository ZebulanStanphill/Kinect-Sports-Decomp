typedef struct Glyph_82807AB8 {
    char pad0[0xc];
    unsigned char *codes; /* 0x0C */
    char pad10[0xe];
    unsigned short bitCount; /* 0x1E */
} Glyph_82807AB8;

typedef struct Font_82807AB8 {
    char pad0[0x48];
    unsigned short rowCount; /* 0x48 */
    char pad4a[0xe];
    unsigned short *rows; /* 0x58 */
} Font_82807AB8;

extern void fn_828114A8(unsigned char *bits, unsigned int index);
extern void fn_82811500(unsigned char *bits, unsigned int index);

void fn_82807AB8(Font_82807AB8 *self, Glyph_82807AB8 *glyph, unsigned char *out, unsigned int markOnly)
{
    unsigned char *codes = glyph->codes;
    unsigned short *rows;
    unsigned int any;
    unsigned int accumulator;
    int bits;
    int limit;
    int used;
    int count;
    int row;
    int next;
    int i;
    unsigned char code;

    if (markOnly != 0) {
        next = 0;
        for (row = 0; row < self->rowCount; row++) {
            rows = self->rows;
            any = 0;
            if (rows == 0 || rows[next] == row) {
                next++;
                for (i = 0; i < glyph->bitCount; i += 9) {
                    code = *codes;
                    codes++;
                    any |= (code & 0xe0) != 0;
                    switch (code & 3) {
                    case 1:
                    case 2:
                        any |= (*codes & 0xe0) != 0;
                        codes++;
                        break;
                    case 3:
                        any |= (*codes & 0xe0) != 0;
                        codes++;
                        any |= (*codes & 0xe0) != 0;
                        codes++;
                        break;
                    }
                }
            }
            if (any != 0) {
                fn_828114A8(out, row);
            } else if (rows == 0) {
                fn_82811500(out, row);
            }
        }
    } else {
        accumulator = 0;
        bits = 0;
        for (row = 0; row < self->rowCount; row++) {
            limit = glyph->bitCount;
            for (i = 0; i < glyph->bitCount; i += 9) {
                code = *codes;
                codes++;
                accumulator |= (code & 0xe0) << (24 - bits);
                bits += 3;
                switch (code & 3) {
                case 1:
                    accumulator |= (*codes & 0xe0) << (21 - bits);
                    codes++;
                    break;
                case 2:
                    accumulator |= (*codes & 0xe0) << (24 - bits);
                    codes++;
                    break;
                case 3:
                    accumulator |= (*codes & 0xe0) << (24 - bits);
                    codes++;
                    accumulator |= (*codes & 0xe0) << (21 - bits);
                    codes++;
                    break;
                }
                bits += 6;
                if (bits > limit) {
                    bits = limit;
                }
                if (bits >= 8) {
                    count = (unsigned int)bits >> 3;
                    used = bits & ~7;
                    bits -= used;
                    limit -= used;
                    do {
                        *out++ = (unsigned char)(accumulator >> 24);
                        accumulator <<= 8;
                    } while (--count != 0);
                }
            }
        }
        if (bits != 0) {
            *out = (unsigned char)(accumulator >> 24);
        }
    }
}
