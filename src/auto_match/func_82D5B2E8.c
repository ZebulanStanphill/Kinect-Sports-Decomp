extern void fn_82D69958(void *a, unsigned char *b, short c);

void fn_82D5B2E8(void *a, unsigned char *b, short c)
{
    if (b[0xb] & 0x20)
        fn_82D69958(a, b, c);
}
