extern const float lbl_82057BA4[3][3];

float fn_829E5928(void)
{
    float sum = 0.0f;
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            sum = lbl_82057BA4[i][j] + sum;
    return sum;
}
