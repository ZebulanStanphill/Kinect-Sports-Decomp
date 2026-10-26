typedef int (*Fn828867D8)(int);
extern Fn828867D8 *lbl_83212A18;

int fn_828867D8(int i)
{
    Fn828867D8 f = lbl_83212A18[i];
    if (f != 0) {
        return f(0);
    }
    return 0;
}
