extern unsigned int lbl_8320A764;
extern int lbl_8320A754, lbl_8320A758;
extern void *fn_82823450(unsigned int size);
void *fn_82822880(unsigned int size, int a, int b) {
    lbl_8320A754 = a;
    lbl_8320A758 = b;
    ++lbl_8320A764;
    return fn_82823450(size);
}
