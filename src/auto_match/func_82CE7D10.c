extern void fn_82CE3E48(void *p);
extern void fn_82CE3EE0(int a);
extern void fn_82CE5400(int a);
extern void *fn_82CE5420(void);
extern void fn_82CE7C00(void);
extern void fn_82CF9B00(void *p);
extern void *KeTlsGetValue(unsigned int index);
extern void (*lbl_8317F610)(void);
extern unsigned char lbl_8323B21C;
extern void *lbl_8323B464;
extern unsigned int lbl_8323B4A0;
extern void *lbl_8323B4A4;
extern unsigned char lbl_8323B4D8;

int fn_82CE7D10(void)
{
    void *v;

    if (lbl_8323B21C) {
        fn_82CE3EE0(0);
        fn_82CE7C00();
        if (lbl_8323B4D8) {
            if (lbl_8317F610) {
                lbl_8317F610();
                lbl_8323B4D8 = 0;
            }
        }
        if (lbl_8323B464)
            fn_82CE3E48(lbl_8323B464);
        lbl_8323B464 = 0;
        if (lbl_8323B4A4)
            fn_82CE3E48(lbl_8323B4A4);
        lbl_8323B4A4 = 0;
        v = KeTlsGetValue(lbl_8323B4A0);
        if (v)
            fn_82CF9B00(v);
        if (fn_82CE5420())
            fn_82CE5400(0);
        lbl_8323B21C = 0;
    }
    return 0;
}
