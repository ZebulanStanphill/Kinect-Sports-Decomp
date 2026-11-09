typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float f[4]; } __vector4;
extern __vector4 *fn_82F4ED10(__vector4 *,const __vector4 *);
extern __vector4 fn_8306ED70(__vector4,__vector4);
__vector4 *fn_82F4EEC0(__vector4 *out,const __vector4 *in) {
 __vector4 temp;
 __vector4 *v=fn_82F4ED10(&temp,in);
 *out=fn_8306ED70(*in,*v);
 return out;
}
