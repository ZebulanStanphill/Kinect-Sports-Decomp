extern void *lbl_83213F8C;
extern void *fn_828A1660(void);

void *fn_828A1D58(void)
{
    if (lbl_83213F8C != 0) {
        return lbl_83213F8C;
    }
    return fn_828A1660();
}
