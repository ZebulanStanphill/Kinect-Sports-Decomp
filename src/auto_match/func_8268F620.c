extern const unsigned int lbl_8200E4B0[32];
extern int fn_8268F518(unsigned int value);

int fn_8268F620(const unsigned int *words, unsigned int bit)
{
    unsigned int word = words[bit >> 5] | lbl_8200E4B0[bit & 31];
    unsigned int index = bit >> 5;
    unsigned int shift = bit & 31;
    if (word != lbl_8200E4B0[bit & 31]) {
        return fn_8268F518(word >> (bit & 31));
    } else {
        const unsigned int *cursor;
        int offset = 32 - shift;
        index++;
        cursor = &words[index];
        word = *cursor;
        while (word == 0) {
            word = *++cursor;
            offset += 32;
            index++;
        }
        return fn_8268F518(words[index]) + offset;
    }
}
