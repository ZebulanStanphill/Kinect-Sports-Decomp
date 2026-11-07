typedef struct Info_82701CA0 {
    void *data;
    int index;
    float f0;
    float f1;
    float f2;
    float f3;
    unsigned short s;
    unsigned char b0;
    unsigned char b1;
    unsigned char b2;
} Info_82701CA0;

extern void fn_8267C498(void *p);
extern void fn_826FE548(void *obj, Info_82701CA0 *info);
extern void fn_82701088(void *obj, int a, int b, unsigned char *flags, Info_82701CA0 *info);

void fn_82701CA0(void *param_1)
{
    unsigned char flags;
    Info_82701CA0 info;

    info.data = 0;
    info.index = -1;
    info.f0 = 0.0f;
    info.f1 = 0.0f;
    info.f2 = 0.0f;
    info.f3 = 0.0f;
    info.s = 0;
    info.b0 = 0;
    info.b1 = 0;
    info.b2 = 0;
    flags = 0x80;
    fn_82701088(param_1, 9, 5, &flags, &info);
    fn_826FE548(param_1, &info);
    if (info.data != 0) {
        fn_8267C498(info.data);
    }
}
