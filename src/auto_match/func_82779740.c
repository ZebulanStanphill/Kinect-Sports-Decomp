typedef struct Color_82779740 {
    unsigned char a; /* 0x0 */
    unsigned char r; /* 0x1 */
    unsigned char g; /* 0x2 */
    unsigned char b; /* 0x3 */
} Color_82779740;

extern const float lbl_82005CCC;
extern void fn_827792C0(double hue, double saturation, double value, double *red, double *green,
                        double *blue);

void fn_82779740(Color_82779740 *self, double hue, double saturation, double value)
{
    double red;
    double green;
    double blue;
    unsigned char r;
    unsigned char g;
    unsigned char b;

    fn_827792C0(hue, saturation, value, &red, &green, &blue);
    r = (unsigned char)((float)red * lbl_82005CCC);
    g = (unsigned char)((float)green * lbl_82005CCC);
    b = (unsigned char)((float)blue * lbl_82005CCC);
    self->r = r;
    self->g = g;
    self->b = b;
}
