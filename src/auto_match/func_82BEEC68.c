void fn_82BEEC68(float *dst, const float *a, const float *b)
{
    int i;
    int j;
    float *out = dst;
    const float *row = a;
    const float *col;

    for (i = 0; i < 4; i++, row += 4) {
        col = b;
        for (j = 0; j < 4; j++, col++)
            *out++ = row[0] * col[0] + row[1] * col[4] + row[2] * col[8] + row[3] * col[12];
    }
}
