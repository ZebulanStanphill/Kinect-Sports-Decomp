extern unsigned int lbl_8320A764;
extern int lbl_8320A754, lbl_8320A758;
extern void *fn_82823470(unsigned int size, void *a, void *b);
void *fn_828228A8(unsigned int size, void *a, void *b, int c, int d) {
    lbl_8320A754 = c;
    lbl_8320A758 = d;
    ++lbl_8320A764;
    return fn_82823470(size, a, b);
}
