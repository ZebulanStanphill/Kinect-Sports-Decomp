extern void *lbl_83262358[];
extern void fn_82F52EC0(void *p);

void fn_82F4EB68(void)
{
    int i;
    for (i = 0; i < 2; i++) {
        if (lbl_83262358[i] != 0) {
            fn_82F52EC0(lbl_83262358[i]);
        }
    }
}
