typedef struct Parser_8271E440 {
    char pad0[0x18];
    int ctx;                  /* 0x18 */
} Parser_8271E440;

extern int fn_82695370(int value, int ctx);
extern int fn_826957D0(Parser_8271E440 *p, int index);
extern double fn_826972E0(int value, int ctx);
extern void *fn_826A7398(int ctx);
extern void fn_826FD490(void *target, int object, int count);

void fn_8271E440(Parser_8271E440 *p)
{
    void *target = fn_826A7398(p->ctx);
    int count = (int)fn_826972E0(fn_826957D0(p, 1), p->ctx);

    fn_826FD490(target, fn_82695370(fn_826957D0(p, 0), p->ctx), count);
}
