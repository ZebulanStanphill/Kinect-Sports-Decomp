extern void fn_822315A0(unsigned int p);
extern unsigned char fn_8223AAC0(unsigned int p);

void fn_822C9FD8(unsigned int *param_1, unsigned int param_2, unsigned int param_3)
{
    if (param_3 != 0 && fn_8223AAC0(param_3) != 0) {
        if (param_1[1] != 0) {
            fn_822315A0(param_1[1]);
        }
        param_1[1] = param_3;
        param_1[0] = param_2;
    }
}
