/* Writes an unsigned 64-bit number backwards in front of the output cursor, in the given base,
   with a group separator every three decimal digits when grouping is requested. */

typedef struct Format_826EF340 {
    char pad0[5];
    signed char separator : 7; /* 0x5 */
    unsigned char flag5 : 1;
    unsigned char upper : 1; /* 0x6 */
    unsigned char pad6 : 7;
    char pad7;
    char *cursor; /* 0x8 */
} Format_826EF340;

void fn_826EF340(Format_826EF340 *self, char *begin, unsigned __int64 value, unsigned char group,
                 unsigned int base)
{
    unsigned int count;
    const char *digits;
    unsigned char digit;

    if (group && base == 10 && self->separator != 0) {
        count = 3;
    } else {
        count = 1000;
    }
    if (self->upper) {
        digits = "0123456789ABCDEF";
    } else {
        digits = "0123456789abcdef";
    }
    if (base < 2 || base > 16) {
        return;
    }
    do {
        if (begin == self->cursor) {
            return;
        }
        digit = value % base;
        value /= base;
        if (count == 0) {
            *--self->cursor = self->separator;
            count = 3;
        }
        count--;
        *--self->cursor = digits[digit];
    } while (value != 0);
}
