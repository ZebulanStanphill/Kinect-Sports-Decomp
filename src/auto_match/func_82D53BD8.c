typedef void (*Func_82D53BD8)(void);
typedef struct {
    Func_82D53BD8 f[12];
    unsigned char flag;
    unsigned char b31;
    unsigned char b32;
    unsigned char pad[0xd];
} Desc_82D53BD8;

extern int fn_82D59328(void *self, Desc_82D53BD8 *desc, int a, int b);
extern void fn_82D743F0(void);
extern void fn_82D741B8(void);
extern void fn_82D534D8(void);
extern void fn_82D53540(void);
extern void fn_82D535A0(void);
extern void fn_82D535B0(void);
extern void fn_82D539F8(void);

void fn_82D53BD8(void *self)
{
    Desc_82D53BD8 d;

    d.f[0] = fn_82D743F0;
    d.f[11] = fn_82D539F8;
    d.b31 = 0;
    d.b32 = 0;
    d.f[10] = 0;
    d.f[2] = 0;
    d.f[3] = 0;
    d.f[4] = 0;
    d.f[5] = 0;
    d.f[6] = fn_82D534D8;
    d.f[7] = fn_82D53540;
    d.f[8] = fn_82D535A0;
    d.f[9] = fn_82D535B0;
    d.f[1] = fn_82D741B8;
    d.flag = 1;
    fn_82D59328(self, &d, -1, 8);
}
