extern const float lbl_82057AC0[5][5];

float fn_829E3BC0(void)
{
    float sum = 0.0f;
    int i, j;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            sum = lbl_82057AC0[i][j] + sum;
    return sum;
}
