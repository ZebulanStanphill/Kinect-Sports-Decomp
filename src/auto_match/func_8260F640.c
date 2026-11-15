extern const float lbl_82192730[7];
extern void fn_82569898(void *, float);

void fn_8260F640(void *self, unsigned int a, const float *values, unsigned int b, unsigned int mode)
{
    float result;
    switch (mode) {
    case 0:
        *(int *)((char *)self + 0x11c) = 1;
        *(int *)((char *)self + 0x120) = 0;
        result = values[2];
        break;
    case 1:
        if (*(int *)((char *)self + 0x11c)) {
            fn_82569898(self, values[1] / *(float *)((char *)self + 0x94));
            return;
        }
        result = lbl_82192730[1];
        break;
    default:
        return;
    }
    *(float *)((char *)self + 0x124) = result;
}
