extern void fn_82A1E1F8(unsigned __int64 *data);

void fn_829DA568(unsigned int value)
{
    unsigned __int64 data[3];
    int i;

    for (i = 0; i < 3; i++)
        data[i] = 0;
    data[0] = 5;
    data[1] = 0x2dff;
    *(unsigned int *)&data[2] = value;
    fn_82A1E1F8(data);
}
