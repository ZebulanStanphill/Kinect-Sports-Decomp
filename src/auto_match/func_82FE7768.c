typedef struct Message_82FE7768 {
    int kind;
    int a;
    int b;
    int pad;
    int v[5];
} Message_82FE7768;

extern void *lbl_832642F0;
extern int fn_82FFA6E8(void *queue, Message_82FE7768 m);

void fn_82FE7768(int p, int a, int b, int c)
{
    Message_82FE7768 m;
    m.kind = 0;
    m.v[0] = p;
    m.v[1] = c;
    m.a = a;
    m.v[2] = 0;
    m.v[3] = 0;
    m.pad = 2;
    m.b = b;
    fn_82FFA6E8(lbl_832642F0, m);
}
