/* Returns a function-local static object, constructed on first use with the
   compiler's guard bit lbl_83213E90; fn_831408D8 destroys it at exit. The
   container at its start is built by fn_828889C0 from the addresses of the
   empty comparator and allocator temporaries; the word after it starts at 0. */
typedef struct Static_82889A28 {
    char container[0x10];
    int value;
} Static_82889A28;

extern int atexit(void (*function)(void));
extern void fn_831408D8(void);
extern void *fn_828889C0(void *self, void *compare, void *allocator);
extern unsigned int lbl_83213E90;
extern Static_82889A28 lbl_83213E7C;

Static_82889A28 *fn_82889A28(void)
{
    char empty[8];

    if ((lbl_83213E90 & 1) == 0) {
        lbl_83213E90 |= 1;
        fn_828889C0(&lbl_83213E7C, empty, empty);
        lbl_83213E7C.value = 0;
        atexit(fn_831408D8);
    }
    return &lbl_83213E7C;
}
