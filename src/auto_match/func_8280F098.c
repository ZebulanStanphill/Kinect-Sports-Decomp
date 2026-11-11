typedef struct EulerOrder_8280F098 {
    unsigned char i;
    unsigned char j;
    unsigned char k;
    unsigned char h;
} EulerOrder_8280F098;

extern EulerOrder_8280F098 lbl_83156DF0[];
extern float lbl_8201E044;
extern float fn_82809558(float x);
extern float fn_82809D40(float y, float x);

void fn_8280F098(float (*M)[4], int order, float *x, float *y, float *z)
{
    int i = lbl_83156DF0[order].i;
    int j = lbl_83156DF0[order].j;
    int k = lbl_83156DF0[order].k;

    if (order & 8) {
        float sy = fn_82809558(M[j][i] * M[j][i] + M[k][i] * M[k][i]);
        if (sy > lbl_8201E044) {
            *x = fn_82809D40(M[j][i], M[k][i]);
            *y = fn_82809D40(sy, M[i][i]);
            *z = fn_82809D40(M[i][j], -M[i][k]);
        } else {
            *x = fn_82809D40(-M[k][j], M[j][j]);
            *y = fn_82809D40(sy, M[i][i]);
            *z = 0.0f;
        }
    } else {
        float cy = fn_82809558(M[i][i] * M[i][i] + M[i][j] * M[i][j]);
        if (cy > lbl_8201E044) {
            *x = fn_82809D40(M[j][k], M[k][k]);
            *y = fn_82809D40(-M[i][k], cy);
            *z = fn_82809D40(M[i][j], M[i][i]);
        } else {
            *x = fn_82809D40(-M[k][j], M[j][j]);
            *y = fn_82809D40(-M[i][k], cy);
            *z = 0.0f;
        }
    }
    if (order & 4) {
        *x = -*x;
        *y = -*y;
        *z = -*z;
    }
    if (order & 0x10) {
        float t = *x;
        *x = *z;
        *z = t;
    }
}
