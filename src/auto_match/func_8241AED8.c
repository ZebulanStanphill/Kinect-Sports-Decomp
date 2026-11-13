extern unsigned int *auStack_50;
extern unsigned int fStack_4c;
extern int fn_82417B28();
extern int fn_8253C548();
extern int fn_82D8B6C8();


void fn_8241AED8(int param_1)

{
  float fVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned __int64 in_r0;
  int iVar7;
  unsigned int uVar8;
  int *piVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned char auStack_50 [4];
  float fStack_4c;
  
  iVar7 = (**(int (***)())(**(int **)(param_1 + 4) + 0xc))
                    (*(int **)(param_1 + 4),
                     (unsigned __int64)*(unsigned int *)(param_1 + 0x18) * 0x1ac +
                     (unsigned __int64)*(unsigned int *)(param_1 + 8));
  fn_82417B28(param_1,iVar7);
  uVar8 = 0;
  piVar9 = *(int **)(param_1 + 0x88);
  if (piVar9 != *(int **)(param_1 + 0x8c)) {
    do {
      if (*(unsigned int *)(iVar7 + 0x1e0) <= uVar8) {
        return;
      }
      iVar2 = *piVar9;
      fVar1 = *(float *)(param_1 + 0x1a0);
      puVar5 = (unsigned int *)(iVar2 + 0x20U & 0xfffffff0);
      uVar10 = puVar5[1];
      uVar11 = puVar5[2];
      uVar12 = puVar5[3];
      uVar3 = *(unsigned int *)(iVar2 + 0x10);
      puVar6 = (unsigned int *)((unsigned int)(auStack_50 + (int)in_r0) & 0xfffffff0);
      *puVar6 = *puVar5;
      puVar6[1] = uVar10;
      puVar6[2] = uVar11;
      puVar6[3] = uVar12;
      fStack_4c = fVar1 + fStack_4c;
      fn_8253C548(uVar3,auStack_50,0xffffffff821ca1a0);
      *(unsigned int *)(*(int *)(iVar2 + 0x10) + 0x1d0) = 0;
      iVar4 = *(int *)(*(int *)(iVar2 + 0x10) + 0x7c0);
      if (*(char *)(iVar4 + 0xe8) == '\x04') {
        fn_82D8B6C8(iVar4,1,1,0);
      }
      piVar9 = piVar9 + 1;
      *(unsigned int *)(iVar2 + 0x30) = 0;
      *(unsigned int *)(iVar2 + 0x40) = 0;
      uVar8 = uVar8 + 1;
    } while (piVar9 != *(int **)(param_1 + 0x8c));
  }
  return;
}

