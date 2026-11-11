extern void fn_82D69910(void *a, unsigned char *b, unsigned short c);

void fn_82D5B2D0(void *a, unsigned char *b, unsigned short c)
{
    if (b[0xb] & 0x20)
        fn_82D69910(a, b, c);
}
