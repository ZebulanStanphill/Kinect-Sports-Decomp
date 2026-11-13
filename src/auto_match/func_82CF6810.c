typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
typedef struct { __vector4 a; __vector4 b; __vector4 c; } Box_82CF6810;
typedef struct {
    Box_82CF6810 box;
    char f30;
    char empty;
    char pad32[0xf0 - 0x32];
} Info_82CF6810;
typedef struct { unsigned char ok; } Res_82CF6810;

extern void fn_82D007A0(void *src, Info_82CF6810 *info);

Res_82CF6810 *fn_82CF6810(Res_82CF6810 *ret, Box_82CF6810 *out, void *src)
{
    Info_82CF6810 info;
    fn_82D007A0(src, &info);
    out->a = info.box.a;
    ret->ok = info.empty == 0;
    out->b = info.box.b;
    out->c = info.box.c;
    return ret;
}
