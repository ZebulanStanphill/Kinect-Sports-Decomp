/* libpng 1.0.5, png.c: png_sig_cmp. lbl_820520F4 is the library's 8-byte PNG signature
 * (137 80 78 71 13 10 26 10). */
#include <string.h>

extern const unsigned char lbl_820520F4[8];

int png_sig_cmp(unsigned char *sig, unsigned int start, unsigned int num_to_check)
{
    if (num_to_check > 8) {
        num_to_check = 8;
    } else if (num_to_check < 1) {
        return 0;
    }
    if (start > 7) {
        return 0;
    }
    if (start + num_to_check > 8) {
        num_to_check = 8 - start;
    }
    return memcmp(&sig[start], &lbl_820520F4[start], num_to_check);
}
