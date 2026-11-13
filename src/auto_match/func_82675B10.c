extern void fn_8268D6E0(int a, int b, int c, int d, int e, int f, int g, int h, int mode);

void fn_82675B10(int a, int b, int c, int d, int e, int f, int g, int h, int mode)
{
    switch (mode) {
    case 1:
        fn_8268D6E0(a, b, c, d, e, f, g, h, 3);
        break;
    case 3:
        fn_8268D6E0(a, b, c, d, e, f, g, h, 2);
        break;
    case 4:
        fn_8268D6E0(a, b, c, d, e, f, g, h, 1);
        break;
    }
}
