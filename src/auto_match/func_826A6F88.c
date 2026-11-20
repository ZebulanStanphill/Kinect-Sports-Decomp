typedef struct String_826A6F88 String_826A6F88;

/* Upper-case hexadecimal digit of a value 0..15. */
#define HEX_DIGIT(value) ((value) + ((value) <= 9 ? '0' : '7'))

extern void fn_8268B610(String_826A6F88 *self, const char *text, int length);

/* Appends the bytes to the string, escaping every byte that is not ASCII or whose bit in the
   allowed set is clear as %XX. */
void fn_826A6F88(const unsigned char *data, unsigned int size, String_826A6F88 *out,
                 const unsigned int *allowed)
{
    char buffer[256];
    char *p = buffer;
    unsigned int i;
    int c;

    for (i = 0; i < size; i++) {
        c = data[i];
        if (p + 4 >= &buffer[255]) {
            *p = 0;
            fn_8268B610(out, buffer, -1);
            p = buffer;
        }
        if (c < 0x80 && (allowed[c / 32] & (1 << (c % 32))) != 0) {
            *p++ = (char)c;
        } else {
            *p++ = '%';
            *p++ = (char)HEX_DIGIT(c / 16);
            *p++ = (char)HEX_DIGIT(c % 16);
        }
    }
    *p = 0;
    fn_8268B610(out, buffer, -1);
}
