struct Interface_82E000D0 {
virtual void f0();
virtual void f1();
virtual void f2();
virtual void f3();
virtual void f4();
virtual void f5();
virtual void f6();
virtual void f7();
virtual void f8();
virtual void f9();
virtual void f10();
virtual void f11();
virtual void f12();
virtual int value(unsigned char);
 int pad[4]; int count;
};
extern "C" int fn_82E000D0(Interface_82E000D0 *self) {
 int n=self->count; int sum=0;
 unsigned char i=0;
 if(n>0) { do {sum=self->value(i)+sum; i++;}while(i<n); }
 return sum;
}
