struct Iface_830263C8 {virtual void f0();virtual void f4();virtual void f8();virtual void fc();virtual void f10();virtual void f14();virtual void f18();};
struct State_830263C8 {int x;Iface_830263C8 *a;int y;Iface_830263C8 *b;int z;unsigned char flag;};
extern "C" void fn_830263C8(State_830263C8 *s){s->b->f8();s->flag=0;s->a->f18();}
