typedef __declspec(passinreg) union __vector4 { float f[4]; unsigned int u[4]; } __vector4;
typedef unsigned int uint;
extern int fn_82369798(uint,uint,uint,__vector4 *,__vector4 *);
extern int fn_82369900(uint,uint,__vector4,__vector4);
int fn_82369A00(uint p,uint x,uint a,uint b) {
 __vector4 v1,v2;
 if (x && fn_82369798(x,a,b,&v1,&v2)) return fn_82369900(p,x,v1,v2);
 return 0;
}
