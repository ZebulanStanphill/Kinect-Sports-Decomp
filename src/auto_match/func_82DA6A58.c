extern unsigned int *auStack_60;
extern int fn_82CE3E48();
extern int fn_82CE3F80();
extern int fn_82CE3FE8();
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82DA7590();


void fn_82DA6A58(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  int *piVar9;
  unsigned __int64 uVar10;
  unsigned int *puVar11;
  unsigned char auStack_60;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    piVar9 = (int *)(param_1 + 0x1c);
    do {
      iVar1 = *piVar9;
      uVar2 = *(unsigned int *)(param_1 + 0x20);
      uVar8 = (unsigned __int64)uVar2;
      uVar3 = *(unsigned int *)(param_1 + 0x24);
      *piVar9 = 0;
      *(unsigned int *)(param_1 + 0x20) = 0;
      *(unsigned int *)(param_1 + 0x24) = 0x80000000;
      *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x90) = 0;
      iVar6 = fn_82CE5410();
      if ((*(unsigned int *)(param_1 + 0x24) & 0x3fffffff) < 0x10) {
        uVar7 = (*(unsigned int *)(param_1 + 0x24) & 0x3fffffff) << 1;
        if (uVar7 < 0x11) {
          uVar7 = 0x10;
        }
        fn_82CE6310(*(unsigned int *)(iVar6 + 0x10),piVar9,uVar7,0x10);
      }
      if (1 < (int)uVar2) {
        fn_82DA7590(iVar1,0,uVar8 - 1,0xffffffff82da62c8);
      }
      if (0 < (int)uVar2) {
        puVar11 = (unsigned int *)(iVar1 + -0x10);
        uVar10 = uVar8;
        do {
          auStack_60 = 0;
          puVar5 = puVar11 + 5;
          puVar11 = puVar11 + 4;
          (**(int (***)())(*(int *)*puVar5 + 0xc))((int *)*puVar5,*puVar11,&auStack_60);
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      fn_82CE3F80();
      if (0 < (int)uVar2) {
        puVar11 = (unsigned int *)(iVar1 + -0x10);
        do {
          uVar4 = puVar11[5];
          puVar11 = puVar11 + 4;
          fn_82CE3E48(*puVar11);
          fn_82CE3E48(uVar4);
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
      fn_82CE3FE8();
      iVar6 = fn_82CE5410();
      if ((uVar3 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar6 + 0x10) + 0x10))
                  (*(int **)(iVar6 + 0x10),iVar1,uVar3 & 0x3fffffff,0x10);
      }
    } while (*(int *)(param_1 + 0x20) != 0);
  }
  return;
}

