typedef struct G_82A1F478 { char pad[0x1b0]; int f1B0; } G_82A1F478;
extern G_82A1F478 lbl_832195A0;
extern G_82A1F478 *lbl_83219598;
extern int fn_82A35940(G_82A1F478 *g, void *p);
int fn_82A1F478(void *p)
{
    G_82A1F478 *g = &lbl_832195A0;
    int hr;
    if (g->f1B0 != 0) {
        return 0x80004005;
    }
    hr = fn_82A35940(g, p);
    if (hr < 0) {
        if (hr == (int)0xc0000017) {
            return 0x8007000e;
        }
        return 0x80004005;
    }
    lbl_83219598 = g;
    return 0;
}
