extern void fn_82E1F5E0(unsigned char *o);

void fn_82E1F670(unsigned char *o)
{
    if (o[9] != 0) {
        o[0x5d] = 1;
        fn_82E1F5E0(o);
    }
}
