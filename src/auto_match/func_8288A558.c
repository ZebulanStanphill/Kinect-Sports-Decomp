extern int atexit(void (*f)(void));
extern void fn_83140930(void);
extern char lbl_821B9BC8[];
extern void *lbl_83213EC4;
extern unsigned int lbl_83213EC8;

void **fn_8288A558(void)
{
    if ((lbl_83213EC8 & 1) == 0) {
        lbl_83213EC8 |= 1;
        lbl_83213EC4 = lbl_821B9BC8;
        atexit(fn_83140930);
    }
    return &lbl_83213EC4;
}
