typedef struct Info {
    unsigned int flags;
    __int64 size;
} Info;
extern int fn_829C7D00(void *buf);
extern int fn_82F5D668(int a, int *p, void *buf, unsigned int *out, int *size, unsigned int *flags);

unsigned int *fn_82F5D8C0(unsigned int *out, int a, int *p)
{
    out[0] = 0; out[1] = 0; out[2] = 0; out[3] = 0;
    if (p != 0 && *p == 2) {
        Info info = {0};
        unsigned char buf[16];
        if (fn_829C7D00(buf) >= 0) {
            fn_82F5D668(a, p, buf, out, (int *)&info.size, &info.flags);
        }
    }
    return out;
}
