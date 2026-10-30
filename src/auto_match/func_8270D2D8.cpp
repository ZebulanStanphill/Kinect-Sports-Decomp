struct P;
extern "C" void *fn_82693540(void *,P *);
extern "C" void *fn_8267B8F0(void *, int, int, int);
extern "C" void *lbl_8200E7B0[];
extern "C" void *lbl_831E7E64;
struct P { virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual unsigned __int64 v5(); };
struct Pair {int a,b;};
struct S { void *v; int a,b; void *p; int z; Pair pair; int pad; unsigned __int64 value; };
extern "C" S *fn_8270D2D8(S *s, P *p) {
 fn_82693540(s,p); s->v=lbl_8200E7B0;
 s->p=fn_8267B8F0(lbl_831E7E64,0x1ff8,0x20,0); s->z=0;
 s->value=p->v5();
 {Pair *pair=&s->pair;pair->a=0;pair->b=0;}
 return s;
}
