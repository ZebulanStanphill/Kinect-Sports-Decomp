extern float lbl_821960D0[];
extern int fn_8280B540(float *a, float *b, float tolerance);

int fn_8280CD00(float *a)
{
    return fn_8280B540(a, lbl_821960D0, 0.00001f);
}
