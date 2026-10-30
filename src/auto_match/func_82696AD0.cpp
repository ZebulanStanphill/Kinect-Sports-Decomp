struct A { char pad[0x68]; char member; };
struct B { char pad[0x10]; char member; };
extern "C" A *fn_82695370(void *,void *);
extern "C" B *fn_82696958(void *,void *);
extern "C" char *fn_82696AD0(char *p,void *input) {
 if (*p == 7) { A *a = fn_82695370(p,input); return a ? &a->member : 0; }
 B *b = fn_82696958(p,input); return b ? &b->member : 0;
}
