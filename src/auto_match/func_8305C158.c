extern double fn_82F655D8(double base, double exponent);

void fn_8305C158(float *out, int count, double startDb, double shape, double floorDb, unsigned char linear)
{
    double step = 1.0 / (double)(count - 1);
    int i;

    if (linear) {
        shape = 1.0;
        floorDb = 1.0;
    } else {
        startDb = fn_82F655D8(10.0, startDb * 0.05);
        floorDb = fn_82F655D8(10.0, floorDb * 0.05);
    }
    for (i = 0; i < count; i++) {
        double value = 1.0 - fn_82F655D8(1.0 - (double)i * step, 0.5);

        value = fn_82F655D8(value, shape - 1.0);
        if (value > 1.0) {
            value = 1.0;
        }
        if (value < floorDb) {
            value = floorDb;
        }
        out[i] = (float)value;
    }
}
