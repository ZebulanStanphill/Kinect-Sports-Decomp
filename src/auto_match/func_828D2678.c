extern int fn_828A1B60(int a);
extern void fn_828D2110(int a, int b, int c, void *d, int e, int f, int g, unsigned char h, int i, void *j);

void fn_828D2678(char *param_1)
{
    int a = *(int *)(param_1 + 0x6c);
    int b = *(int *)(param_1 + 0x18);
    void *j = param_1 + 0xb8;
    int i = *(int *)(param_1 + 0xb4);
    unsigned char h = *(unsigned char *)(param_1 + 0xb0);
    int g = *(int *)(param_1 + 0xac);
    int f = *(int *)(param_1 + 0xa8);
    fn_828D2110(a, b, *(int *)(param_1 + 0x80), param_1 + 0x84, fn_828A1B60(a), f, g, h, i, j);
}
