extern int fn_82CE5338();
extern int fn_82CE5410();
extern unsigned int lbl_8323B430;


void fn_82CED5B8(unsigned int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if ((uVar1 & 0xfffffffe) != 0) {
    if ((uVar1 & 1) == 1) {
      iVar2 = fn_82CE5410();
      fn_82CE5338(*(unsigned int *)(iVar2 + 0x10),(unsigned __int64)uVar1 - 1);
    }
    *param_1 = lbl_8323B430;
  }
  return;
}

