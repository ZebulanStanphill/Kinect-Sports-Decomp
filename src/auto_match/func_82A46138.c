unsigned int fn_82A46138(unsigned int n, float scale, int roundUp)
{
    float v = n * scale;

    if (roundUp)
        return (unsigned int)(v + 1.0) + 1;
    return (unsigned int)(v + 0.5);
}
