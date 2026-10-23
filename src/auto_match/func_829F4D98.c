extern void fn_829F5370(void *p);
extern void fn_829F5DE8(void *p);
extern void fn_829F6400(void *p);
extern void *lbl_83218C30;
extern int lbl_83218C34;

void fn_829F4D98(void)
{
    if (lbl_83218C30 != 0) {
        void *p;
        fn_829F5DE8(lbl_83218C30);
        p = lbl_83218C30;
        if (p != 0) {
            fn_829F6400(p);
            fn_829F5370(p);
        }
        lbl_83218C30 = 0;
    }
    lbl_83218C34 = 0;
}
