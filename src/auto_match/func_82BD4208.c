extern int fn_82F68CC0();


unsigned __int64 fn_82BD4208(int param_1,__int64 param_2,unsigned int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int uVar5;
  int *piVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  
  uVar7 = 0;
  uVar3 = 0xffffffff8000000a;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  piVar6 = *(int **)(param_1 + 0x34);
LAB_82bd42e8:
  if (piVar6 == (int *)0x0) {
    *(unsigned int *)(*(int *)(param_1 + 0x20) + 0xec) =
         *(unsigned int *)(*(int *)(param_1 + 0x20) + 0xec) & ~(1 << (**(unsigned int **)(param_1 + 4) & 0x3f));
  }
  else {
    piVar1 = (int *)*piVar6;
    if (*piVar1 == 0) goto LAB_82bd42e4;
    lVar4 = (unsigned __int64)(unsigned int)piVar1[3] - (unsigned __int64)(unsigned int)piVar1[1];
    uVar8 = lVar4 + 2;
    if ((uVar8 & 0xffffffff) <= (*param_3 - uVar7 & 0xffffffff)) goto code_r0x82bd4278;
    if ((uVar7 & 0xffffffff) == 0) {
      uVar3 = 0xffffffff8007000e;
      uVar7 = uVar8;
    }
  }
  *param_3 = (unsigned int)uVar7;
  return uVar3;
code_r0x82bd4278:
  fn_82F68CC0(uVar7 + param_2,(unsigned __int64)(unsigned int)piVar1[2] + (unsigned __int64)(unsigned int)piVar1[1] + -2,uVar8);
  uVar7 = uVar8 + uVar7;
  uVar3 = 0;
  if (param_4 != (int *)0x0) {
    *param_4 = *param_4 + 1;
  }
  iVar2 = *piVar6;
  uVar5 = *(unsigned int *)(iVar2 + 0xc);
  uVar8 = (unsigned __int64)*(unsigned int *)(iVar2 + 4) + lVar4;
  if ((uVar8 & 0xffffffff) < (unsigned __int64)uVar5) {
    uVar5 = (unsigned int)uVar8;
  }
  *(unsigned int *)(iVar2 + 4) = uVar5;
  if (uVar5 == ((unsigned int *)*piVar6)[3]) {
    *(unsigned int *)*piVar6 = 0;
LAB_82bd42e4:
    piVar6 = (int *)piVar6[1];
  }
  goto LAB_82bd42e8;
}

