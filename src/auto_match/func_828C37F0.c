typedef struct SP_828C37F0 {
    void *ptr;
    void *ctrl;
} SP_828C37F0;

extern void fn_822315A0(void *ctrl);
extern void *fn_8265C9E0(unsigned int size);
extern SP_828C37F0 *fn_828BAB20(SP_828C37F0 *out, void *obj);
extern SP_828C37F0 *fn_828BCA78(void *owner, int key);
extern void *fn_828C23A8(void *mem, int a, int b);
extern void *fn_828C35A0(void *p);

static __forceinline void swap_828C37F0(void **a, void **b)
{
    void *t = *a;
    *a = *b;
    *b = t;
}

void fn_828C37F0(char *self, int unused, int a, int b)
{
    void *owner;
    void *mem;
    void *obj;
    SP_828C37F0 made;
    SP_828C37F0 tmp;
    SP_828C37F0 *src;
    SP_828C37F0 *dst;
    void *old;

    owner = fn_828C35A0(self + 0xe8);
    mem = fn_8265C9E0(0x24);
    obj = mem ? fn_828C23A8(mem, a, b) : 0;
    src = fn_828BAB20(&made, obj);
    dst = fn_828BCA78(owner, b);
    tmp.ptr = 0;
    tmp.ctrl = 0;
    if (&tmp != src) {
        swap_828C37F0(&tmp.ctrl, &src->ctrl);
        swap_828C37F0(&tmp.ptr, &src->ptr);
    }
    old = dst->ctrl;
    dst->ctrl = tmp.ctrl;
    dst->ptr = tmp.ptr;
    if (old != 0) {
        fn_822315A0(old);
    }
    if (made.ctrl != 0) {
        fn_822315A0(made.ctrl);
    }
}
