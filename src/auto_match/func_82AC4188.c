typedef union Token_82AC4188 {
    unsigned __int64 value;

    struct {
        unsigned int maskLow : 4; /* bits 63..60 */
        unsigned int pairs : 12;  /* bits 59..48 */
        unsigned int clear : 1;   /* bit 47 */
        unsigned int count : 3;   /* bits 46..44 */
        unsigned int first : 12;  /* bits 43..32 */
        unsigned int reserved0 : 16;
        unsigned int type : 4; /* bits 15..12 */
        unsigned int reserved1 : 2;
        unsigned int noDefault : 1; /* bit 9 */
        unsigned int reserved2 : 7;
        unsigned int maskHigh : 2; /* bits 1..0 */
    } fields;
} Token_82AC4188;

extern int fn_82AC3FB0(int context, unsigned int index, unsigned char masked, unsigned char second,
                       unsigned char firstOfPair, unsigned char defaulted, unsigned int *limit, int extra,
                       unsigned int *data);

int fn_82AC4188(Token_82AC4188 token, unsigned int *data, unsigned int *limit, int context, int extra)
{
    unsigned int count;
    unsigned int i;
    unsigned char masked;
    unsigned char second;
    unsigned char firstOfPair;
    unsigned int index;
    unsigned char defaulted;
    unsigned int type;

    count = token.fields.count;
    if (count > 6) {
        return 0x80004005;
    }
    for (i = 0; i < count; i++) {
        index = token.fields.first + i;
        if (index * 2 >= *limit) {
            return 0x80004005;
        }
        masked = ((token.fields.maskHigh << 4 | token.fields.maskLow) & (1 << i)) != 0;
        second = ((2 << (i * 2)) & token.fields.pairs) != 0;
        firstOfPair = ((1 << (i * 2)) & token.fields.pairs) != 0;
        type = token.fields.type;
        if (type == 3 || type == 4) {
            defaulted = 1;
        } else if (type == 13 || type == 14) {
            defaulted = 0;
        } else {
            defaulted = !token.fields.noDefault;
        }
        if (fn_82AC3FB0(context, index, masked, second, firstOfPair, defaulted, limit, extra, data) < 0) {
            return 0x80004005;
        }
    }
    if (token.fields.clear) {
        data[data[0] * 4 + 3] &= ~0x1000;
    }
    return 0;
}
