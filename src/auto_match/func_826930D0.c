typedef struct Pair_826930D0 {
    int a;
    int b;
} Pair_826930D0;

typedef struct Pool_826930D0 {
    int count;
    Pair_826930D0 items[0x1000];
} Pool_826930D0;

extern Pool_826930D0 lbl_831E9298;
extern Pool_826930D0 *lbl_831F129C;

void fn_826930D0(void)
{
    int i;

    lbl_831E9298.count = 0;
    for (i = 0; i < 0x1000; i++) {
        lbl_831E9298.items[i].a = 0;
        lbl_831E9298.items[i].b = 0;
    }
    lbl_831F129C = &lbl_831E9298;
}
