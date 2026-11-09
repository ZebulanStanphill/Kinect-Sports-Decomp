extern int lbl_83223534;
extern unsigned int fn_82BBFAD8(unsigned int *a, int b, int c);
extern unsigned int fn_82BBFA20(unsigned int *a, int b, int c);

unsigned int fn_82BBFCD0(unsigned int *a, int b, int c)
{
    if (lbl_83223534 != 0) {
        return fn_82BBFAD8(a, b, c);
    }
    return fn_82BBFA20(a, b, c);
}
