typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vor(__vector4 a, __vector4 b);

typedef struct Data_829E1288 {
    __vector4 head;
    char a[700];
    char b[700];
    char c;
    char pad589[3];
    int d;
} Data_829E1288;

extern char *fn_829E0C20(void *a, unsigned short b);
extern void fn_82A1DDC0(void *dst, const void *src, unsigned int n);

int fn_829E1288(Data_829E1288 *dst, void *a, unsigned short b)
{
    char *p;
    if (b == 0)
        return 0x80004005;
    p = fn_829E0C20(a, b);
    if (p == 0)
        return 0x80004005;
    dst->head = __vor(__lvlx(p + 8, 0), __lvrx(p + 8, 16));
    fn_82A1DDC0(dst->a, p + 0x18, 700);
    fn_82A1DDC0(dst->b, p + 0x2d4, 700);
    fn_82A1DDC0(&dst->c, p + 0x590, 1);
    fn_82A1DDC0(&dst->d, p + 0x594, 4);
    return 0;
}
