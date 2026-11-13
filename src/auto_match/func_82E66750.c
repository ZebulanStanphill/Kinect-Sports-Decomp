extern long _InterlockedDecrement(long *);
extern void fn_82E66318(void *);
extern void fn_82A1E810(void *);
extern void fn_82E663D0(void *);
typedef struct Obj_82E66750 {
    char pad[0x214];
    long refs;
    char pad218[0xc];
    void *handle;
    char list[4];
} Obj_82E66750;
int fn_82E66750(Obj_82E66750 *p)
{
    if (_InterlockedDecrement(&p->refs) == 0) {
        fn_82E66318(&p->list);
        if (p->handle != 0)
            fn_82A1E810(p->handle);
        fn_82E663D0(&p->list);
    }
    return 0;
}
