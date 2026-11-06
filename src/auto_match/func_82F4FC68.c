typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
extern void fn_82F4F080(__vector4 *out, int a);
extern __vector4 *fn_82F538A0(__vector4 *v, void *p, int i);
extern __vector4 *fn_82F538B0(__vector4 *v, void *p, int i);
extern void fn_82F53900(void *p, int i);
extern void fn_82F53928(void *p, int i);
extern __vector4 fn_8306ED70(__vector4 a, __vector4 b);

void fn_82F4FC68(int param_1, void *param_2)
{
    __vector4 va;
    __vector4 vb;
    __vector4 s;
    int i;

    fn_82F4F080(&va, param_1);
    s = va;
    i = 0;
    do {
        fn_8306ED70(*fn_82F538A0(&va, param_2, i), s);
        fn_82F53900(param_2, i);
        fn_8306ED70(*fn_82F538B0(&vb, param_2, i), s);
        fn_82F53928(param_2, i);
        i = i + 1;
    } while (i < 0x19);
}
