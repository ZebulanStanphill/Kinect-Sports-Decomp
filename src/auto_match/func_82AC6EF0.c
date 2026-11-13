#define true 1
extern int fn_82AA6648();
extern int fn_82ABE250();
extern int fn_82AD6090();


void fn_82AC6EF0(int param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  
  puVar6 = (unsigned int *)fn_82ABE250(param_1,8,6);
  puVar4 = puVar6 + 1;
  puVar6[1] = (unsigned int)puVar6 | 1;
  *puVar6 = (unsigned int)puVar4 | 1;
  *(unsigned int *)(param_2 + 0x30) = *(unsigned int *)(param_2 + 0x30) | 0x40000000;
  *(unsigned int *)(param_2 + 0x4c) = *(unsigned int *)(param_2 + 0x4c) & 0xdfffffff;
  do {
    iVar1 = *(int *)(param_3 + 8);
    *(unsigned int *)(param_3 + 0x4c) = *(unsigned int *)(param_3 + 0x4c) & 0xdfffffff;
    *(unsigned int *)(param_3 + 0x30) = *(unsigned int *)(param_3 + 0x30) | 0x40000000;
    for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
      iVar2 = *(int *)(iVar1 + 4);
      if (((*(unsigned int *)(((int)(((unsigned __int64)*(unsigned int *)(param_2 + 0x30) & 0x7ffff) >> 5) + 1) * 4 +
                     *(int *)(iVar2 + 0x28)) & 1 << (*(unsigned int *)(param_2 + 0x30) & 0x1f)) != 0) &&
         ((*(unsigned int *)(iVar2 + 0x30) >> 0x1e & 1) == 0)) {
        if ((*puVar4 & 1) == 0) {
          uVar9 = *puVar6 & 0xfffffffe;
          iVar7 = uVar9 - 4;
          if ((iVar7 == 0) || (*(unsigned int *)(uVar9 + 8) < *(int *)(uVar9 + 4) + 1U)) goto LAB_82ac6fd8;
        }
        else {
LAB_82ac6fd8:
          iVar7 = fn_82AD6090(puVar6,1);
        }
        iVar3 = *(int *)(iVar7 + 8);
        *(int *)(iVar7 + 8) = iVar3 + 1;
        *(int *)((iVar3 + 4) * 4 + iVar7) = iVar2;
      }
    }
    if (((*puVar4 & 1) != 0) || (*puVar4 == 0)) {
      *puVar6 = *(unsigned int *)(param_1 + 0x3d0);
      *(unsigned int **)(param_1 + 0x3d0) = puVar6;
      for (uVar9 = *(unsigned int *)(param_1 + 4); ((uVar9 & 1) == 0 && (uVar9 != 0));
          uVar9 = *(unsigned int *)((uVar9 & 0xfffffffe) + 4)) {
        *(unsigned int *)(uVar9 + 0x30) = *(unsigned int *)(uVar9 + 0x30) & 0xbfffffff;
      }
      return;
    }
    puVar5 = (unsigned int *)(*puVar6 & 0xfffffffe);
    puVar8 = puVar5 + -1;
    uVar9 = puVar5[1] - 1;
    param_3 = puVar8[puVar5[1] + 3];
    puVar5[1] = uVar9;
    if (uVar9 == 0) {
      *(unsigned int *)(*puVar5 & 0xfffffffe) = *puVar8;
      *(unsigned int *)(*puVar8 & 0xfffffffe) = *puVar5;
      fn_82AA6648(puVar6,puVar8,((unsigned __int64)puVar5[2] + 4 & 0x3fffffff) << 2);
    }
  } while( true );
}

