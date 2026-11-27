#include <string.h>

static __forceinline unsigned int Symbol(unsigned int *symbols, int i)
{
    return symbols == 0 ? i : symbols[i];
}

int fn_82CAD2F8(short *table, unsigned int *codes, unsigned int *symbols, unsigned int tableBits)
{
    int count = codes[0] >> 6;
    int next = 1 << tableBits;
    int limit = count * 2 + next;
    int i;

    memset(table, 0, limit * 2);
    if (tableBits >= 16) {
        return 1;
    }
    next -= 0x8000;
    limit -= 0x8000;
    for (i = 0; i < count; i++) {
        unsigned int code = codes[i + 1];
        unsigned int length = code & 0x3f;
        unsigned int bits = code >> 6;

        if (length > 26) {
            return 1;
        }
        if ((bits >> length) != 0) {
            return 1;
        }
        if (length <= tableBits) {
            int shift = tableBits - length;
            int entry = bits << shift;
            int end = (bits + 1) << shift;
            unsigned int value;

            if (Symbol(symbols, i) >= 0x800) {
                return 1;
            }
            value = Symbol(symbols, i) * 16 + length;
            do {
                if (table[entry] != 0) {
                    return 1;
                }
                table[entry] = (short)value;
                entry++;
            } while (entry != end);
        } else {
            unsigned int left = length - tableBits;
            int node = bits >> left;

            do {
                if (table[node] > 0) {
                    return 1;
                }
                if (table[node] == 0) {
                    table[node] = (short)next;
                    next += 2;
                    if (next > limit) {
                        return 1;
                    }
                }
                left--;
                node = table[node] + 0x8000;
                if ((bits >> left) & 1) {
                    node++;
                }
            } while (left != 0);
            if (table[node] != 0) {
                return 1;
            }
            if (Symbol(symbols, i) >= 0x8000) {
                return 1;
            }
            table[node] = (short)Symbol(symbols, i);
        }
    }
    return 0;
}
