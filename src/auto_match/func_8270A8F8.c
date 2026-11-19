typedef void (*Convert_8270A8F8)(void);

extern void fn_8270A258(void);
extern void fn_8270A380(void);
extern void fn_8270A468(void);
extern void fn_8270A558(void);
extern void fn_8270A638(int a, int b, int c, int d, int srcBytes, int e, int f, int g, int h, int dstBytes,
                        Convert_8270A8F8 convert);

void fn_8270A8F8(int a, int b, int c, int d, int e, int f, int g, int h, unsigned int mode)
{
    if (b > 0 && c > 0 && f > 0 && g > 0) {
        switch (mode) {
        case 0:
            fn_8270A638(a, b, c, d, 3, e, f, g, h, 3, fn_8270A380);
            break;
        case 1:
            fn_8270A638(a, b, c, d, 4, e, f, g, h, 4, fn_8270A258);
            break;
        case 2:
            fn_8270A638(a, b, c, d, 4, e, f, g, h, 3, fn_8270A468);
            break;
        case 3:
            fn_8270A638(a, b, c, d, 1, e, f, g, h, 1, fn_8270A558);
            break;
        }
    }
}
