typedef struct NumericFormat_82F7F3C8 {
    char *decimalPoint; /* 0x0 */
} NumericFormat_82F7F3C8;

typedef struct Locale_82F7F3C8 {
    char padding[0xbc];
    NumericFormat_82F7F3C8 *numeric; /* 0xbc */
} Locale_82F7F3C8;

extern Locale_82F7F3C8 *lbl_831BBCA8;

/* Removes trailing zeros (and a bare decimal point) from the mantissa of a formatted number. */
void fn_82F7F3C8(char *text)
{
    char *exponent;

    while (*text != 0 && *text != *lbl_831BBCA8->numeric->decimalPoint) {
        text++;
    }
    if (*text++ != 0) {
        while (*text != 0 && *text != 'e' && *text != 'E') {
            text++;
        }
        exponent = text;
        while (*--text == '0') {
        }
        if (*text == *lbl_831BBCA8->numeric->decimalPoint) {
            text--;
        }
        while ((*++text = *exponent++) != 0) {
        }
    }
}
