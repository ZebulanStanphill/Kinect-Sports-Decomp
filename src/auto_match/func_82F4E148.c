typedef struct {
    char pad[0x30];
    int state;
    char pad2[0x1c0 - 0x34];
} Elem;
typedef struct {
    char pad[0xaf0];
    Elem e[6];
    char pad2[0x2db0 - 0xaf0 - 6 * 0x1c0];
    int flag;
    int handle;
} G;
extern G *lbl_8326183C;
extern void fn_82F59160(int h);
extern void fn_82F59198(int h);

static void stop(G *g)
{
    g->flag = 0;
    fn_82F59198(g->handle);
}

void fn_82F4E148(void)
{
    int i;
    Elem *e = lbl_8326183C->e;
    for (i = 0; i < 6; i++) {
        if (lbl_8326183C->flag != 1)
            break;
        if (e[i].state == 2) {
            stop(lbl_8326183C);
        }
    }
    fn_82F59160(lbl_8326183C->handle);
}
