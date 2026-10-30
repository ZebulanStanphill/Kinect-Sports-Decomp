struct Pair { void *a, *b; Pair(); Pair(const Pair &); };
extern "C" void *fn_8266EC60();
extern "C" Pair fn_8266D778(void *, void *, void *);
extern "C" void fn_826744A0(void *, Pair *);
extern "C" void fn_822315A0(void *);
extern "C" void fn_82674580(char *p, void *x) { Pair pair=fn_8266D778(fn_8266EC60(),x,p); fn_826744A0(p+0x10,&pair); if(pair.b) fn_822315A0(pair.b); }
