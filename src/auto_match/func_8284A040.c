extern void fn_82851A78(void);
extern void fn_82857C60(void *p);
extern void *fn_8284C3D0(void *self, unsigned int flags);
extern char lbl_83211280[];
extern void *lbl_832112EC;

/* /O1 /Og-: delete of the global object (scalar deleting dtor fn_8284C3D0) through two copies of the
   pointer. The unused 28-byte local reproduces the frame (0x90) and the result slot at 0x7c; the original
   probably had other inlined temporaries there. */
void fn_8284A040(void)
{
    fn_82851A78();
    fn_82857C60(lbl_83211280);
    {
        int pad[7];
        void *q = lbl_832112EC;
        void *p = q;
        p ? fn_8284C3D0(p, 1) : 0;
    }
    lbl_832112EC = 0;
}
