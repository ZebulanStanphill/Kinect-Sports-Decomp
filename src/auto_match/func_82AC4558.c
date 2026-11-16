extern void *memset(void *, int, unsigned int);
extern int memcmp(const void *, const void *, unsigned int);
extern int fn_82AC3548(unsigned int *, unsigned int, int, int, void *, int);

typedef union Token_82AC4558 {
    unsigned __int64 value;

    struct {
        unsigned int reservedHigh : 17;
        unsigned int flag : 1;
        unsigned int index : 14;
        unsigned int reservedLow : 16;
        unsigned int upper : 4;
        unsigned int lower : 10;
        unsigned int reservedBottom : 2;
    } fields;
} Token_82AC4558;

int fn_82AC4558(Token_82AC4558 token, unsigned int *data, unsigned int *limit)
{
    Token_82AC4558 masked;
    memset(&masked, 0, sizeof(masked));
    masked.fields.lower = token.fields.lower;
    masked.fields.index = token.fields.index;
    masked.fields.upper = token.fields.upper;
    masked.fields.flag = token.fields.flag;
    if (memcmp(&masked, &token, 8) == 0) {
        unsigned int *header = data + data[0] * 4 + 3;
        int mode = (*header >> 13) & 7;
        int type = (*header >> 16) & 7;
        if (mode >= 0 && mode < 4 && (token.fields.index & 0x1fff) < *limit) {
            int status = fn_82AC3548(data, token.fields.index & 0x1fff, type, mode + 1, header + 1, 33);
            return status < 0 ? (int)0x80004005 : 0;
        }
    }
    return 0x80004005;
}
