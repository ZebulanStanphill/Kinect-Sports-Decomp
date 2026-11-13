extern int fn_8268E938();
extern int fn_8268F148();


unsigned int fn_8268F260(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  uVar3 = param_1[1];
  if (param_2 < uVar3) {
    param_2 = uVar3;
  }
  if (param_3 < uVar3) {
    param_3 = uVar3;
  }
  uVar4 = param_3 - 1;
  uVar3 = (param_2 + param_3) - 1 & ~uVar4;
  iVar1 = fn_8268F148(param_1,uVar3 >> (*param_1 & 0x3f),uVar4);
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar4 + iVar1 & ~uVar4;
    for (uVar2 = uVar4 - iVar1; (uVar2 != 0 && (uVar2 < 0x40)); uVar2 = param_3 + uVar2) {
      uVar4 = param_3 + uVar4;
    }
    *param_4 = *(unsigned int *)(iVar1 + 0x20);
    fn_8268E938(param_1,iVar1,uVar4,uVar3);
  }
  return uVar4;
}

