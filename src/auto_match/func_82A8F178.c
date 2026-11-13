extern void *memset(void *dst, int value, unsigned int size);

typedef struct Counts_82A8F178 {
    int pad[10];
    int a;   /* 0x28 */
    int b;   /* 0x2c */
    int c;   /* 0x30 */
} Counts_82A8F178;

typedef struct Info_82A8F178 {
    int scale;
    Counts_82A8F178 first;    /* 0x4 */
    Counts_82A8F178 second;   /* 0x38 */
} Info_82A8F178;

extern unsigned char fn_82A8EBF8(void *self, void *arg, Info_82A8F178 *info);

int fn_82A8F178(void *self, void *arg)
{
    Info_82A8F178 info;
    memset(&info.first, 0, sizeof(info.first));
    memset(&info.second, 0, sizeof(info.second));
    if (fn_82A8EBF8(self, arg, &info) != 0)
        return ((info.second.c + info.second.b + info.second.a + info.first.c + info.first.b + info.first.a)
                * info.scale + 0x14b) >> 3;
    return 0;
}
