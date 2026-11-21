typedef struct Color_82779958 {
    unsigned char alpha; /* 0x00 */
    unsigned char red;   /* 0x01 */
    unsigned char green; /* 0x02 */
    unsigned char blue;  /* 0x03 */
} Color_82779958;

extern const float lbl_82005328; /* 1.0f / 255.0f */

extern void fn_827797D8(double red, double green, double blue, double *hue, double *saturation,
                        double *intensity);

void fn_82779958(Color_82779958 *color, float *hue, float *saturation, float *intensity)
{
    double h;
    double s;
    double i;
    float red;
    float green;
    float blue;

    red = color->red == 0 ? 0.0f : color->red * lbl_82005328;
    green = color->green == 0 ? 0.0f : color->green * lbl_82005328;
    blue = color->blue == 0 ? 0.0f : color->blue * lbl_82005328;
    fn_827797D8(red, green, blue, &h, &s, &i);
    *hue = (float)h;
    *saturation = (float)s;
    *intensity = (float)i;
}
