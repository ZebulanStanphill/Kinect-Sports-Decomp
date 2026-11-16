struct Locale_82F6AF60 {
    char padding[0xac];
    int multibyte; /* 0xac */
    char paddingB0[0x18];
    unsigned short *classification; /* 0xc8 */
};

struct ParsedNumber_82F6AF60 {
    char padding[0x10];
    double value; /* 0x10 */
};

extern struct Locale_82F6AF60 *lbl_831BBCA8;
extern const double lbl_82005710;
extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);
extern int fn_82F704C8(int character, unsigned int mask, void *locale);
extern struct ParsedNumber_82F6AF60 *fn_82F81918(void *result, const unsigned char *text, void *locale);

double fn_82F6AF60(const unsigned char *text)
{
    char result[24];
    struct Locale_82F6AF60 *locale;
    int whitespace;

    if (text == 0) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return lbl_82005710;
    }
    locale = lbl_831BBCA8;
    for (;;) {
        if (locale->multibyte > 1) {
            whitespace = fn_82F704C8(*text, 8, &lbl_831BBCA8);
            locale = lbl_831BBCA8;
        } else {
            whitespace = locale->classification[*text] & 8;
        }
        if (whitespace == 0) {
            break;
        }
        ++text;
    }
    return fn_82F81918(result, text, &lbl_831BBCA8)->value;
}
