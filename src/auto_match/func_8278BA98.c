typedef union Flags_8278BA98 {
    unsigned short word;

    struct {
        unsigned short unused15 : 5;
        unsigned short usesColor : 1;
        unsigned short usesProvider : 1;
        unsigned short aliases : 1;
        unsigned short unused7 : 4;
        unsigned short usesHigh : 1;
        unsigned short names : 1;
        unsigned short usesShort : 1;
        unsigned short hasColor : 1;
    } bits;
} Flags_8278BA98;

typedef struct Key_8278BA98 {
    char pad0[8];
    unsigned int taggedName;
    char pad0c[4];
    unsigned int taggedAlias;
    char pad14[4];
    void *provider;
    int enabled;
    unsigned int color;
    short shortValue;
    unsigned short highValue;
    unsigned char kind;
    char pad29;
    Flags_8278BA98 flags;
} Key_8278BA98;

extern unsigned int fn_8268ACE8(const unsigned int *tagged);
extern unsigned int fn_8268AF70(const unsigned char *bytes, unsigned int length, unsigned int seed);
extern unsigned int fn_8278B788(void *provider);

unsigned int fn_8278BA98(void *context, const Key_8278BA98 *key)
{
    unsigned int data[4];
    Flags_8278BA98 flags = key->flags;
    unsigned int color;
    unsigned int value;
    unsigned int hash;
    unsigned int i;

    data[2] = 0;
    data[3] = 0;
    color = 0;
    value = 0;
    if ((unsigned char)flags.bits.hasColor || (unsigned char)flags.bits.usesColor)
        color = key->color;
    if ((unsigned char)flags.bits.usesShort)
        value = key->shortValue;
    if ((unsigned char)flags.bits.usesHigh)
        value = ((unsigned int)key->highValue << 16) | value;
    data[1] = ((unsigned int)flags.word << 24) | value;
    data[0] = ((unsigned int)key->kind << 24) | color;
    if (key->enabled)
        data[2] = 1;
    if ((unsigned char)flags.bits.usesProvider && (int)key->provider != 0)
        data[3] = fn_8278B788(key->provider);

    i = sizeof(data);
    hash = 0x1505;
    do {
        --i;
        hash = ((const unsigned char *)data)[i] + hash * 0x1003f;
    } while (i != 0);
    if ((unsigned char)key->flags.bits.names) {
        hash ^= fn_8268AF70((const unsigned char *)((key->taggedName & ~3U) + 8),
                            *(const unsigned int *)(key->taggedName & ~3U) & 0x7fffffff, 0x1505);
    }
    if ((unsigned char)((key->flags.word & 0x100) && fn_8268ACE8(&key->taggedAlias) != 0)) {
        hash ^= fn_8268AF70((const unsigned char *)((key->taggedAlias & ~3U) + 8),
                            *(const unsigned int *)(key->taggedAlias & ~3U) & 0x7fffffff, 0x1505);
    }
    return hash;
}
