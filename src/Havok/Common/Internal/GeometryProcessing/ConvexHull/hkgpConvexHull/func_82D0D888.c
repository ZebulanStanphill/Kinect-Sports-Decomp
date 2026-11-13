extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82D18590();
extern unsigned int iStack_5c;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


unsigned __int64 fn_82D0D888(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned __int64 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  struct { unsigned int first; int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  
  if (param_2[2] == 0x10) {
    puVar7 = *(unsigned int **)(param_1 + 8);
    uVar8 = param_2[1];
    uVar9 = *param_2;
    *puVar7 = *param_3;
    puVar7[1] = param_3[1];
    puVar7[2] = param_3[2];
    puVar7[3] = param_3[3];
    uVar3 = fn_82D18590(*(unsigned int *)(param_1 + 8),uVar9,uVar8,0,0);
  }
  else {
    puVar7 = (unsigned int *)*param_2;
    iVar5 = param_2[1];
    stack_pair_60.first = 0;
    stack_pair_60.second = 0;
    uStack_58 = 0x80000000;
    iVar4 = fn_82CE5410();
    if ((int)(uStack_58 & 0x3fffffff) < iVar5) {
      iVar6 = (uStack_58 & 0x3fffffff) << 1;
      if (iVar6 <= iVar5) {
        iVar6 = iVar5;
      }
      fn_82CE6310(*(unsigned int *)(iVar4 + 0x10),&stack_pair_60.first,iVar6,0x10);
    }
    iVar4 = 0;
    if (0 < (int)param_2[1]) {
      iVar6 = 0;
      uStack_44 = lbl_821AAD20;
      do {
        uStack_48 = puVar7[2];
        uStack_50 = *puVar7;
        uStack_4c = puVar7[1];
        iVar4 = iVar4 + 1;
        puVar1 = (unsigned int *)((int)&uStack_50 + in_r0 & 0xfffffff0);
        uVar8 = puVar1[1];
        uVar9 = puVar1[2];
        uVar10 = puVar1[3];
        puVar2 = (unsigned int *)(iVar6 + stack_pair_60.first & 0xfffffff0);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        puVar2[2] = uVar9;
        puVar2[3] = uVar10;
        iVar6 = iVar6 + 0x10;
        puVar7 = (unsigned int *)((int)puVar7 + param_2[2]);
      } while (iVar4 < (int)param_2[1]);
    }
    puVar7 = *(unsigned int **)(param_1 + 8);
    *puVar7 = *param_3;
    puVar7[1] = param_3[1];
    puVar7[2] = param_3[2];
    puVar7[3] = param_3[3];
    stack_pair_60.second = iVar5;
    uVar3 = fn_82D18590(*(unsigned int *)(param_1 + 8),-(unsigned int)(iVar5 != 0) & stack_pair_60.first,iVar5,0,0
                             );
    iVar5 = fn_82CE5410();
    stack_pair_60.second = 0;
    if ((uStack_58 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar5 + 0x10) + 0x10))
                (*(int **)(iVar5 + 0x10),stack_pair_60.first,uStack_58 & 0x3fffffff,0x10);
    }
  }
  return uVar3;
}

