extern void *lbl_83296E18[6];
extern void fn_82BFE3B0(void *p);

void fn_8313F6D8(void)
{
    void **p = &lbl_83296E18[6];
    int i;
    for (i = 5; i >= 0; i--) {
        --p;
        if (*p) {
            fn_82BFE3B0(*p);
            *p = 0;
        }
    }
}
