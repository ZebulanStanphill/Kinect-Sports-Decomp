extern int fn_82D11CD0();
extern int fn_82D11E18();
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82D13560(int param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  __int64 lVar5;
  int *piVar6;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  
  iVar4 = *param_3;
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x40) != *(int *)(param_1 + 0x1ac))) {
    *(int *)(iVar4 + 0x40) = *(int *)(param_1 + 0x1ac);
    iVar4 = *param_3;
    if ((__int64)*(int *)(iVar4 + 0x28) * (__int64)*(int *)(param_2 + 0x28) +
        (__int64)*(int *)(iVar4 + 0x24) * (__int64)*(int *)(param_2 + 0x24) +
        (__int64)*(int *)(param_2 + 0x20) * (__int64)*(int *)(iVar4 + 0x20) +
        *(__int64 *)(iVar4 + 0x30) < 0) {
      *param_4 = *param_3;
      param_4[1] = param_3[1];
    }
    else {
      uStack_50 = *(unsigned int *)((param_3[1] + 5) * 4 + iVar4);
      uStack_4c = uStack_50 & 3;
      uStack_50 = uStack_50 & 0xfffffffc;
      fn_82D13560(param_1,param_2,&uStack_50,param_4);
      uStack_48 = *(unsigned int *)(((-(unsigned int)(param_3[1] != 2) & param_3[1] + 1U) + 5) * 4 + *param_3);
      uStack_44 = uStack_48 & 3;
      uStack_48 = uStack_48 & 0xfffffffc;
      fn_82D13560(param_1,param_2,&uStack_48,param_4);
      if (param_3[1] == 0) {
        iVar4 = 2;
      }
      else {
        iVar4 = param_3[1] + -1;
      }
      stack_pair_40.first = *(unsigned int *)((iVar4 + 5) * 4 + *param_3);
      stack_pair_40.second = stack_pair_40.first & 3;
      stack_pair_40.first = stack_pair_40.first & 0xfffffffc;
      fn_82D13560(param_1,param_2,&stack_pair_40.first,param_4);
      uVar3 = *(unsigned int *)((param_3[1] + 5) * 4 + *param_3);
      if ((uVar3 & 0xfffffffc) != 0) {
        *(unsigned int *)(((uVar3 & 3) + 5) * 4 + (uVar3 & 0xfffffffc)) = 0;
      }
      *(unsigned int *)((param_3[1] + 5) * 4 + *param_3) = 0;
      iVar4 = *param_3;
      iVar1 = ((-(unsigned int)(param_3[1] != 2) & param_3[1] + 1U) + 5) * 4;
      uVar3 = *(unsigned int *)(iVar1 + iVar4);
      if ((uVar3 & 0xfffffffc) != 0) {
        *(unsigned int *)(((uVar3 & 3) + 5) * 4 + (uVar3 & 0xfffffffc)) = 0;
      }
      *(unsigned int *)(iVar1 + iVar4) = 0;
      if (param_3[1] == 0) {
        iVar4 = 2;
      }
      else {
        iVar4 = param_3[1] + -1;
      }
      iVar1 = *param_3;
      iVar4 = (iVar4 + 5) * 4;
      uVar3 = *(unsigned int *)(iVar4 + iVar1);
      if ((uVar3 & 0xfffffffc) != 0) {
        *(unsigned int *)(((uVar3 & 3) + 5) * 4 + (uVar3 & 0xfffffffc)) = 0;
      }
      *(unsigned int *)(iVar4 + iVar1) = 0;
      lVar5 = 3;
      param_3 = (int *)*param_3;
      piVar6 = param_3 + 2;
      do {
        *(int *)(*piVar6 + 0x30) = *(int *)(*piVar6 + 0x30) + -1;
        piVar2 = (int *)*piVar6;
        if (piVar2[0xc] == 0) {
          iVar4 = *piVar2;
          piVar2 = (int *)piVar2[1];
          if (iVar4 != 0) {
            *(int **)(iVar4 + 4) = piVar2;
          }
          if (piVar2 == (int *)0x0) {
            *(int *)(param_1 + 0x24) = iVar4;
          }
          else {
            *piVar2 = iVar4;
          }
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
          fn_82D11CD0();
        }
        lVar5 = lVar5 + -1;
        piVar6 = piVar6 + 1;
      } while (lVar5 != 0);
      iVar4 = *param_3;
      piVar6 = (int *)param_3[1];
      if (iVar4 != 0) {
        *(int **)(iVar4 + 4) = piVar6;
      }
      if (piVar6 == (int *)0x0) {
        *(int *)(param_1 + 0x3c) = iVar4;
      }
      else {
        *piVar6 = iVar4;
      }
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
      fn_82D11E18(param_1 + 0x30,param_3);
    }
  }
  return;
}

