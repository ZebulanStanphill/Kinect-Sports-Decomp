extern unsigned int lbl_831BCA64;
extern char lbl_832650B8[];
extern int KeTlsGetValue(unsigned int);
extern void fn_8306BD18(int, int, int);
void fn_8306BE58(int a, int b) {
    int p = KeTlsGetValue(lbl_831BCA64);
    if (p != 0) {
        fn_8306BD18(a, b, p);
    } else {
        fn_8306BD18(a, b, (int)lbl_832650B8);
    }
}
