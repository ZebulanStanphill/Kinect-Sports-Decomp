namespace std {namespace tr1 {extern "C" __declspec(noreturn) void fn_82F63108();}}
#define _Xfunc fn_82F63108
#include <functional>
#undef _Xfunc
struct Object_828E29F8;
struct Visitor_828E29F8 {virtual void vf00(); virtual void vf04(Object_828E29F8*);};
struct Object_828E29F8 {char pad[24];std::tr1::function<void(Visitor_828E29F8 *)> cb;};
extern "C" void fn_828E29F8(Object_828E29F8 *o,Visitor_828E29F8 *v){if(o->cb)o->cb(v);v->vf04(o);}