extern int fn_8301BCA0();
extern int fn_8301BEA0();
extern int fn_8301CFE8();


unsigned __int64 fn_8301DF28(int param_1,int param_2)

{
  int iVar2;
  unsigned __int64 uVar1;
  int iVar3;
  
  iVar2 = fn_8301BCA0(param_1,*(unsigned int *)(*(int *)(param_1 + 0xc) + 0xfc));
  iVar3 = 0x400;
  if ((*(unsigned char *)(param_2 + 0xda) & 2) != 0) {
    iVar3 = 8;
  }
  if (iVar2 == 0x3f) {
LAB_8301dfc4:
    uVar1 = 0x3f;
  }
  else {
    if (iVar2 == 1) {
      if (iVar3 <= *(int *)(param_2 + 0x134)) goto LAB_8301dfc4;
      iVar2 = fn_8301BEA0(param_1,*(unsigned int *)(param_1 + 0xc));
      if (iVar2 == 1) {
        return 1;
      }
    }
    fn_8301CFE8(*(unsigned int *)(param_1 + 0xc),1);
    uVar1 = 2;
    *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 0x10);
    *(unsigned int *)(param_1 + 0x10) = 0;
  }
  return uVar1;
}

