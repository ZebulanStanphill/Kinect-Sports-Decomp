typedef struct Message_82FE94A0 {
    int kind;
    int a;
    int b;
    int pad;
    int v[5];
} Message_82FE94A0;

extern void *lbl_832642F0;
extern int fn_82FE8FA0(void *p);
extern int fn_82FFA6E8(void *queue, Message_82FE94A0 m);

void fn_82FE94A0(void *p, int a, int b)
{
    Message_82FE94A0 m;
    m.kind = 1;
    m.v[0] = fn_82FE8FA0(p);
    m.v[1] = -1;
    m.a = a;
    m.v[2] = 0;
    m.v[3] = 0;
    m.pad = 0;
    m.b = b;
    fn_82FFA6E8(lbl_832642F0, m);
}
