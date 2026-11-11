extern unsigned int lbl_831BB1C0;
extern int lbl_83263354[];
extern void abort(void);

void fn_82F63AD8(int value)
{
    if (lbl_831BB1C0 == 0) {
        abort();
        return;
    }
    lbl_831BB1C0--;
    lbl_83263354[lbl_831BB1C0] = value;
}
