typedef struct Name_8271AF68 {
    int a;
    int b;
    int refcount; /* 0x08 */
} Name_8271AF68;

typedef struct Elem_8271AF68 {
    unsigned char type;  /* 0x00 */
    Name_8271AF68 *name; /* 0x04 */
    int number;          /* 0x08 */
    int w;
} Elem_8271AF68;

typedef struct Stack_8271AF68 {
    Elem_8271AF68 *cur;  /* 0x00 */
    Elem_8271AF68 *base; /* 0x04 */
    Elem_8271AF68 *end;  /* 0x08 */
    int pad[2];          /* 0x0c */
    int count;           /* 0x14 */
} Stack_8271AF68;

typedef struct Ctx_8271AF68 {
    char pad[0x254];
    char names[0x50]; /* 0x254 */
} Ctx_8271AF68;

typedef struct Obj_8271AF68 {
    char pad0[8];
    Stack_8271AF68 stack; /* 0x08 */
    char pad1[0x58];
    Ctx_8271AF68 *ctx; /* 0x78 */
} Obj_8271AF68;

extern void fn_82681728(Name_8271AF68 **out, void *table, const char *name);
extern void fn_826826A8(Stack_8271AF68 *s);
extern void fn_826944C8(Name_8271AF68 *n);
extern void fn_82695520(Elem_8271AF68 *dst, const Elem_8271AF68 *src);
extern void fn_826AF618(Stack_8271AF68 *s);
extern void fn_82720748(Obj_8271AF68 *o, void *target, Name_8271AF68 **name, int a, int b);

void fn_8271AF68(char *clip, Obj_8271AF68 *self, const Elem_8271AF68 *value, const char *url, int code)
{
    Name_8271AF68 *event;
    Name_8271AF68 *urlName;
    Stack_8271AF68 *s;
    Elem_8271AF68 *cur;
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
        cur->number = code;
        cur->type = 4;
    }
    fn_82681728(&urlName, self->ctx->names, url);
    cur = s->cur + 1;
    s->cur = cur;
    if (cur >= s->end) {
        fn_826826A8(s);
    }
    cur = s->cur;
    {
        Name_8271AF68 *n = urlName;
        if (cur != 0) {
            cur->name = n;
            cur->type = 5;
            n->refcount++;
        }
        if (--n->refcount == 0) {
            fn_826944C8(n);
        }
    }
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
    fn_82681728(&event, self->ctx->names, "onLoadError");
    fn_82720748(self, target, &event, 3, idx);
    {
        Name_8271AF68 *n = event;
        if (--n->refcount == 0) {
            fn_826944C8(n);
        }
    }
    fn_826AF618(s);
}
