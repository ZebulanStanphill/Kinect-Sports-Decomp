typedef struct Elem_8271DCB8 {
    int w[4];
} Elem_8271DCB8;

typedef struct Stack_8271DCB8 {
    Elem_8271DCB8 *cur;   /* 0x00 */
    Elem_8271DCB8 *base;  /* 0x04 */
    Elem_8271DCB8 *end;   /* 0x08 */
    int pad[2];           /* 0x0c */
    int count;            /* 0x14 */
} Stack_8271DCB8;

typedef struct Ctx_8271DCB8 {
    char pad[0x254];
    char names[0x50];     /* 0x254 */
    unsigned char flag;   /* 0x2a4 */
} Ctx_8271DCB8;

typedef struct Obj_8271DCB8 {
    char pad0[8];
    Stack_8271DCB8 stack;     /* 0x08 */
    char pad1[0x58];
    Ctx_8271DCB8 *ctx;        /* 0x78 */
} Obj_8271DCB8;

typedef struct Name_8271DCB8 {
    int a;
    int b;
    int refcount;         /* 0x08 */
} Name_8271DCB8;

struct VObj_8271DCB8;
typedef struct VTbl_8271DCB8 {
    void (*f[32])(Elem_8271DCB8 *out, struct VObj_8271DCB8 *self);
} VTbl_8271DCB8;

typedef struct VObj_8271DCB8 {
    VTbl_8271DCB8 *vt;
} VObj_8271DCB8;

extern void fn_82681728(Name_8271DCB8 **out, void *table, const char *name);
extern void fn_826826A8(Stack_8271DCB8 *s);
extern void fn_826827F8(Stack_8271DCB8 *s);
extern void fn_826944C8(Name_8271DCB8 *n);
extern void fn_82695DA0(Elem_8271DCB8 *dst, Elem_8271DCB8 *src);
extern void fn_82696330(Elem_8271DCB8 *e);
extern VObj_8271DCB8 *fn_826A7398(Obj_8271DCB8 *o);
extern void fn_8271D8E0(Elem_8271DCB8 *out, Obj_8271DCB8 *o, Elem_8271DCB8 *in);
extern void fn_82720748(Obj_8271DCB8 *o, void *target, Name_8271DCB8 **name, int a, int b);

void fn_8271DCB8(char *param_1, Obj_8271DCB8 *param_2)
{
    Name_8271DCB8 *name;
    Name_8271DCB8 *name2;

    if (param_2->ctx->flag == 1) {
        Elem_8271DCB8 buf;
        Elem_8271DCB8 tmp;
        VObj_8271DCB8 *v;
        Stack_8271DCB8 *s;
        Elem_8271DCB8 *cur;
        void *target;
        int idx;

        v = fn_826A7398(param_2);
        v->vt->f[31](&buf, v);
        fn_8271D8E0(&tmp, param_2, &buf);
        s = &param_2->stack;
        cur = s->cur + 1;
        s->cur = cur;
        if (cur >= s->end) {
            fn_826826A8(s);
        }
        cur = s->cur;
        if (cur != 0) {
            fn_82695DA0(cur, &tmp);
        }
        target = param_1 ? param_1 + 0x10 : 0;
        idx = (int)(s->cur - s->base) + s->count * 32 - 32;
        fn_82681728(&name, param_2->ctx->names, "onResize");
        fn_82720748(param_2, target, &name, 1, idx);
        {
            Name_8271DCB8 *n = name;
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
        fn_82696330(&tmp);
    } else {
        void *target2;

        target2 = param_1 ? param_1 + 0x10 : 0;
        fn_82681728(&name2, param_2->ctx->names, "onResize");
        fn_82720748(param_2, target2, &name2, 0, 0);
        {
            Name_8271DCB8 *n = name2;
            if (--n->refcount == 0) {
                fn_826944C8(n);
            }
        }
    }
}
