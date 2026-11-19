extern void *memset(void *dst, int value, unsigned int size);
extern int memcmp(const void *a, const void *b, unsigned int size);

typedef union Token_82AC4830 {
    unsigned __int64 value;

    struct {
        unsigned int reservedHigh : 29;
        unsigned int count : 3;
        unsigned int reservedLow : 16;
        unsigned int mask : 4;
        unsigned int reservedMid : 1;
        unsigned int kind : 2;
        unsigned int keep : 1;
        unsigned int reservedBottom : 8;
    } fields;
} Token_82AC4830;

typedef struct Context_82AC4830 {
    char pad0[0x28];
    unsigned char locked; /* 0x28 */
} Context_82AC4830;

int fn_82AC4830(Token_82AC4830 token, unsigned int *data, Context_82AC4830 *context)
{
    Token_82AC4830 masked;
    unsigned int *flags;
    memset(&masked, 0, sizeof(masked));
    masked.fields.count = token.fields.count;
    masked.fields.keep = token.fields.keep;
    masked.fields.kind = token.fields.kind;
    masked.fields.mask = token.fields.mask;
    if (memcmp(&masked, &token, 8) != 0) {
        return 0x80004005;
    }
    flags = &data[data[0] * 4 + 3];
    *flags &= ~0x1000;
    switch (token.fields.kind) {
    case 0:
        return 0x80004005;
    case 1:
        if (token.fields.count != 0 || context->locked != 0 || (*flags & 0x800) != 0) {
            return 0x80004005;
        }
        *flags |= 0x1800;
        break;
    case 2:
        if (token.fields.count != 0 || (*flags & 0x400) != 0) {
            return 0x80004005;
        }
        *flags |= 0x400;
        break;
    case 3:
        return 0x80004005;
    }
    *flags |= 0x200;
    if (!token.fields.keep) {
        *flags &= ~0x40;
    }
    return 0;
}
