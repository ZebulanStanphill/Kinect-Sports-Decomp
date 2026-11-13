#define true 1
extern int fn_82AD6090();


void fn_82AD7878(unsigned __int64 param_1,int param_2,int param_3,unsigned int *param_4)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned __int64 uVar6;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  
  if ((*(unsigned int *)(param_2 + 0x14) & 1) == 0) {
    iVar8 = param_2 + 0x10;
    uVar9 = -(unsigned int)((*(unsigned int *)(param_2 + 0x14) & 1) == 0) & *(unsigned int *)(param_2 + 0x14);
  }
  else {
    if ((*(unsigned int *)(param_2 + 0x1c) & 1) == 0) {
      uVar9 = *(unsigned int *)(param_2 + 0x1c);
      iVar8 = param_2 + 0x18;
    }
    else {
      uVar9 = *(unsigned int *)(param_2 + 0x24);
      iVar8 = param_2 + 0x20;
    }
    uVar9 = -(unsigned int)((uVar9 & 1) == 0) & uVar9;
  }
  do {
    if (uVar9 == 0) {
      return;
    }
    do {
      for (puVar1 = *(unsigned int **)(uVar9 + 4); puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[2]) {
        uVar2 = puVar1[4];
        if ((((uVar2 != 0) && ((*puVar1 & 0xe000000) != 0)) &&
            (uVar3 = *(unsigned int *)(uVar2 + 8), (uVar3 & 0x3f80) == 0x3800)) &&
           (((uVar3 >> 0x1b & 1) == 0 &&
            (uVar6 = (unsigned __int64)*(unsigned int *)(param_3 + 0x30) & 0x7ffff,
            puVar4 = *(unsigned int **)(*(int *)(uVar2 + 0x1c) + 0x28),
            (*(unsigned int *)(((*puVar4 & 0x7ffff) + 0x1f >> 3 & 0x1ffffffc) + ((int)(uVar6 >> 5) + 1) * 4
                      + (int)puVar4) & 1 << ((unsigned int)uVar6 & 0x1f)) == 0)))) {
          *(unsigned int *)(uVar2 + 8) = uVar3 | 0x8000000;
          if ((param_4[1] & 1) == 0) {
            uVar3 = *param_4 & 0xfffffffe;
            iVar7 = uVar3 - 4;
            if ((iVar7 == 0) || (*(unsigned int *)(uVar3 + 8) < *(int *)(uVar3 + 4) + 1U))
            goto LAB_82ad79a8;
          }
          else {
LAB_82ad79a8:
            iVar7 = fn_82AD6090(param_4,1);
          }
          iVar5 = *(int *)(iVar7 + 8);
          *(int *)(iVar7 + 8) = iVar5 + 1;
          *(unsigned int *)((iVar5 + 4) * 4 + iVar7) = uVar2;
        }
      }
      uVar9 = *(unsigned int *)((uVar9 & 0xfffffffe) + 0x28);
    } while (((uVar9 & 1) == 0) && (uVar9 != 0));
    if (iVar8 == param_2 + 0x20) {
      return;
    }
    if ((iVar8 == param_2 + 0x18) || ((*(unsigned int *)(param_2 + 0x1c) & 1) != 0)) {
      uVar9 = *(unsigned int *)(param_2 + 0x24);
      iVar8 = param_2 + 0x20;
    }
    else {
      uVar9 = *(unsigned int *)(param_2 + 0x1c);
      iVar8 = param_2 + 0x18;
    }
    if ((uVar9 & 1) != 0) {
      return;
    }
  } while( true );
}

