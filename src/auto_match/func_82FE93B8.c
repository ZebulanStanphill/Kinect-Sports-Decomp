typedef struct Message_82FE93B8 {
    int kind;
    int a;
    int b;
    int pad;
    int v[5];
} Message_82FE93B8;

extern void *lbl_832642F0;
extern int fn_82FE90B0(void *p);
extern int fn_82FFA6E8(void *queue, Message_82FE93B8 m);

void fn_82FE93B8(void *p, int a, int b, int c, int *out)
{
    Message_82FE93B8 m;
    int id = fn_82FE90B0(p);
    *out = id;
    m.v[1] = c;
    m.v[2] = 0;
    m.v[3] = 0;
    m.kind = 0;
    m.pad = 0;
    m.v[0] = id;
    m.a = a;
    m.b = b;
    fn_82FFA6E8(lbl_832642F0, m);
}
