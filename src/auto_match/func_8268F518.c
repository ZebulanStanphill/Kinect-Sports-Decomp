/* Number of trailing zero bits of a 32-bit word, a byte at a time through a 256-entry table. */
extern const unsigned char lbl_8200E5B0[256];

int fn_8268F518(unsigned int bits)
{
    if ((bits & 0xffff) != 0) {
        if ((bits & 0xff) != 0)
            return lbl_8200E5B0[bits & 0xff];
        return lbl_8200E5B0[(bits >> 8) & 0xff] + 8;
    }
    if ((bits & 0xff0000) != 0)
        return lbl_8200E5B0[(bits >> 16) & 0xff] + 16;
    return lbl_8200E5B0[bits >> 24] + 24;
}
