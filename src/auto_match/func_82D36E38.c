extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82D33AF8();
extern int fn_82D35308();
extern int fn_82D35448();
extern int fn_82D363A0();
extern int fn_82D36810();
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int uStack_58;


void fn_82D36E38(int param_1,int param_2,unsigned int *param_3,unsigned __int64 param_4,unsigned int *param_5
                  )

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned int *puVar6;
  int *piVar7;
  unsigned __int64 uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  int iStack_60;
  int iStack_5c;
  unsigned int uStack_58;
  
  iVar4 = (int)param_4;
  *(int *)(param_1 + 0x18) = iVar4;
  if (iVar4 != 0) {
    iVar3 = fn_82CE5410();
    if ((int)(param_5[2] & 0x3fffffff) < iVar4) {
      uVar8 = ((unsigned __int64)(unsigned int)param_5[2] & 0x3fffffff) << 1;
      if ((int)uVar8 <= iVar4) {
        uVar8 = param_4;
      }
      fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),param_5,uVar8,4);
    }
    param_5[1] = iVar4;
    puVar6 = (unsigned int *)(param_1 + 0x14);
    piVar7 = (int *)(param_1 + 0x10);
    fn_82D35448(param_1 + 0x1c,(param_4 & 0x7fffffff) * 2 + -1,piVar7,puVar6);
    iVar3 = fn_82D363A0(param_1 + 0x1c,piVar7,puVar6,puVar6);
    *(int *)(param_1 + 0x10) = iVar3;
    *(unsigned int *)(iVar3 + 0x28) = *(unsigned int *)(iVar3 + 0x28) | 0x7fffffff;
    iStack_60 = 0;
    iStack_5c = 0;
    uStack_58 = 0x80000000;
    iVar3 = fn_82CE5410();
    if ((int)(uStack_58 & 0x3fffffff) < iVar4) {
      uVar8 = ((unsigned __int64)uStack_58 & 0x3fffffff) << 1;
      if ((int)uVar8 <= iVar4) {
        uVar8 = param_4;
      }
      fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),&iStack_60,uVar8,0x20);
    }
    if (0 < iVar4) {
      iVar3 = 0;
      uVar8 = param_4;
      do {
        puVar1 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
        uVar9 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
        iVar5 = iVar3 + iStack_60;
        iVar3 = iVar3 + 0x20;
        puVar2 = (unsigned int *)(iVar5 + 0x10U & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar9;
        puVar2[2] = uVar10;
        puVar2[3] = uVar11;
        puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
        uVar9 = puVar1[1];
        uVar10 = puVar1[2];
        uVar11 = puVar1[3];
        param_2 = param_2 + 0x20;
        puVar2 = (unsigned int *)(in_r0 + iVar5 & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar9;
        puVar2[2] = uVar10;
        puVar2[3] = uVar11;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (iVar4 == 1) {
      iVar3 = *piVar7;
      *(unsigned int *)(iVar3 + 0x20) = *param_3;
      *(unsigned int *)(iVar3 + 0x28) = *(unsigned int *)(iVar3 + 0x28) | 0x80000000;
      *(unsigned int *)(*piVar7 + 0x2c) = 0x7fffffff;
      *(unsigned int *)*param_5 = *puVar6;
      iStack_5c = iVar4;
    }
    else {
      iStack_5c = iVar4;
      fn_82D36810(param_1,iStack_60,param_3,param_4,*piVar7,param_5,0);
    }
    fn_82D33AF8(param_1,*piVar7,*puVar6,0x7fffffff);
    fn_82D35308(param_1,*piVar7,0);
    iVar4 = fn_82CE5410();
    iStack_5c = 0;
    if ((uStack_58 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar4 + 0x10) + 0x10))
                (*(int **)(iVar4 + 0x10),iStack_60,uStack_58 & 0x3fffffff,0x20);
    }
  }
  return;
}

