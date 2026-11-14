/* Number of trailing one bits of a 32-bit word, a byte at a time through a 256-entry table. */
extern const unsigned char lbl_8200E6B0[256];

int fn_8268F498(unsigned int bits)
{
    if ((bits & 0xffff) != 0xffff) {
        if ((bits & 0xff) == 0xff)
            return lbl_8200E6B0[(bits >> 8) & 0xff] + 8;
        return lbl_8200E6B0[bits & 0xff];
    }
    if ((bits & 0xffffff) == 0xffffff)
        return lbl_8200E6B0[bits >> 24] + 24;
    return lbl_8200E6B0[(bits >> 16) & 0xff] + 16;
}
