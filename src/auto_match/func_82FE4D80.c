typedef struct Point_82FE4D80 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */
} Point_82FE4D80;

extern double fn_82FE4C08(unsigned int, double, double, unsigned int);
extern int fn_82FE41A0(Point_82FE4D80 *, void *, unsigned int);
extern void fn_82FE4B20(Point_82FE4D80 *, double, double, unsigned int, unsigned int);

int fn_82FE4D80(Point_82FE4D80 *out, void *context, const unsigned int *inputs, double scale, double damping,
                unsigned int rate)
{
    double factor = fn_82FE4C08(inputs[3], scale, damping, rate);
    int result = fn_82FE41A0(out, context, inputs[0]);
    if (result == 1) {
        result = fn_82FE41A0(out + 1, context, inputs[1]);
        if (result == 1) {
            result = fn_82FE41A0(out + 2, context, inputs[2]);
            if (result == 1) {
                result = fn_82FE41A0(out + 3, context, inputs[3]);
                if (result == 1) {
                    fn_82FE4B20(out + 4, scale, factor, rate, inputs[0]);
                    fn_82FE4B20(out + 5, scale, factor, rate, inputs[1]);
                    fn_82FE4B20(out + 6, scale, factor, rate, inputs[2]);
                    fn_82FE4B20(out + 7, scale, factor, rate, inputs[3]);
                    result = 1;
                }
            }
        }
    }
    return result;
}
