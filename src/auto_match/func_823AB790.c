typedef unsigned char bool;
extern int fn_822315A0();
extern int fn_82365BD8();
extern int fn_8239D490();
extern int fn_8256D470();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int ltcg_pool_0_0f;


unsigned __int64 fn_823AB790(int *param_1,int param_2,unsigned __int64 param_3,unsigned int param_4)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int *piVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  __int64 lStack_60;
  int iStack_58;
  int iStack_54;
  
  iVar2 = (**(int (***)())(*param_1 + 0x84))(param_1,param_3);
  if (iVar2 == 0) {
    return 1;
  }
  piVar5 = param_1 + 0x1b;
  for (puVar6 = (unsigned int *)param_1[0x1b];
      (puVar6 != (unsigned int *)param_1[0x1c] &&
      ((unsigned __int64)*(unsigned int *)*puVar6 != (param_3 & 0xffffffff))); puVar6 = puVar6 + 2) {
  }
  for (puVar7 = (unsigned int *)param_1[0x1f];
      (puVar7 != (unsigned int *)param_1[0x20] &&
      ((unsigned __int64)*(unsigned int *)*puVar7 != (param_3 & 0xffffffff))); puVar7 = puVar7 + 2) {
  }
  if (puVar6 == (unsigned int *)param_1[0x1c]) {
    if (puVar7 == (unsigned int *)param_1[0x20]) {
      return 0;
    }
    fn_82365BD8(&iStack_58,puVar7);
    uVar4 = (**(int (***)())(*param_1 + 4))(param_1);
    piVar5 = param_1 + 0x1f;
    puVar6 = puVar7;
    if (param_4 != (unsigned int)LZCOUNT(uVar4) >> 5) {
      uVar3 = (unsigned int)*(float *)(*(int *)((*(int **)**(unsigned int **)(param_2 + 8))[4] * 4 +
                                       **(int **)**(unsigned int **)(param_2 + 8)) + 0x20);
      lStack_60 = (__int64)(int)uVar3;
      fn_8239D490(param_2,0,(unsigned __int64)uVar3 + 1);
    }
  }
  else {
    fn_82365BD8(&iStack_58,puVar6);
    uVar3 = (**(int (***)())(*param_1 + 4))(param_1);
    bVar1 = *(char *)(iStack_58 + 9) == '\0';
    if (param_4 == uVar3) {
      if (bVar1) {
        *(unsigned char *)(iStack_58 + 9) = 1;
LAB_823ab8dc:
        if (iStack_54 != 0) {
          fn_822315A0();
        }
        return 0;
      }
    }
    else {
      if ((!bVar1) && (*(char *)(iStack_58 + 8) == '\0')) {
        *(unsigned char *)(iStack_58 + 8) = 1;
        goto LAB_823ab8dc;
      }
      param_1[0x27] = 0;
    }
  }
  fn_8256D470(&lStack_60,piVar5,puVar6);
  if ((float)param_1[0x23] <= ltcg_pool_0_0f) {
    param_1[1] = 2;
  }
  if (iStack_54 != 0) {
    fn_822315A0();
  }
  return 1;
}

