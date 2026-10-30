struct Sub { virtual void a0(); virtual void a1(); virtual void a2(); virtual void a3(); virtual void a4(); virtual void a5(); virtual void a6(); virtual void a7(); virtual void a8(); virtual void a9(); virtual void a10(); virtual void a11(); virtual void a12(); virtual void a13(); virtual void a14(); virtual unsigned char call(); };
struct Result { char pad[0xf0]; Sub sub; };
struct Obj { virtual void a(); virtual Result *get(); };
extern "C" unsigned int fn_828A92F0(Obj *p) { return p->get()->sub.call(); }
