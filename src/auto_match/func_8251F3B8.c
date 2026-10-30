extern void fn_8265BF48(const char *,int);
struct S { union { char buf[16]; char *p; } u; unsigned len,cap; };
void fn_8251F3B8(void *unused,struct S *s) { fn_8265BF48(s->cap >= 16 ? s->u.p : s->u.buf,0); }