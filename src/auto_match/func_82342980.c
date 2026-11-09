typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float x,y,z,w; } __vector4;
extern __vector4 __VMXGetReg(unsigned);
extern void fn_824E1960(__vector4 *,void *);
__vector4 *fn_82342980(__vector4 *out,int p) {
 void *value=*(void **)(**(int **)(p+0xc)+0x24);
 if (value) fn_824E1960(out,value);
 else *out=__VMXGetReg(77);
 return out;
}
