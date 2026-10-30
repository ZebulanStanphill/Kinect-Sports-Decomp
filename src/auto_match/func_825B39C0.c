typedef struct { void *ptr; void *rep; } SP;
typedef void (*Fn)(SP *sp, void *arg);
extern void fn_822315A0(void *rep);
extern void fn_82517978(SP *dst, void *ptr, void *rep, int t);

void fn_825B39C0(char *self, SP *src, void *arg)
{
    if (*(Fn *)(self + 0xc) != 0) {
        SP sp;
        sp.ptr = 0;
        sp.rep = 0;
        fn_82517978(&sp, src->ptr, src->rep, 0);
        (*(Fn *)(self + 0xc))(&sp, arg);
    }
    if (src->rep != 0) {
        fn_822315A0(src->rep);
    }
}
