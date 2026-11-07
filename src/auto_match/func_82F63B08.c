extern unsigned int lbl_831BB1C0;
extern void (*lbl_83263354[])(void);

void fn_82F63B08(void)
{
    if (lbl_831BB1C0 < 10) {
        do {
            if (lbl_83263354[lbl_831BB1C0++] != 0) {
                (*lbl_83263354[lbl_831BB1C0 - 1])();
            }
        } while (lbl_831BB1C0 < 10);
    }
}
