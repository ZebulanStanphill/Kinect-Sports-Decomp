/* Returns a function-local static container, constructed on first use with
   the compiler's guard bit lbl_83212A48; fn_83140820 destroys it at exit.
   The constructor fn_828A2240 receives the addresses of the empty comparator
   and allocator temporaries. */
extern int atexit(void (*function)(void));
extern void fn_83140820(void);
extern void *fn_828A2240(void *self, void *compare, void *allocator);
extern unsigned int lbl_83212A48;
extern char lbl_83212A38[];

void *fn_82887BE8(void)
{
    char empty[8];

    if ((lbl_83212A48 & 1) == 0) {
        lbl_83212A48 |= 1;
        fn_828A2240(lbl_83212A38, empty, empty);
        atexit(fn_83140820);
    }
    return lbl_83212A38;
}
