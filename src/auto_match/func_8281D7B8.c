extern float lbl_821960A8[];
extern int fn_8281D638(float *a, float *b, float tolerance);

int fn_8281D7B8(float *a)
{
    return fn_8281D638(a, lbl_821960A8, 0.00001f);
}
