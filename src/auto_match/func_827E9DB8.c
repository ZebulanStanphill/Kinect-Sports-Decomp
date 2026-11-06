void fn_827E9DB8(float a, float b, float *lo, float *hi)
{
    if (a > b) {
        if (b > *lo) {
            *lo = b;
        }
        if (a < *hi) {
            *hi = a;
        }
    } else {
        if (a > *lo) {
            *lo = a;
        }
        if (b < *hi) {
            *hi = b;
        }
    }
}
