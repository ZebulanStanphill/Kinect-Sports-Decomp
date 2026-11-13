typedef struct Src_827630A8 {
    char pad[0x24];
    unsigned char flags;      /* 0x24 */
} Src_827630A8;

typedef struct Dst_827630A8 {
    char pad[0x44];
    unsigned char flag;       /* 0x44 */
} Dst_827630A8;

typedef struct Iter_827630A8 {
    Src_827630A8 *src;        /* 0x00 */
    int pad[5];
    unsigned int cur;         /* 0x18 */
    unsigned int end;         /* 0x1c */
    float t;                  /* 0x20 */
} Iter_827630A8;

extern void fn_827842B8(Dst_827630A8 *dst);
extern void fn_82783F98(Dst_827630A8 *dst, float f);
extern void fn_8275EB28(Iter_827630A8 *it, Src_827630A8 *src);
extern void fn_82762BE0(Iter_827630A8 *it, Dst_827630A8 *dst);

void fn_827630A8(Src_827630A8 *src, Dst_827630A8 *dst, float f)
{
    Iter_827630A8 it;

    fn_827842B8(dst);
    fn_82783F98(dst, f);
    dst->flag = (src->flags >> 3) & 1;
    fn_8275EB28(&it, src);
    while (it.cur < it.end) {
        fn_82762BE0(&it, dst);
    }
}
