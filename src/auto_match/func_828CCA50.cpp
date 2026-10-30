struct Sub { int x; };
struct S { virtual void f(int); char pad[0x7c]; Sub sub; };
extern "C" void fn_828CCA50(S *p) { Sub *s=&p->sub; s->x = 0; p->f(1); }
