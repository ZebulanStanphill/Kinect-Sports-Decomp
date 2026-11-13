extern int fn_822A0AD8();
extern int fn_822A0BC8();
extern int fn_822ABA88();
extern int fn_82399CB8();
extern unsigned int ltcg_pool_0_0f;


void fn_823A1558(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar4;
  unsigned __int64 uVar3;
  int iVar5;
  __int64 lVar6;
  int *piVar7;
  
  iVar4 = *(int *)(param_1 + 4);
  *(unsigned int *)(param_1 + 0x1c) = ltcg_pool_0_0f;
  if (iVar4 == 10) {
    iVar4 = *(int *)(param_1 + 8);
    uVar3 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar4 + 0x2e0) + 0x50);
    piVar7 = *(int **)(*(int *)(*(int *)(iVar4 + 0x2e0) + 0x4c) * 4 + **(int **)(iVar4 + 8));
LAB_823a170c:
    lVar6 = fn_822ABA88(*(unsigned int *)(piVar7[4] * 4 + *piVar7),uVar3);
    lVar6 = lVar6 + 0x30;
    uVar2 = *(unsigned int *)(iVar4 + 0xd4);
  }
  else {
    if (iVar4 == 0xb) {
      iVar5 = (**(int (***)())(**(int **)(*(int *)(param_1 + 8) + 0x2e0) + 0x94))();
      uVar3 = (**(int (***)())(**(int **)(*(int *)(param_1 + 8) + 0x2e0) + 0x98))();
      iVar4 = *(int *)(param_1 + 8);
      piVar7 = *(int **)(**(int **)(iVar4 + 8) + iVar5 * 4);
      goto LAB_823a170c;
    }
    if (iVar4 == 0xc) {
      uVar3 = (**(int (***)())(**(int **)(*(int *)(param_1 + 8) + 0x2e0) + 0x80))();
      iVar4 = *(int *)(param_1 + 8);
      piVar7 = *(int **)(*(int *)(*(int *)(iVar4 + 0x2e0) + 0xc) * 4 + **(int **)(iVar4 + 8));
      goto LAB_823a170c;
    }
    if (iVar4 != 0xf) {
      fn_822A0AD8((double)*(float *)(param_1 + 0x20),
                        *(unsigned int *)(*(int *)(param_1 + 8) + 0xd4),*(unsigned int *)(param_1 + 0xc)
                       );
      goto LAB_823a1734;
    }
    piVar7 = (int *)**(int **)(*(int *)(param_1 + 8) + 8);
    piVar1 = (int *)*piVar7;
    piVar7 = (int *)piVar7[1];
    if ((int)*(float *)(*(int *)(piVar1[4] * 4 + *piVar1) + 0x20) ==
        (int)*(float *)(*(int *)(piVar7[4] * 4 + *piVar7) + 0x20)) {
      iVar4 = (**(int (***)())(**(int **)(*(int *)(param_1 + 8) + 0x2e0) + 4))();
    }
    else {
      iVar4 = fn_82399CB8();
    }
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 8) + 0xd4);
    piVar7 = *(int **)(**(int **)(*(int *)(param_1 + 8) + 8) + iVar4 * 4);
    lVar6 = (unsigned __int64)*(unsigned int *)(piVar7[4] * 4 + *piVar7) + 0xa8;
  }
  fn_822A0BC8((double)*(float *)(param_1 + 0x20),uVar2,*(unsigned int *)(param_1 + 0xc),param_3,
                    lVar6);
LAB_823a1734:
  *(unsigned int *)(param_1 + 0x14) = 0;
  return;
}

