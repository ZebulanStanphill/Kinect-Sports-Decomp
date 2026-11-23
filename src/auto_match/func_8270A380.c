static __forceinline void AddCorner(int *sum, const unsigned char *color, int weight)
{
    sum[0] += color[0] * weight;
    sum[1] += color[1] * weight;
    sum[2] += color[2] * weight;
}

void fn_8270A380(unsigned char *output, const unsigned char *topLeft, const unsigned char *topRight,
                 const unsigned char *bottomLeft, const unsigned char *bottomRight, int x, int y)
{
    int sum[3];

    sum[0] = 0x8000;
    sum[1] = 0x8000;
    sum[2] = 0x8000;
    AddCorner(sum, topLeft, (0x100 - y) * (0x100 - x));
    AddCorner(sum, topRight, (0x100 - y) * x);
    AddCorner(sum, bottomLeft, (0x100 - x) * y);
    AddCorner(sum, bottomRight, x * y);
    output[0] = (unsigned char)(sum[0] >> 16);
    output[1] = (unsigned char)(sum[1] >> 16);
    output[2] = (unsigned char)(sum[2] >> 16);
}
