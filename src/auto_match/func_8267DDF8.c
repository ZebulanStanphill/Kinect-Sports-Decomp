extern void *lbl_831E7E64;
/* The original singleton pointer is volatile: fn_8267DE70 reloads it right
   after testing it with nothing in between, which only volatile produces. */
extern void * volatile lbl_831E7E6C;
extern void *fn_8267B890(void *heap, unsigned int size, int flags);
extern void *fn_8267D670(void *mem);
extern void fn_8267DCB8(void *inst, void *arg);

void fn_8267DDF8(void *arg)
{
    if (lbl_831E7E6C == 0) {
        void *mem = fn_8267B890(lbl_831E7E64, 0x20, 0);
        lbl_831E7E6C = mem ? fn_8267D670(mem) : 0;
    }
    fn_8267DCB8(lbl_831E7E6C, arg);
}
