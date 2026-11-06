struct Iface_82F47FC0 {virtual void f00();virtual void f04();virtual void f08();virtual void f0c();virtual void f10();virtual void f14();virtual void f18();virtual void f1c();virtual void f20();virtual void f24();virtual void f28();virtual void f2c();virtual void f30();virtual void f34();virtual int get(int,int,unsigned short*);};
struct Object_82F47FC0 {char pad[0x14];Iface_82F47FC0 *iface;unsigned short count;char pad2[0x12];unsigned __int64 *values;};
extern "C" int fn_82F47FC0(Object_82F47FC0 *o,int a,int b,unsigned __int64 *out){
 int hr;
 if(!out)hr=0x80070057;
 else {unsigned short idx=0;*out=0;hr=o->iface->get(a,b,&idx);if(hr>=0){if(idx>=o->count)hr=0x8000ffff;else *out=o->values[idx];}}
 return hr;
}
