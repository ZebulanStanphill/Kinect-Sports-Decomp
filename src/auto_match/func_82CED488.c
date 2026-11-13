extern int fn_82CE5338();
extern int fn_82CE5410();
extern int fn_82CED330();
extern unsigned int lbl_8323B430;


unsigned int * fn_82CED488(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  
  uVar4 = lbl_8323B430;
  uVar3 = (unsigned __int64)lbl_8323B430;
  uVar1 = (unsigned __int64)lbl_8323B430;
  *param_1 = lbl_8323B430;
  if ((uVar1 & 0xfffffffe) != (param_2 & 0xffffffff)) {
    if ((uVar4 & 1) == 1) {
      iVar2 = fn_82CE5410();
      fn_82CE5338(*(unsigned int *)(iVar2 + 0x10),uVar3 - 1);
      uVar4 = lbl_8323B430;
    }
    if ((param_2 & 0xffffffff) != 0) {
      iVar2 = fn_82CED330(param_2);
      uVar4 = iVar2 + 1;
    }
    *param_1 = uVar4;
  }
  return param_1;
}

