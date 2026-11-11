namespace std { namespace tr1 {extern "C" __declspec(noreturn) void fn_82F63108(void);}}
#define _Xfunc fn_82F63108
#include <functional>
#undef _Xfunc
struct Functor_824558D8 {void (*callback)(void);void *object;};
struct Function_824558D8 {void *vt;Functor_824558D8 functor;int pad;void *manager;};
struct Object_824558D8 {float value;int pad;float state;int pad2;std::tr1::function<void()> callback;int kind;};
extern "C" {
extern char lbl_821BA96C[];
void fn_82455990(void);
void fn_825521F0(float,float,Function_824558D8 *);
void fn_824558D8(Object_824558D8 *o) {
 if(o->state==0.0f) {
 Functor_824558D8 f; Function_824558D8 cb;
 f.callback=fn_82455990;f.object=o;
 cb.vt=lbl_821BA96C;cb.functor=f;cb.manager=&cb;
 fn_825521F0(0.0f,o->value,&cb);
 o->kind=2;
 } else o->kind=3;
 if(o->callback) o->callback();
}
}
