extern void *memset(void *, int, unsigned int);
extern int memcmp(const void *, const void *, unsigned int);
extern int fn_82AC3438(unsigned int *, unsigned int, int, int, void *);

typedef union Token_82AC4708 {
    unsigned __int64 value;

    struct {
        unsigned int reservedHigh : 17;
        unsigned int flag : 1;
        unsigned int single : 1;
        unsigned int index : 13;
        unsigned int reservedLow : 16;
        unsigned int upper : 4;
        unsigned int lower : 10;
        unsigned int end : 1;
        unsigned int reservedBottom : 1;
    } fields;
} Token_82AC4708;

int fn_82AC4708(Token_82AC4708 token, unsigned int *data, unsigned int *limit, unsigned int first)
{
    Token_82AC4708 masked;
    memset(&masked, 0, sizeof(masked));
    masked.fields.single = token.fields.single;
    masked.fields.lower = token.fields.lower;
    masked.fields.index = token.fields.index;
    masked.fields.end = token.fields.end;
    masked.fields.flag = token.fields.flag;
    masked.fields.upper = token.fields.upper;
    if (memcmp(&masked, &token, 8) != 0) {
        return 0x80004005;
    }
    {
        unsigned int *header = data + data[0] * 4 + 3;
        int mode = (*header >> 16) & 7;
        int type = (*header >> 13) & 7;
        if (token.fields.index <= first && token.fields.end) {
            return 0x80004005;
        }
        if (token.fields.index >= *limit) {
            return 0x80004005;
        }
        if (fn_82AC3438(data, token.fields.index, mode, type, header + 1) < 0) {
            return 0x80004005;
        }
        if (!token.fields.single) {
            if (fn_82AC3438(data, first + 1, mode, type, header + 1) < 0) {
                return 0x80004005;
            }
        }
    }
    return 0;
}
