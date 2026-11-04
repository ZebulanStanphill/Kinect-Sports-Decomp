struct Inner_82248910 {virtual void p0();virtual void p1();virtual void p2();virtual void p3();virtual void p4();virtual void p5();virtual void p6();virtual void p7();virtual void p8();virtual void p9();virtual void p10();virtual void p11();virtual void p12();virtual void p13();virtual void p14();virtual unsigned char test();};
struct Data_82248910 {char pad[324];Inner_82248910 inner;};
struct Obj_82248910 {virtual void vf00();virtual void vf04();virtual Data_82248910 *get();};
extern "C" void fn_828AB870(void *,int);
extern "C" void fn_82248910(Obj_82248910 *p,unsigned arg,int a,int b) {if(a==0 && b==1) {Data_82248910 *d=p->get();if(arg==(unsigned)&d->inner) {Inner_82248910 *inner=&p->get()->inner;if(inner->test()==1){fn_828AB870((char *)p->get()+156,0);}}}}