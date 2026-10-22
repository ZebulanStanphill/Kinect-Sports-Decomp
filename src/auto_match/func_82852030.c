extern void fn_82838B88(char *buf, int a, int b, unsigned short c, unsigned short d);

void fn_82852030(int param_1, int param_2, int param_3)
{
    char buf[512];

    fn_82838B88(buf, *(int *)(param_2 + 0x14) + param_3, param_1 + 0xa4,
                *(unsigned short *)(param_2 + 0x1a), *(unsigned short *)(param_2 + 0x1c));
}
