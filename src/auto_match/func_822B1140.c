extern float lbl_821CC160;

void fn_822B1140(char *p)
{
    float f;
    *(int *)(p + 0x20) = -1;
    *(int *)(p + 0x1c) = -1;
    f = lbl_821CC160;
    *(float *)(p + 0x18) = f;
    *(float *)(p + 0x24) = f;
}
