extern void *fn_822845D8(void *mem, void *name);
extern int fn_82520158(const char *s, void *out, int flags);
extern void *fn_8265C9E0(unsigned int size);
extern void *lbl_832764C4;

void *fn_82284738(void)
{
    if (lbl_832764C4 == 0) {
        unsigned char name[16];
        void *mem;
        fn_82520158("progress_buttons_menu", name, 0);
        mem = fn_8265C9E0(0x160);
        lbl_832764C4 = mem ? fn_822845D8(mem, name) : 0;
    }
    return lbl_832764C4;
}
