typedef struct Message_82FE96D0 {
    int kind;
    int a;
    int b;
    int pad;
    int v[5];
} Message_82FE96D0;

extern void *lbl_832642F0;
extern int fn_82FE90B0(void *p);
extern int fn_82FFA6E8(void *queue, Message_82FE96D0 m);

void fn_82FE96D0(void *q, void *p, int a, int b, int c)
{
    Message_82FE96D0 m;
    m.kind = q == 0 ? 6 : 7;
    m.a = a;
    m.b = b;
    m.pad = 0;
    m.v[0] = fn_82FE90B0(p);
    m.v[1] = c;
    fn_82FFA6E8(lbl_832642F0, m);
}
