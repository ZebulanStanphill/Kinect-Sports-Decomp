extern int fn_82CE5338();
extern int fn_82CE5410();
extern int fn_82CED330();
extern unsigned int lbl_8323B430;


unsigned int * fn_82CED628(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if (((unsigned __int64)uVar1 & 0xfffffffe) != (param_2 & 0xffffffff)) {
    if ((uVar1 & 1) == 1) {
      iVar2 = fn_82CE5410();
      fn_82CE5338(*(unsigned int *)(iVar2 + 0x10),(unsigned __int64)uVar1 - 1);
    }
    if ((param_2 & 0xffffffff) == 0) {
      *param_1 = lbl_8323B430;
    }
    else {
      iVar2 = fn_82CED330(param_2);
      *param_1 = iVar2 + 1;
    }
  }
  return param_1;
}

