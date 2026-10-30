extern void fn_828223F8(void *dst, void *src);
typedef struct { char pad[0x30c]; char buf[8]; void *ptr; } T;
static void *get(T *t) { return t->ptr ? t->ptr : t->buf; }
static void *get2(T *t) { void *p = t->ptr; if (p == 0) p = t->buf; return p; }

void fn_82825378(T *a, T *b)
{
if (a->ptr) fn_828223F8(a->ptr, b->buf); else fn_828223F8(a->buf, b->buf); a->ptr = b->ptr;
}
