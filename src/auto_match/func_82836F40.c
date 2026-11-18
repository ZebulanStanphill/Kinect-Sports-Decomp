typedef struct ColorState_82836F40 {
    float red;   /* 0x0 */
    float green; /* 0x4 */
    float blue;  /* 0x8 */
    float alpha; /* 0xc */
    char pad10[0x88];
    unsigned int packed; /* 0x98 */
} ColorState_82836F40;

extern ColorState_82836F40 lbl_8320A7F0;
extern const float lbl_82005328;

void fn_82836F40(unsigned char red, unsigned char green, unsigned char blue, unsigned char alpha)
{
    lbl_8320A7F0.packed = (((alpha << 8) | red) << 8 | green) << 8 | blue;
    lbl_8320A7F0.red = red * lbl_82005328;
    lbl_8320A7F0.green = green * lbl_82005328;
    lbl_8320A7F0.blue = blue * lbl_82005328;
    lbl_8320A7F0.alpha = (unsigned int)alpha * lbl_82005328;
}
