extern int (*lbl_83263610)(void);

int fn_82F800C8(void)
{
    int (*fp)(void) = lbl_83263610;
    if (fp != 0 && fp() != 0) {
        return 1;
    }
    return 0;
}
