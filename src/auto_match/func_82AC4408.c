extern void *memset(void *, int, unsigned int);
extern int memcmp(const void *, const void *, unsigned int);
extern int fn_82AC3628(unsigned int *, unsigned int, int, int, void *, int);
extern int fn_82AC3770(unsigned int *, unsigned int, int, int, void *);

typedef union Token_82AC4408 {
    unsigned __int64 value;

    struct {
        unsigned int reservedHigh : 10;
        unsigned int flag2 : 1;
        unsigned int length : 5;
        unsigned int reservedMid : 3;
        unsigned int index : 13;
        unsigned int reservedLow : 16;
        unsigned int upper : 4;
        unsigned int lower : 2;
        unsigned int reservedBottom : 10;
    } fields;
} Token_82AC4408;

static __forceinline unsigned int GetLength_82AC4408(unsigned char *data)
{
    if (data != 0) {
        int length = *data;
        if (length < 35 && length > 0) {
            return length;
        }
    }
    return 0;
}

int fn_82AC4408(Token_82AC4408 token, unsigned int *data, unsigned int *limit, unsigned int first)
{
    Token_82AC4408 masked;
    memset(&masked, 0, sizeof(masked));
    masked.fields.lower = token.fields.lower;
    masked.fields.index = token.fields.index;
    masked.fields.length = token.fields.length;
    masked.fields.upper = token.fields.upper;
    masked.fields.flag2 = token.fields.flag2;
    if (memcmp(&masked, &token, 8) == 0) {
        unsigned int *header = data + data[0] * 4 + 3;
        int mode = (*header >> 16) & 7;
        int type = (*header >> 13) & 7;
        if (mode > 0 && mode <= 4 && token.fields.index <= first && token.fields.index < *limit) {
            int status;
            if (GetLength_82AC4408((unsigned char *)(header + 1)) != token.fields.length + 1) {
                return 0x80004005;
            }
            if (fn_82AC3628(data, token.fields.index, mode, type, header + 1, token.fields.length + 1) < 0) {
                return 0x80004005;
            }
            status = fn_82AC3770(data, first + 1, mode - 1, type, header + 1);
            return status < 0 ? (int)0x80004005 : 0;
        }
    }
    return 0x80004005;
}
