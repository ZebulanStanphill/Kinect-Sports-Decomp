typedef void (*Func_82D68118)(void);
typedef struct {
    Func_82D68118 f[12];
    unsigned char flag;
    unsigned char b31;
    unsigned char b32;
    unsigned char pad[0xd];
} Desc_82D68118;

extern int fn_82D59328(void *self, Desc_82D68118 *desc, int a, int b);
extern void fn_82D67E30(void);
extern void fn_82D67EF0(void);
extern void fn_82D67E70(void);
extern void fn_82D67D58(void);
extern void fn_82D67DE0(void);
extern void fn_82D67E28(void);
extern void fn_82D67EF8(void);

void fn_82D68118(void *self)
{
    Desc_82D68118 d;

    d.b31 = 0;
    d.b32 = 0;
    d.f[7] = 0;
    d.f[8] = 0;
    d.f[9] = 0;
    d.f[0] = fn_82D67E30;
    d.f[11] = fn_82D67EF8;
    d.f[10] = 0;
    d.f[2] = fn_82D67E70;
    d.f[3] = fn_82D67D58;
    d.f[4] = fn_82D67DE0;
    d.f[5] = fn_82D67E28;
    d.f[6] = 0;
    d.f[1] = fn_82D67EF0;
    d.flag = 0;
    fn_82D59328(self, &d, 4, 4);
}
