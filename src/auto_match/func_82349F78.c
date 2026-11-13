extern int fn_82337B90();
extern int fn_82338F48();
extern int fn_8234B020();
extern int fn_8234B0C8();
extern int fn_82436130();
extern int fn_8243D2D8();
extern int fn_824CD030();
extern int fn_824E1A20();
extern int fn_827F5708();
extern unsigned int lbl_821917B0;
extern unsigned int lbl_8219248C;
extern unsigned int lbl_82192754;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8328D41C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82349F78(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  int *piVar6;
  int *piVar7;
  __int64 lStack_30;
  int aiStack_28 [10];
  
  if ((*(unsigned int **)(param_1 + 0xc))[1] == 3) {
    fn_82338F48(**(unsigned int **)(param_1 + 0xc),1);
  }
  piVar6 = *(int **)(param_1 + 0xc);
  iVar3 = piVar6[1];
  if (iVar3 == 9) {
    iVar3 = *(int *)(*piVar6 + 0x24);
    if (iVar3 != 0) {
      piVar6[4] = 0;
      fn_824E1A20(iVar3,0);
    }
    fn_8234B020((unsigned __int64)*(unsigned int *)(**(int **)(param_1 + 0xc) + 0x118) + 0x2c0);
    return;
  }
  if (iVar3 != 10) {
    if (iVar3 != 0xb) {
      if (0xb < iVar3) {
        if (iVar3 < 0xe) {
          iVar3 = fn_82337B90(*piVar6);
          if (iVar3 == 0) {
            return;
          }
          uVar5 = 0xffffffff821b1ad8;
          fVar1 = ltcg_pool_0_0f;
          goto LAB_8234a21c;
        }
        if (iVar3 == 0xe) {
          iVar3 = fn_82337B90(*piVar6);
          if (iVar3 == 0) {
            return;
          }
          uVar5 = 0xffffffff821b1b84;
          fVar1 = lbl_821917B0;
          goto LAB_8234a21c;
        }
      }
      iVar3 = fn_82337B90(*piVar6);
      if (((iVar3 != 0) && (param_2 == 0xe)) && (param_3 != 0xf)) {
        fn_8243D2D8((unsigned __int64)
                          *(unsigned int *)(*(int *)(*(int *)(**(int **)(param_1 + 0xc) + 0x1a0) + 0xc) +
                                   0x174) + 8,0xffffffff821b1bfc,0,0);
      }
      piVar6 = *(int **)(param_1 + 0xc);
    }
    iVar3 = *(int *)(*piVar6 + 0x24);
    if (iVar3 != 0) {
      piVar6[4] = 2;
      iVar4 = fn_824CD030(iVar3);
      if (iVar4 != 0) {
        (**(int (***)())(*(int *)**(unsigned int **)(iVar3 + 0xfc) + 0x24))();
        *(unsigned int *)(*(int *)(**(int **)(iVar3 + 0xfc) + 0x3c) + 0x78) = 0;
      }
      *(unsigned int *)(*(int *)(iVar3 + 0xfc) + 100) = 2;
    }
    return;
  }
  iVar3 = *(int *)(*(int *)(*(int *)(*piVar6 + 0x1a0) + 0xc) + 0x174);
  if (*(int *)(*(int *)(iVar3 + 0x5c) + 0x1d4) == -1) {
    piVar7 = (int *)0x0;
  }
  else {
    iVar3 = *(int *)(iVar3 + 0x5c);
    piVar7 = *(int **)(*(int *)(iVar3 + 0x1d4) * 4 + *(int *)(iVar3 + 0x1c4));
  }
  if (*(int *)(*(int *)(*piVar6 + 0x118) + 0x2e4) != 0) {
    fn_827F5708((double)lbl_821CA460);
  }
  if (param_2 != 0xf) {
    return;
  }
  iVar3 = fn_82337B90(**(unsigned int **)(param_1 + 0xc));
  if (iVar3 == 0) {
    return;
  }
  (**(int (***)())(*piVar7 + 0x40))(aiStack_28,piVar7,0);
  fn_82436130(&lStack_30,piVar7,**(unsigned int **)(param_1 + 0xc));
  fVar1 = ltcg_pool_0_0f;
  if ((((((unsigned __int64)(lStack_30) >> 0) & 0xFFFFFFFF) <= lbl_8328D41C) || (aiStack_28[0] < (((unsigned __int64)(lStack_30) >> 0) & 0xFFFFFFFF))) &&
     (aiStack_28[0] < *(int *)(piVar7[0x10] + 0x118))) {
    lStack_30 = (__int64)aiStack_28[0];
    fVar2 = (float)lStack_30 * lbl_82193AF0;
    if (fVar2 < lbl_82192754) {
      uVar5 = 0xffffffff821b1ad4;
      goto LAB_8234a21c;
    }
    if ((lbl_82192754 <= fVar2) && (fVar2 < lbl_8219248C)) {
      uVar5 = 0xffffffff821b0c44;
      goto LAB_8234a21c;
    }
  }
  uVar5 = 0xffffffff821b1700;
LAB_8234a21c:
  fn_8234B0C8((double)fVar1,(unsigned __int64)*(unsigned int *)(**(int **)(param_1 + 0xc) + 0x118) + 0x2c0,
                    uVar5);
  return;
}

