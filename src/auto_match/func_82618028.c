typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float v[4];
} __vector4;

extern int fn_82591730(void *, int, unsigned int);
extern void fn_82590DB8(void *, int, int);

int fn_82618028(char *self, int event, unsigned int value)
{
    switch (event) {
    case 5:
        *(int *)(*(char **)(self + 4) + 0x190) = 1;
        fn_82590DB8(self, 0, 0);
        *(__vector4 *)(self + 0xa0) = *(__vector4 *)(*(char **)(self + 4) + 0xa0);
        break;
    case 8:
        *(int *)(*(char **)(self + 4) + 0x190) = 1;
        *(float *)(self + 0xb0) = *(float *)&value;
        break;
    case 13:
        *(__vector4 *)(self + 0x60) = *(__vector4 *)value;
        break;
    case 23:
        *(float *)(self + 0x10) = *(float *)&value;
        self[0xc6] = 1;
        break;
    default:
        return fn_82591730(self, event, value);
    }
    return 1;
}
