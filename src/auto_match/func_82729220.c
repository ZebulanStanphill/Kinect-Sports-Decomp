extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696D38();
extern int fn_82722540();
extern int fn_82724448();
extern int fn_82728DD0();


void fn_82729220(int param_1)

{
  unsigned char *puVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar7;
  __int64 lVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  int aiStack_30;
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    iVar7 = (**(int (***)())(**(int **)(param_1 + 8) + 8))();
    if (iVar7 == 4) {
      iVar7 = *(int *)(param_1 + 8) + -0x68;
      if (*(int *)(param_1 + 8) == 0) {
        iVar7 = 0;
      }
      iVar2 = *(int *)(iVar7 + 0xe8);
      if (iVar2 != 0) {
        *(unsigned int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1U & 0x8fffffff;
      }
      iVar7 = *(int *)(iVar7 + 0xe8);
    }
    else {
      iVar7 = (**(int (***)())(**(int **)(param_1 + 8) + 8))();
      if (iVar7 != 0xd) {
        return;
      }
      iVar7 = *(int *)(param_1 + 8) + -0x10;
      if (*(int *)(param_1 + 8) == 0) {
        iVar7 = 0;
      }
      if (iVar7 != 0) {
        *(unsigned int *)(iVar7 + 8) = *(int *)(iVar7 + 8) + 1U & 0x8fffffff;
      }
    }
    if (iVar7 != 0) {
      lVar4 = fn_82724448(iVar7);
      if (lVar4 != 0) {
        uVar3 = *(unsigned int *)(param_1 + 0x18);
        uVar5 = fn_826957D0(param_1,0);
        fn_82696D38(&aiStack_30,uVar5,uVar3,0xffffffffffffffff,0);
        uVar6 = fn_82722540(&aiStack_30);
        if ((int)uVar6 < 5) {
          fn_82728DD0(param_1,(uVar6 & 0xfffffff) * 0x10 + lVar4);
        }
        lVar4 = (unsigned __int64)*(unsigned int *)(aiStack_30 + 8) - 1;
        *(int *)(aiStack_30 + 8) = (int)lVar4;
        if (lVar4 == 0) {
          fn_826944C8(aiStack_30);
        }
      }
      fn_826824B0(iVar7);
    }
  }
  return;
}

