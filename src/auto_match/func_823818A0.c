typedef struct { union { char buf[16]; char *ptr; } u; unsigned int size; unsigned int res; } Str_823818A0;
typedef struct { char hdr[4]; char sb[140]; } Oss_823818A0;
typedef struct { char pad[0x48]; int f48; } Item_823818A0;
extern void *fn_8223CFC0();
extern void *fn_82240158();
extern void fn_822403C8();
extern unsigned int fn_822ACAD8();
extern void fn_82230300();
extern void fn_8223DCC8();

unsigned int fn_823818A0(int *param_1, int a, int b, int c)
{
    Str_823818A0 s;
    Oss_823818A0 o;
    const char *p;
    unsigned int r;
    fn_8223CFC0(&o, 2, 1);
    fn_82240158(fn_82240158(&o, a), b);
    fn_822403C8(&s, o.sb);
    p = s.res >= 0x10 ? s.u.ptr : s.u.buf;
    r = fn_822ACAD8(((Item_823818A0 *)((int *)*param_1)[param_1[4]])->f48, p, c);
    fn_82230300(&s, 1, 0);
    fn_8223DCC8(&o);
    return r;
}
