/* Returns a function-local static object, constructed on first use with the
   compiler's guard bit lbl_83214044; fn_831411E8 destroys it at exit. The
   object starts with its vtable lbl_82024E1C and two zero words, followed by
   a container that fn_8288C2E0 builds from an empty allocator temporary. */
typedef struct Static_828B2BF8 {
    void *vtable;
    int field04;
    int field08;
    char container[0xc];
} Static_828B2BF8;

extern int atexit(void (*function)(void));
extern void fn_831411E8(void);
extern void *fn_8288C2E0(void *self, void *allocator);
extern unsigned int lbl_83214044;
extern char lbl_82024E1C[];
extern Static_828B2BF8 lbl_8321402C;

Static_828B2BF8 *fn_828B2BF8(void)
{
    char empty[8];

    if ((lbl_83214044 & 1) == 0) {
        lbl_83214044 |= 1;
        lbl_8321402C.vtable = lbl_82024E1C;
        lbl_8321402C.field04 = 0;
        lbl_8321402C.field08 = 0;
        fn_8288C2E0(lbl_8321402C.container, empty);
        atexit(fn_831411E8);
    }
    return &lbl_8321402C;
}
