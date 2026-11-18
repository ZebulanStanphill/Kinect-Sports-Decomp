extern const unsigned int lbl_8200E3B0[32];
extern int fn_8268F498(unsigned int value);

int fn_8268F580(const unsigned int *words, unsigned int bit, unsigned int limit)
{
    unsigned int index = bit >> 5;
    unsigned int shift = bit & 31;
    unsigned int mask = lbl_8200E3B0[shift];
    unsigned int word = words[index] & mask;
    int offset;

    if (word != mask) {
        return fn_8268F498(word >> shift);
    }
    offset = 32 - shift;
    while ((index + 1) * 32 < limit) {
        index++;
        if (words[index] != 0xffffffffU) {
            break;
        }
        offset += 32;
    }
    return fn_8268F498(words[index]) + offset;
}
