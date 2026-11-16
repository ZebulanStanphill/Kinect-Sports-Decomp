extern void *memset(void *, int, unsigned int);
extern int memcmp(const void *, const void *, unsigned int);

typedef union Token_82AC4650 {
    unsigned __int64 value; /* 0x00 */

    struct {
        unsigned int high;       /* 0x00 */
        unsigned int upper : 16; /* 0x04, bits 31..16 */
        unsigned int flags : 5;  /* 0x04, bits 15..11 */
        unsigned int lower : 11; /* 0x04, bits 10..0 */
    } words;
} Token_82AC4650;

int fn_82AC4650(Token_82AC4650 token, unsigned int *data)
{
    Token_82AC4650 masked;
    memset(&masked, 0, sizeof(masked));
    masked.words.flags = token.words.flags;
    if (memcmp(&masked, &token, 8) == 0) {
        unsigned int *header = data + data[0] * 4 + 3;
        unsigned char *name = (unsigned char *)(header + 1);
        int mode = (*header >> 13) & 7;
        if (name != 0) {
            int type = *name;
            if (type >= 35 || type <= 0) {
                type = 0;
            }
            if (type == 33 && mode > 0 && mode <= 4) {
                return 0;
            }
        }
    }
    return 0x80004005;
}
