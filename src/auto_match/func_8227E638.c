typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8227F578();
extern int fn_8227F728();


void fn_8227E638(int param_1,int param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  unsigned __int64 uVar8;
  int *piVar9;
  unsigned int uVar10;
  unsigned int *puVar11;
  
  puVar11 = *(unsigned int **)(param_1 + 0xc);
  bVar7 = false;
  while ((puVar11 != *(unsigned int **)(param_1 + 0x10) && (!bVar7))) {
    uVar8 = (unsigned __int64)*puVar11;
    if (*(int *)(*puVar11 + 0x14) == param_2) {
      iVar5 = fn_8227F728(uVar8);
      if (iVar5 == 0) {
        uVar2 = ((unsigned int *)param_3)[1];
        uVar3 = *param_4;
        uVar4 = param_4[1];
        iVar5 = (int)uVar8;
        *(unsigned int *)(iVar5 + 0x1c) = *(unsigned int *)param_3;
        *(unsigned int *)(iVar5 + 0x20) = uVar2;
        *(unsigned int *)(iVar5 + 0x24) = uVar3;
        *(unsigned int *)(iVar5 + 0x28) = uVar4;
        fn_8227F578(uVar8);
        *(unsigned int *)(param_1 + 0x3c) = 1;
      }
      bVar7 = true;
    }
    puVar11 = puVar11 + 1;
  }
  uVar10 = 0;
  if (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 3 != 0) {
    iVar5 = 0;
    do {
      if (bVar7) {
        return;
      }
      piVar9 = (int *)(*(int *)(param_1 + 0x1c) + iVar5);
      if (*piVar9 == 0) {
        uVar1 = piVar9[1];
        uVar8 = (unsigned __int64)uVar1;
        if ((uVar8 != 0) && (*(int *)(uVar1 + 0x14) == param_2)) {
          iVar6 = fn_8227F728(uVar8);
          if (iVar6 == 0) {
            uVar2 = ((unsigned int *)param_3)[1];
            uVar3 = *param_4;
            uVar4 = param_4[1];
            iVar6 = (int)uVar8;
            *(unsigned int *)(iVar6 + 0x1c) = *(unsigned int *)param_3;
            *(unsigned int *)(iVar6 + 0x20) = uVar2;
            *(unsigned int *)(iVar6 + 0x24) = uVar3;
            *(unsigned int *)(iVar6 + 0x28) = uVar4;
            fn_8227F578(uVar8);
            *(unsigned int *)(param_1 + 0x3c) = 1;
          }
          bVar7 = true;
        }
      }
      uVar10 = uVar10 + 1;
      iVar5 = iVar5 + 8;
    } while (uVar10 < (unsigned int)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 3));
  }
  return;
}

