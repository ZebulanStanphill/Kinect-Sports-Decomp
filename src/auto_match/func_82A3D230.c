typedef struct Ctx_82A3D230 {
    unsigned char pad0[0x2c];
    unsigned char *data;
    unsigned char pad30[0x871 - 0x30];
    unsigned char count;
    unsigned char lut[256];
} Ctx_82A3D230;

extern unsigned int fn_82A3CF38(Ctx_82A3D230 *p, unsigned int a, unsigned int b,
                                unsigned short va, unsigned short vb, unsigned int n);

int fn_82A3D230(Ctx_82A3D230 *p, unsigned int start, unsigned int end,
                unsigned int val, unsigned int *outPos, unsigned int *outVal)
{
    unsigned short table[1025];
    unsigned short *w;
    unsigned int cnt;
    unsigned int n;
    unsigned int i;
    unsigned int sum;
    unsigned int base;
    unsigned int limit;
    unsigned int pos;
    unsigned int j;
    unsigned int c;
    unsigned int best;
    unsigned int bestPos;

    *outPos = end;
    if (outVal != 0) {
        *outVal = val;
    }
    if (end - start >= 0x1800 && (cnt = p->count) < 4) {
        n = end >> 3;
        sum = 0;
        i = 0;
        if (0 < n) {
            w = table;
            do {
                if ((i & 7) == 0) {
                    *w++ = (unsigned short)sum;
                }
                sum += p->lut[p->data[i]];
                i++;
            } while (i < n);
        }
        base = (start + 0x3f) & ~0x3fu;
        limit = end - 0x1000;
        for (pos = base + 0x800; pos < limit; pos += 0x400) {
            if (fn_82A3CF38(p, pos, pos + 0x400, table[pos >> 6],
                            table[(pos + 0x400) >> 6], 0x400) > 0x578 &&
                fn_82A3CF38(p, pos - 0x400, pos + 0x800, table[(pos - 0x400) >> 6],
                            table[(pos + 0x800) >> 6], 0x400) > 0x578 &&
                fn_82A3CF38(p, pos - 0x800, pos + 0xc00, table[(pos - 0x800) >> 6],
                            table[(pos + 0xc00) >> 6], 0x400) > 0x578) {
                best = 0;
                bestPos = 0;
                for (j = pos + 0x200; j < pos + 0xa00; j += 0x40) {
                    c = fn_82A3CF38(p, j - 0x400, j, table[(j - 0x400) >> 6],
                                    table[j >> 6], 0x400);
                    if (c > best) {
                        best = c;
                        bestPos = j;
                    }
                }
                if (best >= 0x6a4 && bestPos - base >= 0x1000) {
                    p->count = (unsigned char)(cnt + 1);
                    *outPos = bestPos;
                    if (outVal != 0) {
                        *outVal = table[bestPos >> 6];
                    }
                    return 1;
                }
            }
        }
    }
    return 0;
}
