extern float lbl_821954B0[];

unsigned int fn_82638178(char *self)
{
    union {
        float f;
        unsigned int u;
    } x;
    x.f = (float)*(unsigned short *)(self + 0x296e) * lbl_821954B0[0x6e];
    return x.u;
}
