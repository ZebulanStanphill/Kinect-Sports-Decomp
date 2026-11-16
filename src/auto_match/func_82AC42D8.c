extern void *memset(void *, int, unsigned int);
extern int memcmp(const void *, const void *, unsigned int);
extern int fn_82AC3438(unsigned int *, unsigned int, int, int, void *);
extern int fn_82AC3548(unsigned int *, unsigned int, int, int, void *, int);

typedef union Token_82AC42D8 {
    unsigned __int64 value;

    struct {
        unsigned int reservedHigh : 11;
        unsigned int length : 5;
        unsigned int reservedMid : 2;
        unsigned int flag : 1;
        unsigned int index : 13;
        unsigned int reservedLow : 16;
        unsigned int upper : 4;
        unsigned int lower : 1;
        unsigned int reservedBottom : 11;
    } fields;
} Token_82AC42D8;

int fn_82AC42D8(Token_82AC42D8 token, unsigned int *data, unsigned int *limit, unsigned int first)
{
    Token_82AC42D8 masked;
    memset(&masked, 0, sizeof(masked));
    masked.fields.lower = token.fields.lower;
    masked.fields.index = token.fields.index;
    masked.fields.length = token.fields.length;
    masked.fields.upper = token.fields.upper;
    masked.fields.flag = token.fields.flag;
    if (memcmp(&masked, &token, 8) == 0) {
        unsigned int *header = data + data[0] * 4 + 3;
        int mode = (*header >> 16) & 7;
        int type = (*header >> 13) & 7;
        if (mode >= 0 && mode < 4 && token.fields.index > first && token.fields.index < *limit) {
            int status;
            if (fn_82AC3438(data, token.fields.index, mode, type, header + 1) < 0) {
                return 0x80004005;
            }
            status = fn_82AC3548(data, first + 1, mode + 1, type, header + 1, token.fields.length + 1);
            return status < 0 ? (int)0x80004005 : 0;
        }
    }
    return 0x80004005;
}
