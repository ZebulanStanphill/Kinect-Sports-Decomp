#include "stdext/xmemory.h"
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 { float f[4]; unsigned int u[4]; } V;
struct __declspec(align(16)) Small { char data[32]; };
struct __declspec(align(16)) Big { char data[128]; };
struct Box { void *vt; char pad[12]; Big f; };
extern "C" { Small *fn_822C5B18(Small *,void *);
 Big *fn_823917B0(Big *,Small *,V,V,V,float,int,unsigned char);
 void fn_82392778(void *, const void *); void fn_82359C18(void *);
 void fn_82390788(void *,Small *); extern char lbl_821B4918[]; }
extern "C" void fn_8238F360(char *self,V a,V b,V c,float t,int n,unsigned char flag) {
 Small s, result; Big b1,b2,b3;
 Big *r=fn_823917B0(&b3,fn_822C5B18(&s,self),a,b,c,t,n,flag);
 fn_82392778(&b1,r); fn_82392778(&b2,&b1);
 Box *p=std::_Allocate(1,(Box*)0); p->vt=lbl_821B4918;fn_82392778(&p->f,&b2);
 *(Box**)(result.data+16)=p;
 fn_82359C18(&b2);fn_82359C18(&b1);fn_82359C18(r);
 fn_82390788(self+0x7c,&result);fn_82359C18(&result);
}
