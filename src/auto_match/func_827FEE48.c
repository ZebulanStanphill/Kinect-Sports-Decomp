void fn_827FEE48(int *self, float *x, float *y, float *z)
{
    int owner = *self;
    float value = 0.0f;

    if (*(unsigned char *)(*(int *)(owner + 0x30) + 0x1f)) {
        *x = *(float *)(*(int *)(owner + 0x30) + 0x0c);
    } else {
        *x = value;
    }
    if (*(unsigned char *)(*(int *)(owner + 0x30) + 0x20)) {
        *y = *(float *)(*(int *)(owner + 0x30) + 0x10);
    } else {
        *y = value;
    }
    if (*(unsigned char *)(*(int *)(owner + 0x30) + 0x21)) {
        value = *(float *)(*(int *)(owner + 0x30) + 0x14);
    }
    *z = value;
}
