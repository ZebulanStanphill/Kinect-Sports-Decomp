extern int fn_82AA6648();
extern int fn_82AA66A8();
extern int fn_82ABE250();
extern int fn_82AD6090();
extern int fn_82B50B70();
extern int fn_82B50BF0();


unsigned int fn_82B51C00(int param_1,unsigned __int64 param_2,int param_3,char param_4,int param_5,char param_6)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  
  if (param_3 == 0) {
    uVar8 = 0;
  }
  else {
    puVar4 = (unsigned int *)fn_82ABE250(param_1,8,0xf);
    puVar3 = puVar4 + 1;
    puVar4[1] = (unsigned int)puVar4 | 1;
    *puVar4 = (unsigned int)puVar3 | 1;
    uVar7 = 0;
    do {
      uVar9 = *(unsigned int *)(param_3 + 8);
      uVar8 = uVar7;
      if (uVar9 != 0) {
        if (param_5 == 0) {
          if (param_6 != '\0') {
            uVar9 = -(unsigned int)(*(int *)(uVar9 + 4) == 0xc) & uVar9;
          }
          if ((uVar9 != 0) && (uVar8 = uVar9, uVar7 != 0)) {
            if ((*puVar3 & 1) == 0) {
              uVar8 = *puVar4 & 0xfffffffe;
              iVar5 = uVar8 - 4;
              if ((iVar5 == 0) || (*(unsigned int *)(uVar8 + 8) < *(int *)(uVar8 + 4) + 1U))
              goto LAB_82b51cd8;
            }
            else {
LAB_82b51cd8:
              iVar5 = fn_82AD6090(puVar4,1);
            }
            iVar1 = *(int *)(iVar5 + 8);
            *(int *)(iVar5 + 8) = iVar1 + 1;
            *(unsigned int *)((iVar1 + 4) * 4 + iVar5) = uVar9;
            uVar8 = uVar7;
          }
        }
        else {
          param_5 = param_5 + -1;
        }
      }
      param_3 = *(int *)(param_3 + 0xc);
      if ((param_3 != 0) && (*(int *)(param_3 + 4) != 1)) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(param_1,0x12c1);
      }
      uVar7 = uVar8;
    } while (param_3 != 0);
    while (((*puVar3 & 1) == 0 && (*puVar3 != 0))) {
      puVar2 = (unsigned int *)(*puVar4 & 0xfffffffe);
      puVar6 = puVar2 + -1;
      uVar7 = puVar2[1];
      uVar9 = puVar6[uVar7 + 3];
      if (param_4 == '\0') {
        puVar2[1] = uVar7 - 1;
        if (uVar7 - 1 == 0) {
          *(unsigned int *)(*puVar2 & 0xfffffffe) = *puVar6;
          *(unsigned int *)(*puVar6 & 0xfffffffe) = *puVar2;
          fn_82AA6648(puVar4,puVar6,((unsigned __int64)puVar2[2] + 4 & 0x3fffffff) << 2);
        }
        fn_82B50B70(param_2,uVar9);
      }
      else {
        puVar2[1] = uVar7 - 1;
        if (uVar7 - 1 == 0) {
          *(unsigned int *)(*puVar2 & 0xfffffffe) = *puVar6;
          *(unsigned int *)(*puVar6 & 0xfffffffe) = *puVar2;
          fn_82AA6648(puVar4,puVar6,((unsigned __int64)puVar2[2] + 4 & 0x3fffffff) << 2);
        }
        fn_82B50BF0(param_2,uVar9);
      }
    }
    *puVar4 = *(unsigned int *)(param_1 + 0x3d0);
    *(unsigned int **)(param_1 + 0x3d0) = puVar4;
  }
  return uVar8;
}

