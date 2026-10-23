typedef struct Arr {
    char *data;
    unsigned short count;
} Arr;
extern void *fn_82E50BE8(unsigned int, int, int, int, int);
static void *Alloc(unsigned int n) { return fn_82E50BE8(n, 0, 0, 0, 0); }

Arr *fn_82E772F0(Arr *param_1, unsigned short param_2, int *param_3)
{
    int hr;
    unsigned short i;
    char *e;
    param_1->count = param_2;
    param_1->data = 0;
    hr = 0;
    param_1->data = (char *)Alloc(param_1->count * 0x1a);
    if (param_1->data == 0) {
        param_1->count = 0;
        hr = 0x8007000e;
    }
    for (i = 0; i < param_1->count; i++) {
        e = param_1->data + i * 0x1a;
        *(int *)(e + 0x12) = 0;
        *(int *)(e + 0x16) = 0;
    }
    if (param_3 != 0) {
        *param_3 = hr;
    }
    return param_1;
}
