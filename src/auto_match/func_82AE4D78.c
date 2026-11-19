typedef struct Entry_82AE4D78 {
    unsigned int flag : 1;
    unsigned int reserved : 5;
    unsigned int level : 6;
    unsigned int mode : 2;
    unsigned int value : 14;
    unsigned int low : 4;
    unsigned int extra;
} Entry_82AE4D78;

static __forceinline unsigned char IsValidLevel(int level)
{
    return level > 0 && level <= 9;
}

static __forceinline unsigned char IsLowLevel(int level)
{
    return level >= 2 && level <= 5;
}

void fn_82AE4D78(Entry_82AE4D78 *entries, int index, unsigned int value, unsigned int low, int level,
                 unsigned char flag)
{
    entries[index].value = value;
    entries[index].low = low;
    if (level == 0) {
        entries[index].mode = 1;
    } else if (IsValidLevel(level)) {
        if (IsLowLevel(level)) {
            entries[index].mode = 2;
        } else {
            entries[index].mode = 3;
        }
    }
    entries[index].level = level;
    entries[index].flag = flag;
}
