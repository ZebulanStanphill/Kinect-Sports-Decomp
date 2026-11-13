extern int fn_8268AF70();
extern int fn_826CC0E8();
extern int fn_827247D0();
extern int fn_8272A978();


void fn_8272AE80(int *param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int iVar1;
  unsigned int uVar2;
  int iVar3;
  
  uVar2 = fn_8268AF70((char *)(*(unsigned int *)*param_3 & 0xfffffffc) + 8,
                       *(unsigned int *)(*(unsigned int *)*param_3 & 0xfffffffc) & 0x7fffffff,0x1505);
  iVar1 = *param_1;
  if ((iVar1 == 0) ||
     (iVar3 = fn_826CC0E8(param_1,param_3,*(unsigned int *)(iVar1 + 4) & uVar2), iVar3 < 0)) {
    fn_8272A978(param_1,param_2,param_3,uVar2);
  }
  else {
    fn_827247D0((iVar3 + 1) * 0x10 + iVar1,param_3);
  }
  return;
}

