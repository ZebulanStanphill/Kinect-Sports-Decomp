extern void fn_82FA5190(void *heap, void *p);
extern void fn_82FF8410(void *p);
extern void *lbl_831BC768;

typedef struct Vec { void *begin; void *end; void *cap; } Vec;
typedef struct S {
    char pad[0x10];
    Vec a;
    char sub[0x20];
    Vec b;
} S;

void fn_82FF78F8(S *s)
{
    if (s->a.begin != 0) {
        s->a.end = s->a.begin;
        fn_82FA5190(lbl_831BC768, s->a.begin);
        s->a.begin = 0;
        s->a.end = 0;
        s->a.cap = 0;
    }
    if (s->b.begin != 0) {
        s->b.end = s->b.begin;
        fn_82FA5190(lbl_831BC768, s->b.begin);
        s->b.begin = 0;
        s->b.end = 0;
        s->b.cap = 0;
    }
    fn_82FF8410(s->sub);
}
