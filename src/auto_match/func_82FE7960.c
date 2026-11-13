typedef struct Message_82FE7960 {
    int kind;
    int a;
    int b;
    int pad;
    int v[5];
} Message_82FE7960;

extern void *lbl_832642F0;
extern int fn_82FFA6E8(void *queue, Message_82FE7960 m);

void fn_82FE7960(int p, int a, int b)
{
    Message_82FE7960 m;
    m.kind = 1; m.v[0] = p; m.v[1] = -1; m.a = a; m.v[2] = 0; m.v[3] = 0; m.pad = 0; m.b = b;
    fn_82FFA6E8(lbl_832642F0, m);
}
