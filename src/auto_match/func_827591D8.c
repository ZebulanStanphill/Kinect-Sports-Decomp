extern double fn_82F655D8(double x, double y);  /* pow */
extern double fn_82F68918(double x);            /* floor */

/* Gamma-corrects a 16-bit channel value and returns it as an 8-bit one. */
unsigned char fn_827591D8(unsigned short value, float gamma)
{
    float v = (float)fn_82F655D8(value * (1.0f / 65535.0f), gamma);

    return (unsigned char)fn_82F68918(v * 255.0f + 0.5f);
}
