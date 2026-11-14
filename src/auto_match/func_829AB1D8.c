#include <string.h>

extern const unsigned char lbl_820520F4[8];

int fn_829AB1D8(unsigned char *sig, unsigned int start, unsigned int num_to_check)
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
