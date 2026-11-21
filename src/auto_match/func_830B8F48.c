typedef struct Image_830B8F48 {
    char pad0[0x32];
    unsigned short width;  /* 0x32 */
    unsigned short height; /* 0x34 */
    char pad36[0x4ee];
    unsigned char *blocks; /* 0x524 */
} Image_830B8F48;

extern const unsigned __int64 lbl_831769B8[4];

void fn_830B8F48(void *unused, Image_830B8F48 *image)
{
    unsigned int rows = image->height >> 1;
    unsigned int columns = image->width >> 1;
    unsigned char *out = image->blocks;
    unsigned int y;
    unsigned int x;

    for (y = 0; y < rows; y++) {
        for (x = 0; x < columns; x++) {
            unsigned __int64 value = lbl_831769B8[(x == 0) + (y == 0) * 2] & 0xF0F0F0F0F0FULL;
            out[0] = (unsigned char)value;
            value >>= 8;
            out[1] = (unsigned char)value;
            value >>= 8;
            out[2] = (unsigned char)value;
            value >>= 8;
            out[3] = (unsigned char)value;
            value >>= 8;
            out[4] = (unsigned char)value;
            value >>= 8;
            out[5] = (unsigned char)value;
            out += 6;
        }
    }
}
