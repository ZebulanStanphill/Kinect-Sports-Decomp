typedef struct { int x0, x4; int refs; } Ref;
typedef struct { void *a; void *b; int x8;  Ref *ref; } Self;
extern void fn_826944C8(Ref *r);
extern void fn_82689AE8(void *a, void *b);
extern void fn_8267BE38(void *a);

void fn_826A27D8(Self *s)
{
    Ref *r = s->ref;
    if (--r->refs == 0) {
        fn_826944C8(r);
    }
    fn_82689AE8(s->a, s->b);
    fn_8267BE38(s->a);
}
