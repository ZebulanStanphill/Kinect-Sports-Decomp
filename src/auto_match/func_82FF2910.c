extern int fn_82FF5DA8(void *table, int count, unsigned int key, void *context);
extern int fn_83030F20(void *table, int count, unsigned int key, void *context);
extern void fn_82FECC48(void);
extern int lbl_83264574[];
extern void *lbl_831BC768;
extern char lbl_831BC7D4[];
extern char lbl_831BC7B4[];

void fn_82FF2910(void)
{
    lbl_83264574[0] = 0;
    lbl_83264574[1] = 0;
    lbl_83264574[2] = 0;
    if (fn_82FF5DA8(lbl_831BC7D4, 0x40, 0xffffffff, lbl_831BC768) == 1
        && fn_83030F20(lbl_831BC7B4, 0x40, 0xffffffff, lbl_831BC768) == 1) {
        fn_82FECC48();
    }
}
