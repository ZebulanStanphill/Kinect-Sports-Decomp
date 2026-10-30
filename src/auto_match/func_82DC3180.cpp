struct V { virtual void pad(); virtual void off(int); virtual void on(int); };
struct O { char pad[0x40]; V v; };
extern "C" void fn_82DC3180(O *o, int arg, signed char flag) { if (flag) o->v.on(arg); else o->v.off(arg); }
