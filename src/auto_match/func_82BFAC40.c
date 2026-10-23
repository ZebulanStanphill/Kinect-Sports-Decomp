typedef int (*Fn)(void *arg);

typedef struct {
    Fn fn;
    void *arg;
} Thunk;

extern void (*lbl_831751CC)(void *p);

int fn_82BFAC40(Thunk *t)
{
    int r;

    r = t->fn(t->arg);
    lbl_831751CC(t);
    return r;
}
