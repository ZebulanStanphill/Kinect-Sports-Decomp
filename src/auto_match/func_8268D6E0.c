extern void fn_8270A8F8(int a, int b, int c, int d, int e, int f, int g, int h, int mode);

void fn_8268D6E0(int a, int b, int c, int d, int e, int f, int g, int h, unsigned int mode)
{
    switch (mode) {
    case 0:
        fn_8270A8F8(a, b, c, d, e, f, g, h, 0);
        break;
    case 1:
        fn_8270A8F8(a, b, c, d, e, f, g, h, 1);
        break;
    case 2:
        fn_8270A8F8(a, b, c, d, e, f, g, h, 2);
        break;
    case 3:
        fn_8270A8F8(a, b, c, d, e, f, g, h, 3);
        break;
    }
}
