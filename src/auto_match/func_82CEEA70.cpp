class Allocator_82CEEA70 {public: virtual void f0(); virtual void f4(); virtual void f8(); virtual void fc(); virtual void f10(); virtual void f14(); virtual void f18(); virtual void f1c(); virtual void f20(); virtual void f24(); virtual void f28(); virtual unsigned alloc(unsigned,unsigned);};
class Sink_82CEEA70 {public: virtual void f0(); virtual void f4(); virtual void f8(); virtual void fc(); virtual void f10(); virtual void write(int,unsigned,unsigned,unsigned,unsigned);};
struct Manager_82CEEA70 {char pad[16];Allocator_82CEEA70 *a;};
extern "C" unsigned fn_82CFBE40(unsigned); extern "C" Manager_82CEEA70 *fn_82CE5410();
extern "C" void fn_82CEEA70(unsigned *self,unsigned text,Sink_82CEEA70 *s) {if(text) {unsigned n=fn_82CFBE40(text)+1; Manager_82CEEA70 *m=fn_82CE5410();unsigned p=m->a->alloc(text,n);s->write(1,*self,text,n,p);}}
