extern int atexit(void (*f)(void));
extern void fn_83141E30(void);
extern unsigned int lbl_83265068;
extern int lbl_83265064;

int *fn_83057138(void)
{
    if ((lbl_83265068 & 1) == 0) {
        lbl_83265068 |= 1;
        lbl_83265064 = 0;
        atexit(fn_83141E30);
    }
    return &lbl_83265064;
}
