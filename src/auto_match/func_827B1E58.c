extern void fn_827B19D8(void *stream, unsigned char *byte);

int fn_827B1E58(void **writer, int value)
{
    unsigned char b;

    if (value < -0x800 || value > 0x7ff) {
        b = (unsigned char)(value << 4) | 3;
        fn_827B19D8(*writer, &b);
        b = (unsigned char)(value >> 4);
        fn_827B19D8(*writer, &b);
        b = (unsigned char)(value >> 12);
        fn_827B19D8(*writer, &b);
        return 3;
    }
    b = (unsigned char)(value << 4) | 2;
    fn_827B19D8(*writer, &b);
    b = (unsigned char)(value >> 4);
    fn_827B19D8(*writer, &b);
    return 2;
}
