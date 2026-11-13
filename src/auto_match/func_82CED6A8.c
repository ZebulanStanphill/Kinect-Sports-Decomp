extern int fn_82CE5338();
extern int fn_82CE5410();
extern int fn_82CED330();
extern unsigned int lbl_8323B430;


unsigned int * fn_82CED6A8(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  uVar3 = uVar1 & 0xfffffffe;
  if ((uVar2 & 0xfffffffe) != uVar3) {
    if ((uVar2 & 1) == 1) {
      iVar4 = fn_82CE5410();
      fn_82CE5338(*(unsigned int *)(iVar4 + 0x10),(unsigned __int64)uVar2 - 1);
    }
    if ((uVar1 & 0xfffffffe) == 0) {
      *param_1 = lbl_8323B430;
    }
    else {
      iVar4 = fn_82CED330(uVar3);
      *param_1 = iVar4 + 1;
    }
  }
  return param_1;
}

