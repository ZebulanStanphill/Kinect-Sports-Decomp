extern int fn_8265C9E0();
extern int fn_8289E318();
extern int fn_828A7268();
extern int fn_828A7CE0();
extern int fn_82BA02A8();


static __forceinline void init2(unsigned *p, unsigned v){p[0]=v; fn_8289E318(p+1,v);fn_82BA02A8(p,v,v);}
unsigned int * fn_828A7F70(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = fn_8265C9E0(0x20);
  if (uVar1) uVar2=fn_828A7268(uVar1,param_2); else uVar2=0;
  *param_1 = (int)uVar2;
  fn_828A7CE0(param_1 + 1,uVar2);
  fn_82BA02A8(param_1,uVar2,uVar2);
  uVar2 = fn_8265C9E0(1);
  init2(param_1+2,uVar2);
  return param_1;
}

