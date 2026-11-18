extern float lbl_82057270;
extern float lbl_8201435C;

float fn_829C9838(float *coefficients, short x, short y)
{
    float dx = (float)x - lbl_82057270;
    float dy = (float)y - lbl_8201435C;
    return ((coefficients[5] * dy + (coefficients[1] * dy + coefficients[3] * dx) * dy +
             coefficients[2] * dx * dx + coefficients[8]) *
                dy +
            ((coefficients[0] * dx + coefficients[4]) * dx + coefficients[6] * dy + coefficients[7]) * dx +
            coefficients[9]);
}
