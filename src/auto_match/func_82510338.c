extern unsigned int *auStack_30;
extern int fn_82563230();
extern int fn_82F63108();


void fn_82510338(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int in_r0;
  unsigned int uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned char auStack_30 [1];
  
  iVar1 = *param_2;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar5 = (**(int (***)())(**(int **)(param_1 + 0x18) + 4))
                      (*(int **)(param_1 + 0x18),*(int *)(iVar1 + 0x10) != 0);
    uVar8 = (unsigned __int64)*(unsigned int *)(param_1 + 0x20);
    uVar9 = (unsigned __int64)((int)(*(unsigned int *)(param_1 + 0x24) - *(unsigned int *)(param_1 + 0x20)) >> 4);
    if (0 < (__int64)uVar9) {
      do {
        uVar7 = (__int64)((int)uVar9 >> 1) + (unsigned __int64)((int)uVar9 < 0 && (uVar9 & 1) != 0);
        lVar6 = (uVar7 & 0xfffffff) * 0x10 + uVar8;
        if (*(unsigned int *)lVar6 < uVar5) {
          uVar8 = lVar6 + 0x10;
          uVar7 = (uVar9 - uVar7) - 1;
        }
        uVar9 = uVar7;
      } while (0 < (int)uVar7);
    }
    if (((uVar8 & 0xffffffff) != (unsigned __int64)*(unsigned int *)(param_1 + 0x24)) && (*(unsigned int *)uVar8 == uVar5))
    {
      iVar2 = *(int *)(param_1 + 4);
      uVar5 = *(unsigned int *)(iVar1 + 0x18);
      puVar3 = (unsigned int *)(iVar2 + 0x50U & 0xfffffff0);
      uVar10 = puVar3[1];
      uVar11 = puVar3[2];
      uVar12 = puVar3[3];
      puVar4 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
      *puVar4 = *puVar3;
      puVar4[1] = uVar10;
      puVar4[2] = uVar11;
      puVar4[3] = uVar12;
      fn_82563230(iVar2,3,((unsigned __int64)uVar5 + 1 & 0x3fffffff) * 4 + uVar8,auStack_30,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F63108();
}

