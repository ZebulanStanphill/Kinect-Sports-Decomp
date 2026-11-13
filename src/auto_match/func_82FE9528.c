typedef struct Message_82FE9528 {
    int kind;
    int a;
    int b;
    int pad;
    int v[5];
} Message_82FE9528;

extern void *lbl_832642F0;
extern int fn_82FE90B0(void *p);
extern int fn_82FFA6E8(void *queue, Message_82FE9528 m);

void fn_82FE9528(void *p, int a, int b)
{
    Message_82FE9528 m;
    m.kind = 1;
    m.v[0] = fn_82FE90B0(p);
    m.v[1] = -1;
    m.a = a;
    m.v[2] = 0;
    m.v[3] = 0;
    m.pad = 0;
    m.b = b;
    fn_82FFA6E8(lbl_832642F0, m);
}
