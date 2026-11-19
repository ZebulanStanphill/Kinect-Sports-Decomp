typedef struct Rates_83065900 {
    int width;        /* 0x0 */
    int height;       /* 0x4 */
    int scaledWidth;  /* 0x8 */
    int scaledHeight; /* 0xc */
    int unk10;        /* 0x10 */
    int numerator;    /* 0x14 */
    int denominator;  /* 0x18 */
    float scaleX;     /* 0x1c */
    float scaleY;     /* 0x20 */
    float ratio;      /* 0x24 */
} Rates_83065900;

void fn_83065900(Rates_83065900 *rates)
{
    rates->scaleX = (float)rates->scaledWidth / (float)rates->width;
    rates->scaleY = (float)rates->scaledHeight / (float)rates->height;
    rates->ratio = (float)rates->numerator / (float)rates->denominator;
}
