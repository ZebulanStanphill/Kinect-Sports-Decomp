extern int fn_82634DF8();
extern int fn_82637090();
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82F68CC0();


__int64 fn_82633788(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  
  fn_82634DF8(param_1,1,param_4 == 0,1,param_2);
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x128) + 1;
  uVar1 = *(unsigned int *)(param_1 + 100);
  piVar6 = (int *)(param_1 + 0x124);
  piVar4 = (int *)(param_1 + 0x50);
  if ((unsigned __int64)*(unsigned int *)(param_1 + 300) < (uVar3 & 0xffffffff)) {
    uVar5 = ((unsigned __int64)*(unsigned int *)(param_1 + 300) & 0x7fffffff) << 1;
    if (uVar5 < (uVar3 & 0xffffffff)) {
      uVar5 = uVar3;
    }
    lVar2 = fn_8265C940((uVar5 & 0x3fffffff) << 2,0x64800000);
    if (lVar2 == 0) {
      *piVar4 = -0x7ff8fff2;
      goto LAB_82633880;
    }
    *(int *)(param_1 + 300) = (int)uVar5;
    if (*piVar6 != 0) {
      fn_82F68CC0(lVar2,*piVar6,*(int *)(param_1 + 0x128) << 2);
      fn_8265C990(*piVar6,0x24800000);
    }
    *piVar6 = (int)lVar2;
  }
  if (-1 < *piVar4) {
    *(unsigned int *)(*(int *)(param_1 + 0x128) * 4 + *piVar6) =
         (((param_4 & 1) << 6 | param_3 & 0xf) << 8 | param_3 & 0xf0) << 8 | uVar1 & 0xfff;
    *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  }
LAB_82633880:
  fn_82637090(param_1 + 0x60,param_2,piVar4);
  return (unsigned __int64)*(unsigned int *)(param_1 + 100) - 1;
}

