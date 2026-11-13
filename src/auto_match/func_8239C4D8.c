typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_38;
extern int fn_8229F5A8();
extern int fn_8229F618();
extern int fn_8229F688();
extern int fn_8229F758();
extern int fn_8229F858();
extern int fn_8229FAB8();
extern int fn_8229FF28();
extern int fn_822A02D8();
extern int fn_82396230();
extern int fn_82F64988();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int ltcg_pool_0_0f;


void fn_8239C4D8(int param_1)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  unsigned __int64 uVar7;
  int iVar8;
  __int64 lVar9;
  int iVar10;
  int iStack_40;
  int iStack_3c;
  unsigned __int64 auStack_38;
  
  iVar2 = *(int *)(param_1 + 0xd4);
  uVar3 = *(unsigned int *)(param_1 + 0x54);
  bVar1 = true;
  if (((uVar3 < 4) || (uVar3 == 7)) || (uVar3 == 0x10)) {
    bVar1 = false;
  }
  if (((*(int *)(*(int *)(iVar2 + 0x14) + 0x14) != 0) ||
      (*(int *)(*(int *)(iVar2 + 0x18) + 0xc) != 0)) || (bVar6 = true, !bVar1)) {
    bVar6 = false;
  }
  if (*(int *)(param_1 + 0x178) == 1) {
    piVar4 = *(int **)(*(int *)(param_1 + 0xcc) * 4 + **(int **)(param_1 + 8));
    iVar10 = (int)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20);
    auStack_38 = (unsigned __int64)iVar10;
    if (*(int *)(iVar2 + 0x48) != iVar10) {
      *(int *)(iVar2 + 0x48) = iVar10;
      fn_8229FF28(*(unsigned int *)(iVar2 + 0xc));
    }
  }
  else {
    if (*(int *)(param_1 + 0x178) == 2) {
      piVar4 = *(int **)(param_1 + 0x2e0);
      piVar5 = *(int **)(*(int *)(param_1 + 0xcc) * 4 + **(int **)(param_1 + 8));
      iVar10 = (int)*(float *)(*(int *)(piVar5[4] * 4 + *piVar5) + 0x20);
      auStack_38 = (unsigned __int64)iVar10;
      if (*(int *)(iVar2 + 0x48) != iVar10) {
        *(int *)(iVar2 + 0x48) = iVar10;
        fn_8229FF28(*(unsigned int *)(iVar2 + 0xc));
      }
      bVar1 = *(int *)(*(int *)(iVar2 + 0xc) + 0x58) != 0;
      if (bVar6) {
        if (!bVar1) {
          fn_8229F5A8();
        }
      }
      else if (bVar1) {
        fn_8229F618();
      }
      iVar2 = *(int *)(param_1 + 0xd4);
      iStack_40 = 0;
      iStack_3c = 0;
      auStack_38 = auStack_38 & 0xffffffff;
      uVar7 = (**(int (***)())(*piVar4 + 0xa0))(piVar4);
      fn_822A02D8(uVar7,&iStack_40,&iStack_3c,&auStack_38);
      iVar8 = iStack_3c;
      iVar10 = iStack_40;
      lVar9 = (__int64)((unsigned int)((unsigned __int64)(auStack_38) >> 32));
      auStack_38 = (unsigned __int64)(iStack_40 * 0x3c + iStack_3c);
      fn_8229F758((double)ltcg_pool_0_0f,(double)(__int64)auStack_38,(double)lVar9,
                        *(unsigned int *)(iVar2 + 0xc));
      if ((9 < iVar8) || (uVar7 = 1, iVar10 != 0)) {
        uVar7 = 0;
      }
      fn_8229F858(*(unsigned int *)(iVar2 + 0xc),uVar7);
      goto LAB_8239c784;
    }
    piVar4 = (int *)**(int **)(param_1 + 8);
    piVar5 = (int *)*piVar4;
    iVar10 = (int)*(float *)(*(int *)(piVar5[4] * 4 + *piVar5) + 0x20);
    if (0x62 < iVar10) {
      iVar10 = 99;
    }
    piVar4 = (int *)piVar4[1];
    iVar8 = (int)*(float *)(*(int *)(piVar4[4] * 4 + *piVar4) + 0x20);
    auStack_38 = (unsigned __int64)iVar8;
    if (0x62 < iVar8) {
      iVar8 = 99;
    }
    if ((*(int *)(iVar2 + 0x48) != iVar10) || (*(int *)(iVar2 + 0x4c) != iVar8)) {
      *(int *)(iVar2 + 0x48) = iVar10;
      *(int *)(iVar2 + 0x4c) = iVar8;
      fn_8229FAB8(*(unsigned int *)(iVar2 + 0xc),iVar10);
    }
  }
  bVar1 = *(int *)(*(int *)(iVar2 + 0xc) + 0x58) != 0;
  if (bVar6) {
    if (!bVar1) {
      fn_8229F5A8();
    }
  }
  else if (bVar1) {
    fn_8229F618();
  }
LAB_8239c784:
  piVar4 = *(int **)(param_1 + 0x2e0);
  if ((piVar4 != (int *)0x0) && (*(int *)(param_1 + 0x178) != 2)) {
    iVar2 = *(int *)(param_1 + 0xd4);
    uVar7 = (**(int (***)())(*piVar4 + 0x88))(piVar4,param_1);
    iVar10 = iVar2 + 0x50;
    fn_82F64988(iVar10,0x40,uVar7);
    fn_8229F688(*(unsigned int *)(iVar2 + 0xc),iVar10,0);
  }
  *(unsigned int *)(param_1 + 0x240) = 1;
  fn_82396230(param_1);
  return;
}

