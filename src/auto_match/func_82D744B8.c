typedef void (*Func_82D744B8)(void);
typedef struct {
    Func_82D744B8 f[12];
    unsigned char flag;
    unsigned char b31;
    unsigned char b32;
    unsigned char pad[0xd];
} Desc_82D744B8;

extern int fn_82D59328(void *self, Desc_82D744B8 *desc, int a, int b);
extern void fn_82D743F0(void);
extern void fn_82D741B8(void);
extern void fn_82D74248(void);
extern void fn_82D741C8(void);
extern void fn_82D74228(void);
extern void fn_82D74238(void);
extern void fn_82D742B0(void);

void fn_82D744B8(void *self)
{
    Desc_82D744B8 d;

    d.f[0] = fn_82D743F0;
    d.f[11] = fn_82D742B0;
    d.b31 = 0;
    d.b32 = 0;
    d.f[10] = 0;
    d.f[2] = 0;
    d.f[3] = 0;
    d.f[4] = 0;
    d.f[5] = 0;
    d.f[6] = fn_82D74248;
    d.f[7] = fn_82D741C8;
    d.f[8] = fn_82D74228;
    d.f[9] = fn_82D74238;
    d.f[1] = fn_82D741B8;
    d.flag = 1;
    fn_82D59328(self, &d, -1, 9);
}
