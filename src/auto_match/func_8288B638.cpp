struct O;
struct H { char pad[0x2c]; void (*f)(O *); };
struct O { virtual void destroy(int); char pad[0x34]; H *h; };
extern "C" void fn_8288B638(O *o) { if (o->h->f) o->h->f(o); else o->destroy(1); }
