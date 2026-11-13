typedef struct Info_82D5F6A8 {
    void *f0[6];
    int f18[5];
    void *callback;         /* 0x2c */
    unsigned char b30[3];
} Info_82D5F6A8;

extern void fn_82D74440(Info_82D5F6A8 *info);
extern void fn_82D5F458(void);
extern void fn_82D59328(void *self, Info_82D5F6A8 *info, int a, int b);

void fn_82D5F6A8(void *self)
{
    Info_82D5F6A8 info;

    info.b30[0] = 0;
    info.b30[1] = 0;
    info.b30[2] = 0;
    info.f18[0] = 0;
    info.f18[1] = 0;
    info.f18[2] = 0;
    info.f18[3] = 0;
    info.f18[4] = 0;
    fn_82D74440(&info);
    info.callback = (void *)fn_82D5F458;
    fn_82D59328(self, &info, 0x12, 7);
}
