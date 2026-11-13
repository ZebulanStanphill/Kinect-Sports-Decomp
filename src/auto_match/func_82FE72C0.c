typedef struct Message_82FE72C0 {
    int kind;
    int a;
    int b;
    int pad;
    int v[5];
} Message_82FE72C0;

extern void *lbl_832642F0;
extern int fn_82FFA6E8(void *queue, Message_82FE72C0 m);

void fn_82FE72C0(int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8)
{
    Message_82FE72C0 m;
    m.kind = p3;
    m.v[0] = p1;
    m.v[1] = p6;
    m.a = p4;
    m.v[2] = p7;
    m.v[3] = p8;
    m.b = p5;
    m.pad = p2;
    fn_82FFA6E8(lbl_832642F0, m);
}
