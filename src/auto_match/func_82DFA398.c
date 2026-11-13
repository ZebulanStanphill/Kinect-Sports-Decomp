extern unsigned int lbl_821AAD20;


void fn_82DFA398(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  
  if (*(float *)(param_2 + 0x1c) == lbl_821AAD20) {
    uVar1 = *(unsigned int *)(param_1 + 0xc);
    uVar6 = (unsigned __int64)uVar1;
    trapWord(6,uVar6,0);
    uVar4 = (*(unsigned int *)(param_1 + 8) + uVar6) - 1;
    trapWord(5,uVar6 & ~(((uVar4 & 0x7fffffff) << 1 | (uVar4 & 0xffffffff) >> 0x1f) - 1),0xffff);
    if (*(float *)((int)((uVar4 - (__int64)((int)uVar4 / (int)uVar1) * (__int64)(int)uVar1 &
                         0xffffffff) << 5) + *(int *)(param_1 + 0x10) + 0x1c) == lbl_821AAD20) {
      return;
    }
  }
  puVar2 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  iVar7 = *(int *)(param_1 + 8) * 0x20 + *(int *)(param_1 + 0x10);
  puVar3 = (unsigned int *)(in_r0 + iVar7 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  puVar2 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
  uVar8 = puVar2[1];
  uVar9 = puVar2[2];
  uVar10 = puVar2[3];
  puVar3 = (unsigned int *)(iVar7 + 0x10U & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar8;
  puVar3[2] = uVar9;
  puVar3[3] = uVar10;
  uVar5 = *(int *)(param_1 + 8) + 1;
  uVar1 = *(unsigned int *)(param_1 + 0xc);
  trapWord(6,(unsigned __int64)uVar1,0);
  *(unsigned int *)(param_1 + 8) = uVar5 - ((int)uVar5 / (int)uVar1) * uVar1;
  trapWord(5,(unsigned __int64)uVar1 &
             ~((((unsigned __int64)uVar5 & 0x7fffffff) << 1 | (unsigned __int64)(uVar5 >> 0x1f)) - 1),0xffff);
  return;
}

