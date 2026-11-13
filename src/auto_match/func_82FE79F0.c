typedef struct Message_82FE79F0 {
    int kind;
    int a;
    int b;
    int pad;
    int v[5];
} Message_82FE79F0;

extern void *lbl_832642F0;
extern int fn_82FFA6E8(void *queue, Message_82FE79F0 m);

void fn_82FE79F0(void *p, int a, int b, int c, int d)
{
    Message_82FE79F0 m;
    m.a = b;
    m.pad = 0;
    m.v[0] = a;
    m.b = c;
    m.kind = p == 0 ? 6 : 7;
    m.v[1] = d;
    fn_82FFA6E8(lbl_832642F0, m);
}
