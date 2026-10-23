extern void fn_82BE5758(void);
extern void fn_82BE57C0(void);
extern void (*lbl_831751CC)(void *p);

typedef struct {
    int (*func)(void *arg);
    void *arg;
} Thunk;

int fn_82BEE060(Thunk *t)
{
    int r;

    fn_82BE5758();
    r = t->func(t->arg);
    lbl_831751CC(t);
    fn_82BE57C0();
    return r;
}
