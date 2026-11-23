extern double fn_82F655D8(double base, double exponent);

void fn_8305C070(float *out, int count, double startDb, double shape, unsigned char linear)
{
    double step = 1.0 / (double)count;
    int i;

    if (linear) {
        startDb = 1.0;
        shape = 1.0;
    } else {
        startDb = fn_82F655D8(10.0, startDb * 0.05);
    }
    for (i = 0; i < count; i++) {
        double value = 1.0 - fn_82F655D8(1.0 - (double)i * step, 0.5);

        out[i] = (float)fn_82F655D8(1.0 / startDb * value + 1.0, 1.0 / shape - 1.0);
    }
}
