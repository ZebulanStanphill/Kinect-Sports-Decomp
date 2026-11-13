extern float lbl_821954B0[];

typedef struct Result_826398A0 {
    float v;
} Result_826398A0;

Result_826398A0 fn_826398A0(int param_1, int param_2)
{
    Result_826398A0 r;
    unsigned int bits;

    bits = *(unsigned int *)(param_2 * 0x18 + param_1 + 0x494);
    r.v = -((float)((int)(bits << 23) >> 28) * lbl_821954B0[110]);
    return r;
}
