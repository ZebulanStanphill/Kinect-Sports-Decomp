typedef __declspec(passinreg) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;

extern void fn_82312830(int p);
extern void fn_8236A6E8(int p, int n, __vector4 a, __vector4 b);
extern void fn_825275B0(int p);

void fn_82312AB8(int param_1)
{
    int iVar1;
    int t;

    iVar1 = *(int *)(param_1 + 0x10);
    if ((*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x28) == *(unsigned int *)(iVar1 + 0xde4)) &&
        (*(int *)(*(int *)(param_1 + 0xc) + 0x2c) == *(int *)(iVar1 + 0xde0))) {
        if (*(int *)(iVar1 + 0x42c) != 2) {
            fn_825275B0(*(int *)(iVar1 + 0xe10));
        }
        *(int *)(iVar1 + 0x42c) = 2;
        *(int *)(*(int *)(param_1 + 0xc) + 0x240) = 1;
        if (*(int *)(param_1 + 0x110) == 0) {
            t = *(int *)(param_1 + 0x10);
            fn_8236A6E8(t, 4, *(__vector4 *)(*(int *)(t + 0xe10) + 0x50), *(__vector4 *)(*(int *)(t + 0xe10) + 0xbd0));
            *(int *)(*(int *)(param_1 + 0xc) + 0x25c) = 1;
            fn_82312830(param_1);
        }
    }
}
