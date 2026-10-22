extern int fn_827DC858();
extern int fn_82811400();
extern int memcpy();

int fn_827DC918(int param_1, unsigned int *param_2)
{
    unsigned char buf[0x1c];

    fn_82811400(buf + 4, 0x10);
    *(unsigned int *)buf = *param_2;
    memcpy(buf + 4, param_2 + 1, 0x18);
    fn_827DC858(param_1, buf);
    return param_1;
}
