struct Locale_82F6B140 {
    char padding[0xac];
    int multibyte; /* 0xac */
    char paddingB0[0x18];
    unsigned short *classification; /* 0xc8 */
};

struct ParsedNumber_82F6B140 {
    unsigned int flags; /* 0x00 */
    int length;         /* 0x04 */
    char padding[8];
    double value; /* 0x10 */
};

extern struct Locale_82F6B140 *lbl_831BBCA8;
extern const double lbl_82005710;
extern const double lbl_8216AA90;
extern int *_errno(void);
extern void _invalid_parameter_noinfo(void);
extern int fn_82F704C8(int character, unsigned int mask, void *locale);
extern struct ParsedNumber_82F6B140 *fn_82F81918(void *result, const unsigned char *text, void *locale);

double fn_82F6B140(const unsigned char *text, const unsigned char **end)
{
    char buffer[24];
    struct Locale_82F6B140 *locale;
    struct ParsedNumber_82F6B140 *parsed;
    const unsigned char *p;
    int whitespace;
    double result;

    p = text;
    if (end != 0) {
        *end = text;
    }
    if (text == 0) {
        *_errno() = 0x16;
        _invalid_parameter_noinfo();
        return lbl_82005710;
    }
    locale = lbl_831BBCA8;
    for (;;) {
        if (locale->multibyte > 1) {
            whitespace = fn_82F704C8(*p, 8, &lbl_831BBCA8);
            locale = lbl_831BBCA8;
        } else {
            whitespace = locale->classification[*p] & 8;
        }
        if (whitespace == 0) {
            break;
        }
        ++p;
    }
    parsed = fn_82F81918(buffer, p, &lbl_831BBCA8);
    if (end != 0) {
        *end = p + parsed->length;
    }
    if (parsed->flags & 0x240) {
        result = lbl_82005710;
        if (end != 0) {
            *end = text;
        }
    } else if (parsed->flags & 0x81) {
        if (*p == '-') {
            result = -lbl_8216AA90;
        } else {
            result = lbl_8216AA90;
        }
        *_errno() = 0x22;
    } else if ((parsed->flags & 0x100) && parsed->value == lbl_82005710) {
        result = lbl_82005710;
        *_errno() = 0x22;
    } else {
        result = parsed->value;
    }
    return result;
}
