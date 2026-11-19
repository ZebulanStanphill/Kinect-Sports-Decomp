extern double fn_82F655D8(double base, double exponent);

int fn_829E3EC8(void *self, int exponent, float *out)
{
    float scaled = exponent >= 0 ? (float)exponent * 1.16415321826934814453125e-09f
                                 : -(float)-(__int64)exponent * 1.16415321826934814453125e-09f;

    *out = (float)fn_82F655D8(2.0, scaled);
    return 0;
}
