typedef struct Elem_8271ABA0 {
    int w[4];
} Elem_8271ABA0;

typedef struct Stack_8271ABA0 {
    Elem_8271ABA0 *cur;   /* 0x00 */
    Elem_8271ABA0 *base;  /* 0x04 */
    Elem_8271ABA0 *end;   /* 0x08 */
    int pad[2];           /* 0x0c */
    int count;            /* 0x14 */
} Stack_8271ABA0;

typedef struct Ctx_8271ABA0 {
    char pad[0x254];
    char names[0x50];     /* 0x254 */
} Ctx_8271ABA0;

typedef struct Obj_8271ABA0 {
    char pad0[8];
    Stack_8271ABA0 stack;     /* 0x08 */
    char pad1[0x58];
    Ctx_8271ABA0 *ctx;        /* 0x78 */
} Obj_8271ABA0;

typedef struct Name_8271ABA0 {
    int a;
    int b;
    int refcount;         /* 0x08 */
} Name_8271ABA0;

extern void fn_82681728(Name_8271ABA0 **out, void *table, const char *name);
extern void fn_826826A8(Stack_8271ABA0 *s);
extern void fn_826827F8(Stack_8271ABA0 *s);
extern void fn_826944C8(Name_8271ABA0 *n);
extern void fn_82695520(Elem_8271ABA0 *dst, const Elem_8271ABA0 *src);
extern void fn_82696330(Elem_8271ABA0 *e);
extern void fn_82720748(Obj_8271ABA0 *o, void *target, Name_8271ABA0 **name, int a, int b);

void fn_8271ABA0(char *clip, Obj_8271ABA0 *self, const Elem_8271ABA0 *value)
{
    Name_8271ABA0 *name;
    Stack_8271ABA0 *s;
    Elem_8271ABA0 *cur;
    void *target;
    int idx;

    s = &self->stack;
    cur = s->cur + 1;
    s->cur = cur;
    if (cur >= s->end) {
        fn_826826A8(s);
    }
    cur = s->cur;
    if (cur != 0) {
        fn_82695520(cur, value);
    }
    target = clip ? clip + 0x10 : 0;
    idx = (int)(s->cur - s->base) + s->count * 32 - 32;
    fn_82681728(&name, self->ctx->names, "onLoadInit");
    fn_82720748(self, target, &name, 1, idx);
    {
        Name_8271ABA0 *n = name;
        if (--n->refcount == 0) {
            fn_826944C8(n);
        }
    }
    fn_82696330(s->cur);
    cur = s->cur - 1;
    s->cur = cur;
    if (cur < s->base) {
        fn_826827F8(s);
    }
}
