typedef struct Elem_82729B90 {
    int w[4];
} Elem_82729B90;

typedef struct Stack_82729B90 {
    Elem_82729B90 *cur;   /* 0x00 */
    Elem_82729B90 *base;  /* 0x04 */
    Elem_82729B90 *end;   /* 0x08 */
    int pad[2];           /* 0x0c */
    int count;            /* 0x14 */
} Stack_82729B90;

typedef struct Ctx_82729B90 {
    char pad[0x254];
    char names[0x50];     /* 0x254 */
} Ctx_82729B90;

typedef struct Obj_82729B90 {
    char pad0[8];
    Stack_82729B90 stack;     /* 0x08 */
    char pad1[0x58];
    Ctx_82729B90 *ctx;        /* 0x78 */
} Obj_82729B90;

typedef struct Name_82729B90 {
    int a;
    int b;
    int refcount;         /* 0x08 */
} Name_82729B90;

typedef struct Clip_82729B90 Clip_82729B90;

typedef struct ClipVtbl_82729B90 {
    void *slots[23];
    Obj_82729B90 *(*getEnv)(Clip_82729B90 *self);  /* 0x5c */
} ClipVtbl_82729B90;

struct Clip_82729B90 {
    ClipVtbl_82729B90 *vt;
    char pad4[0x64];
    char target[4];       /* 0x68 */
};

extern void fn_82681728(Name_82729B90 **out, void *table, const char *name);
extern void fn_826826A8(Stack_82729B90 *s);
extern void fn_826827F8(Stack_82729B90 *s);
extern void fn_826944C8(Name_82729B90 *n);
extern Elem_82729B90 *fn_82695520(Elem_82729B90 *dst, Clip_82729B90 *src);
extern void fn_82695DA0(Elem_82729B90 *dst, const Elem_82729B90 *src);
extern void fn_82696330(Elem_82729B90 *e);
extern void fn_82720748(Obj_82729B90 *o, void *target, Name_82729B90 **name, int a, int b);

void fn_82729B90(Clip_82729B90 *self)
{
    Name_82729B90 *name;
    Elem_82729B90 tmp;
    Obj_82729B90 *env;
    Elem_82729B90 *value;
    Stack_82729B90 *s;
    Elem_82729B90 *cur;
    int idx;
    void *target;

    env = self->vt->getEnv(self);
    value = fn_82695520(&tmp, self);
    s = &env->stack;
    cur = s->cur + 1;
    s->cur = cur;
    if (cur >= s->end) {
        fn_826826A8(s);
    }
    cur = s->cur;
    if (cur != 0) {
        fn_82695DA0(cur, value);
    }
    fn_82696330(&tmp);
    target = self ? self->target : 0;
    idx = (int)(s->cur - s->base) + s->count * 32 - 32;
    fn_82681728(&name, env->ctx->names, "onChanged");
    fn_82720748(env, target, &name, 1, idx);
    {
        Name_82729B90 *n = name;
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
