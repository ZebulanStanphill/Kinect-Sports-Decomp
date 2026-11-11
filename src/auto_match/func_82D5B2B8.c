extern void fn_82D698D0(void *a, unsigned char *b, short c);

void fn_82D5B2B8(void *a, unsigned char *b, short c)
{
    if (b[0xb] & 0x20)
        fn_82D698D0(a, b, c);
}
