typedef void (*Func_82D62508)(void);
typedef struct {
    Func_82D62508 f[12];
    unsigned char flag;
    unsigned char b31;
    unsigned char b32;
    unsigned char pad[0xd];
} Desc_82D62508;

extern int fn_82D59328(void *self, Desc_82D62508 *desc, int a, int b);
extern void fn_82D61F30(void);
extern void fn_82D62008(void);
extern void fn_82D61FA0(void);
extern void fn_82D61EB0(void);
extern void fn_82D61EF0(void);
extern void fn_82D61F28(void);
extern void fn_82D62010(void);
extern void fn_82D62140(void);

void fn_82D62508(void *self)
{
    Desc_82D62508 d;

    d.b31 = 0;
    d.b32 = 0;
    d.f[7] = 0;
    d.f[8] = 0;
    d.f[9] = 0;
    d.f[0] = fn_82D61F30;
    d.f[11] = fn_82D62140;
    d.f[10] = fn_82D62010;
    d.f[2] = fn_82D61FA0;
    d.f[3] = fn_82D61EB0;
    d.f[4] = fn_82D61EF0;
    d.f[5] = fn_82D61F28;
    d.f[6] = 0;
    d.f[1] = fn_82D62008;
    d.flag = 0;
    fn_82D59328(self, &d, 5, 3);
}
