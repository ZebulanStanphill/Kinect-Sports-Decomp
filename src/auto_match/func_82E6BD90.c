typedef struct Scale_82E6BD90 {
    int unk0;  /* 0x0 */
    int shift; /* 0x4 */
    int count; /* 0x8 */
    int unkC;  /* 0xC */
} Scale_82E6BD90;

int fn_82E6BD90(int value, int *index, int maxValue, int *table, Scale_82E6BD90 scale)
{
    int scaled;
    int entry;
    int result;

    scaled = (value << scale.shift) >> 6;
    while (scaled >= table[*index + 1]) {
        *index = *index + 1;
    }
    if (*index >= scale.count) {
        return scale.count;
    }
    entry = table[*index + 1];
    if (scale.shift > 6) {
        result = (entry + (1 << (scale.shift - 7))) >> (scale.shift - 6);
    } else {
        result = entry << (6 - scale.shift);
    }
    if (result > maxValue) {
        return maxValue;
    }
    return result;
}
