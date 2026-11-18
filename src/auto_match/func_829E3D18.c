extern const float lbl_82057AC0[5][5];
extern float lbl_832187EC;

typedef struct Filter_829E3D18 {
    char pad[12];
    float (*data)[5]; /* 0xc */
} Filter_829E3D18;

int fn_829E3D18(Filter_829E3D18 *self, float *weighted, float *average)
{
    float sum = 0.0f;
    float total = 0.0f;
    int i;
    int j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            total = self->data[i][j] + total;
            sum = lbl_82057AC0[i][j] * self->data[i][j] + sum;
        }
    }
    *weighted = sum / lbl_832187EC;
    *average = total / 25.0f;
    return 0;
}
