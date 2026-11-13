typedef struct Elem_827AE240 {
    unsigned char type;
    unsigned char pad1[3];
    unsigned char b;
    unsigned char pad5[11];
} Elem_827AE240;

typedef struct Stack_827AE240 {
    Elem_827AE240 *cur;   /* 0x00 */
    Elem_827AE240 *base;  /* 0x04 */
    Elem_827AE240 *end;   /* 0x08 */
    int pad[2];           /* 0x0c */
    int count;            /* 0x14 */
} Stack_827AE240;

typedef struct Ctx_827AE240 {
    char pad[0x254];
    char names[0x50];     /* 0x254 */
} Ctx_827AE240;

typedef struct Obj_827AE240 {
    char pad0[8];
    Stack_827AE240 stack;     /* 0x08 */
    char pad1[0x58];
    Ctx_827AE240 *ctx;        /* 0x78 */
} Obj_827AE240;

typedef struct Name_827AE240 {
    int a;
    int b;
    int refcount;         /* 0x08 */
} Name_827AE240;

extern void fn_82681728(Name_827AE240 **out, void *table, const char *name);
extern void fn_826826A8(Stack_827AE240 *s);
extern void fn_826827F8(Stack_827AE240 *s);
extern void fn_826944C8(Name_827AE240 *n);
extern void fn_82696330(Elem_827AE240 *e);
extern void fn_82720748(Obj_827AE240 *o, void *target, Name_827AE240 **name, int a, int b);

void fn_827AE240(char *clip, Obj_827AE240 *self, unsigned char value)
{
    Name_827AE240 *name;
    Stack_827AE240 *s;
    Elem_827AE240 *cur;
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
        cur->b = value;
        cur->type = 2;
    }
    target = clip ? clip + 0x10 : 0;
    idx = (int)(s->cur - s->base) + s->count * 32 - 32;
    fn_82681728(&name, self->ctx->names, "onLoad");
    fn_82720748(self, target, &name, 1, idx);
    {
        Name_827AE240 *n = name;
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
