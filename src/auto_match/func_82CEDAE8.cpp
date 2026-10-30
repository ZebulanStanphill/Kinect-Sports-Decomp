struct Out { virtual void f0(); virtual void f1(); virtual void f2(); virtual void f3(); virtual void write(void *, int); };
struct S { int a,b; Out *out; };
extern "C" S *fn_82CEDAE8(S *s, char c) { s->out->write(&c,1); return s; }
